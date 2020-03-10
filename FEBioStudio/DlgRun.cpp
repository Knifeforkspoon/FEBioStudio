#include "stdafx.h"
#include "DlgRun.h"
#include <QAction>
#include <QFileDialog>
#include <QToolButton>
#include <QBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>
#include <QFormLayout>
#include <QCheckBox>
#include <QComboBox>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QGroupBox>
#include <FSCore/FSDir.h>
#include <string.h>
#include "DlgEditLConfigs.h"


class Ui::CDlgRun
{
public:
	QLineEdit*	cwd;
	QComboBox*	jobName;
	QComboBox*	launchConfig;
	QCheckBox*	debug;
	QCheckBox*	writeNotes;
	QLineEdit*	configFile;
	QLineEdit*	taskName;
	QLineEdit*	taskFile;

	QComboBox*	febioFile;
	
	QCheckBox* editCmd;
	QLineEdit*	cmd;

	std::vector<CLaunchConfig>* m_launch_configs;

	int m_last_index = -1;

public:
	void setup(QDialog* dlg)
	{
		jobName = new QComboBox;
		jobName->setEditable(true);

		launchConfig = new QComboBox;
		QAction* editLaunchConfigs = new QAction;
		editLaunchConfigs->setIcon(QIcon(":/icons/edit.png"));
		QToolButton* editLCBtn = new QToolButton;
		editLCBtn->setDefaultAction(editLaunchConfigs);
		QBoxLayout* launchConfigLayout = new QHBoxLayout;
		launchConfigLayout->addWidget(launchConfig);
		launchConfigLayout->addWidget(editLCBtn);
		

		cwd = new QLineEdit;
		QAction* setCWD = new QAction;
		setCWD->setIcon(QIcon(":/icons/open.png"));
		QToolButton* setCWDBtn = new QToolButton;
		setCWDBtn->setDefaultAction(setCWD);
		QBoxLayout* cwdLayout = new QBoxLayout(QBoxLayout::LeftToRight);
		cwdLayout->addWidget(cwd);
		cwdLayout->addWidget(setCWDBtn);

		febioFile = new QComboBox;
		febioFile->addItem("FEBio 2.5 format");
#ifdef _DEBUG
		febioFile->addItem("FEBio 3.0 format");
#endif

		configFile = new QLineEdit;
		configFile->setWhatsThis("Specify the location of an FEBio configuration file. (Optional)");
		QToolButton* selectConfigFile = new QToolButton;
		selectConfigFile->setIcon(QIcon(":/icons/open.png"));
		QHBoxLayout* configLayout = new QHBoxLayout;
		configLayout->addWidget(configFile);
		configLayout->addWidget(selectConfigFile);

		taskName = new QLineEdit;
		taskFile = new QLineEdit;

		QFormLayout* form = new QFormLayout;
		form->setLabelAlignment(Qt::AlignRight);
		form->addRow("Job name:", jobName);
		form->addRow("Launch Configuration:", launchConfigLayout);
		form->addRow("Working directory:", cwdLayout);
		form->addRow("FEBio file format:", febioFile);

		QFormLayout* ext = new QFormLayout;
		ext->setLabelAlignment(Qt::AlignRight);
		ext->addRow("Write notes:", writeNotes = new QCheckBox);
		ext->addRow("Debug mode:", debug = new QCheckBox(""));
		ext->addRow("Config file:", configLayout);
		ext->addRow("Task name:", taskName);
		ext->addRow("Task control file:", taskFile);

		writeNotes->setChecked(true);

		editCmd = new QCheckBox("override command");
		cmd = new QLineEdit; cmd->setEnabled(false);
		cmd->setText("-i $(Filename)");

		QVBoxLayout* v = new QVBoxLayout;
		v->addLayout(ext);
		v->addWidget(editCmd);
		v->addWidget(cmd);

		QGroupBox* pg = new QGroupBox("advanced settings:");
		pg->setLayout(v);
		pg->hide();

		QPushButton* run = new QPushButton("Run");
		QPushButton* cnl = new QPushButton("Cancel");
		QPushButton* more = new QPushButton("Advanced");
		more->setCheckable(true);

		QHBoxLayout* h = new QHBoxLayout;
		h->addStretch();
		h->addWidget(run);
		h->addWidget(cnl);
		h->addWidget(more);
		
		QVBoxLayout* l = new QVBoxLayout;
		l->addLayout(form);
		l->addWidget(pg);
		l->addLayout(h);
		dlg->setLayout(l);

		dlg->adjustSize();
		
		QObject::connect(editLCBtn, SIGNAL(clicked()), dlg, SLOT(on_editLCBtn_Clicked()));
		QObject::connect(setCWDBtn, SIGNAL(clicked()), dlg, SLOT(on_setCWDBtn_Clicked()));
		QObject::connect(run, SIGNAL(clicked()), dlg, SLOT(accept()));
		QObject::connect(cnl, SIGNAL(clicked()), dlg, SLOT(reject()));
		QObject::connect(more, SIGNAL(toggled(bool)), pg, SLOT(setVisible(bool)));
//		QObject::connect(launchConfig, SIGNAL(currentIndexChanged(int)), dlg, SLOT(onPathChanged(int)));

		QObject::connect(debug, SIGNAL(toggled(bool)), dlg, SLOT(updateDefaultCommand()));
		QObject::connect(editCmd, SIGNAL(toggled(bool)), cmd, SLOT(setEnabled(bool)));
		QObject::connect(selectConfigFile, SIGNAL(clicked()), dlg, SLOT(on_selectConfigFile()));
		QObject::connect(configFile, SIGNAL(textChanged(const QString&)), dlg, SLOT(updateDefaultCommand()));
		QObject::connect(taskName, SIGNAL(textChanged(const QString&)), dlg, SLOT(updateDefaultCommand()));
		QObject::connect(taskFile, SIGNAL(textChanged(const QString&)), dlg, SLOT(updateDefaultCommand()));
	}
};

void CDlgRun::on_selectConfigFile()
{
	QString s = QFileDialog::getOpenFileName(this, "Open");
	if (s.isEmpty() == false)
	{ 
#ifdef WIN32
		s.replace('/', '\\');
#endif
		ui->configFile->setText(s);
		updateDefaultCommand();
	}
}

void CDlgRun::updateDefaultCommand()
{
	bool bg = ui->debug->isChecked();

	if (ui->cmd->isEnabled() == false)
	{
		QString t("-i $(Filename)");
		if (bg) t += " -g";

		QString configFile = ui->configFile->text();
		if (configFile.isEmpty() == false) t += " -config $(ConfigFile)";

		QString taskName = ui->taskName->text();
		if (taskName.isEmpty() == false)
		{
			t += " -task=\"" + taskName + "\"";
			QString taskFile = ui->taskFile->text();
			t += " " + taskFile;
		}

		ui->cmd->setText(t);
	}
}

void CDlgRun::on_setCWDBtn_Clicked()
{
	QFileDialog dlg(this, "Working Directory",GetWorkingDirectory());
	dlg.setFileMode(QFileDialog::Directory);
	dlg.setAcceptMode(QFileDialog::AcceptOpen);
	if (dlg.exec())
	{
		dlg.setDirectory(GetWorkingDirectory());

		// get the file name
		QStringList files = dlg.selectedFiles();
		QString fileName = files.first();

		SetWorkingDirectory(fileName);
	}
}

void CDlgRun::SetWorkingDirectory(const QString& wd)
{
	QString workingDir(wd);
#ifdef WIN32
	workingDir.replace("/", "\\");
#endif
	ui->cwd->setText(workingDir);

	// show the absolute path as a tool tip
	std::string absPath = FSDir::toAbsolutePath(wd.toStdString());
	ui->cwd->setToolTip(QString::fromStdString(absPath));
}

void CDlgRun::SetJobName(const QString& fn)
{
	ui->jobName->setEditText(fn);
}

void CDlgRun::SetJobNames(QStringList& jobNames)
{
	ui->jobName->addItems(jobNames);
}

void CDlgRun::UpdateLaunchConfigBox(int index)
{
	ui->launchConfig->clear();

	QStringList launchConfigNames;
	for(CLaunchConfig conf : *ui->m_launch_configs)
	{
		launchConfigNames.append(QString::fromStdString(conf.name));
	}

	ui->launchConfig->addItems(launchConfigNames);

	if ((index >= 0) && (index < ui->launchConfig->count()))
		ui->launchConfig->setCurrentIndex(index);
}

void CDlgRun::SetLaunchConfig(std::vector<CLaunchConfig>& launchConfigs, int ndefault)
{
	ui->m_launch_configs = &launchConfigs;

	UpdateLaunchConfigBox(ndefault);
	ui->m_last_index = ndefault;
}

QString CDlgRun::GetWorkingDirectory()
{
	return ui->cwd->text();
}

QString CDlgRun::GetJobName()
{
	return ui->jobName->currentText();
}

QString CDlgRun::GetConfigFileName()
{
	return ui->configFile->text();
}

void CDlgRun::SetConfigFileName(const QString& configFile)
{
	ui->configFile->setText(configFile);
}

int CDlgRun::GetLaunchConfig()
{
	return ui->launchConfig->currentIndex();
}

int CDlgRun::GetFEBioFileVersion()
{
	return ui->febioFile->currentIndex();
}

bool CDlgRun::WriteNotes()
{
	return ui->writeNotes->isChecked();
}

QString CDlgRun::CommandLine()
{
	return ui->cmd->text();
}

CDlgRun::CDlgRun(QWidget* parent) : QDialog(parent), ui(new Ui::CDlgRun)
{
	ui->setup(this);
	ui->jobName->setFocus();
	setWindowTitle("Run FEBio");
	resize(500, 300);
}

void CDlgRun::on_editLCBtn_Clicked()
{
	CDlgEditPath dlg(this, ui->m_launch_configs);

	if (dlg.exec())
	{
		UpdateLaunchConfigBox(dlg.GetLCIndex());
	}
}


void CDlgRun::accept()
{
	// see if the path is valid
	QString path = ui->cwd->text();
	if (path.isEmpty())
	{
		QMessageBox::critical(this, "FEBio Studio", "You must enter a valid working directory.");
		return;
	}

	// convert to an absolute path
	std::string spath = path.toStdString();
	FSDir dir(spath);
	spath = dir.toAbsolutePath();

	// check if it exists
	// TODO: Commenting this out since it was annoying to see this question every time. 
/*
	QDir qdir(QString::fromStdString(spath));
	if (path.isEmpty() || (qdir.exists() == false))
	{
		QMessageBox::StandardButton reply;
		reply = QMessageBox::question(this, "FEBio Studio", "The directory you specified does not exist. Create it?",
				QMessageBox::Yes|QMessageBox::No);

		if(!(reply == QMessageBox::Yes))
		{
			return;
		}
	}
*/
	// see if the job name is defined
	if (ui->jobName->currentText().isEmpty())
	{
		QMessageBox::critical(this, "FEBio Studio", "You must enter valid job name.");
		return;
	}

	QDialog::accept();
}
