/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMainWindow_t {
    QByteArrayData data[214];
    char stringdata0[4997];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMainWindow_t qt_meta_stringdata_CMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CMainWindow"
QT_MOC_LITERAL(1, 12, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(4, 60, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 84, 25), // "on_actionSaveAs_triggered"
QT_MOC_LITERAL(6, 110, 23), // "on_actionInfo_triggered"
QT_MOC_LITERAL(7, 134, 32), // "on_actionImportFEModel_triggered"
QT_MOC_LITERAL(8, 167, 32), // "on_actionExportFEModel_triggered"
QT_MOC_LITERAL(9, 200, 33), // "on_actionImportGeometry_trigg..."
QT_MOC_LITERAL(10, 234, 33), // "on_actionExportGeometry_trigg..."
QT_MOC_LITERAL(11, 268, 32), // "on_actionImportProject_triggered"
QT_MOC_LITERAL(12, 301, 32), // "on_actionExportProject_triggered"
QT_MOC_LITERAL(13, 334, 30), // "on_actionImportImage_triggered"
QT_MOC_LITERAL(14, 365, 29), // "on_actionConvertFeb_triggered"
QT_MOC_LITERAL(15, 395, 29), // "on_actionConvertGeo_triggered"
QT_MOC_LITERAL(16, 425, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(17, 449, 24), // "on_recentFiles_triggered"
QT_MOC_LITERAL(18, 474, 8), // "QAction*"
QT_MOC_LITERAL(19, 483, 6), // "action"
QT_MOC_LITERAL(20, 490, 26), // "on_recentFEFiles_triggered"
QT_MOC_LITERAL(21, 517, 28), // "on_recentGeomFiles_triggered"
QT_MOC_LITERAL(22, 546, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(23, 570, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(24, 594, 34), // "on_actionInvertSelection_trig..."
QT_MOC_LITERAL(25, 629, 33), // "on_actionClearSelection_trigg..."
QT_MOC_LITERAL(26, 663, 34), // "on_actionDeleteSelection_trig..."
QT_MOC_LITERAL(27, 698, 32), // "on_actionHideSelection_triggered"
QT_MOC_LITERAL(28, 731, 33), // "on_actionHideUnselected_trigg..."
QT_MOC_LITERAL(29, 765, 28), // "on_actionUnhideAll_triggered"
QT_MOC_LITERAL(30, 794, 32), // "on_actionToggleVisible_triggered"
QT_MOC_LITERAL(31, 827, 32), // "on_actionNameSelection_triggered"
QT_MOC_LITERAL(32, 860, 28), // "on_actionTransform_triggered"
QT_MOC_LITERAL(33, 889, 36), // "on_actionCollapseTransform_tr..."
QT_MOC_LITERAL(34, 926, 24), // "on_actionClone_triggered"
QT_MOC_LITERAL(35, 951, 28), // "on_actionCloneGrid_triggered"
QT_MOC_LITERAL(36, 980, 31), // "on_actionCloneRevolve_triggered"
QT_MOC_LITERAL(37, 1012, 24), // "on_actionMerge_triggered"
QT_MOC_LITERAL(38, 1037, 24), // "on_actionPurge_triggered"
QT_MOC_LITERAL(39, 1062, 25), // "on_actionDetach_triggered"
QT_MOC_LITERAL(40, 1088, 26), // "on_actionExtract_triggered"
QT_MOC_LITERAL(41, 1115, 30), // "on_actionEditProject_triggered"
QT_MOC_LITERAL(42, 1146, 29), // "on_actionFaceToElem_triggered"
QT_MOC_LITERAL(43, 1176, 24), // "on_actionAddBC_triggered"
QT_MOC_LITERAL(44, 1201, 31), // "on_actionAddNodalLoad_triggered"
QT_MOC_LITERAL(45, 1233, 30), // "on_actionAddSurfLoad_triggered"
QT_MOC_LITERAL(46, 1264, 30), // "on_actionAddBodyLoad_triggered"
QT_MOC_LITERAL(47, 1295, 24), // "on_actionAddIC_triggered"
QT_MOC_LITERAL(48, 1320, 29), // "on_actionAddContact_triggered"
QT_MOC_LITERAL(49, 1350, 32), // "on_actionAddConstraint_triggered"
QT_MOC_LITERAL(50, 1383, 37), // "on_actionAddRigidConstraint_t..."
QT_MOC_LITERAL(51, 1421, 36), // "on_actionAddRigidConnector_tr..."
QT_MOC_LITERAL(52, 1458, 30), // "on_actionAddMaterial_triggered"
QT_MOC_LITERAL(53, 1489, 26), // "on_actionAddStep_triggered"
QT_MOC_LITERAL(54, 1516, 30), // "on_actionAddReaction_triggered"
QT_MOC_LITERAL(55, 1547, 30), // "on_actionSoluteTable_triggered"
QT_MOC_LITERAL(56, 1578, 27), // "on_actionSBMTable_triggered"
QT_MOC_LITERAL(57, 1606, 30), // "on_actionCurveEditor_triggered"
QT_MOC_LITERAL(58, 1637, 32), // "on_actionMeshInspector_triggered"
QT_MOC_LITERAL(59, 1670, 38), // "on_actionElasticityConvertor_..."
QT_MOC_LITERAL(60, 1709, 27), // "on_actionFEBioRun_triggered"
QT_MOC_LITERAL(61, 1737, 28), // "on_actionFEBioStop_triggered"
QT_MOC_LITERAL(62, 1766, 32), // "on_actionFEBioOptimize_triggered"
QT_MOC_LITERAL(63, 1799, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(64, 1826, 28), // "on_actionLayerInfo_triggered"
QT_MOC_LITERAL(65, 1855, 27), // "on_actionPlaneCut_triggered"
QT_MOC_LITERAL(66, 1883, 30), // "on_actionMirrorPlane_triggered"
QT_MOC_LITERAL(67, 1914, 29), // "on_actionVectorPlot_triggered"
QT_MOC_LITERAL(68, 1944, 29), // "on_actionTensorPlot_triggered"
QT_MOC_LITERAL(69, 1974, 33), // "on_actionIsosurfacePlot_trigg..."
QT_MOC_LITERAL(70, 2008, 28), // "on_actionSlicePlot_triggered"
QT_MOC_LITERAL(71, 2037, 34), // "on_actionDisplacementMap_trig..."
QT_MOC_LITERAL(72, 2072, 33), // "on_actionStreamLinePlot_trigg..."
QT_MOC_LITERAL(73, 2106, 35), // "on_actionParticleFlowPlot_tri..."
QT_MOC_LITERAL(74, 2142, 33), // "on_actionVolumeFlowPlot_trigg..."
QT_MOC_LITERAL(75, 2176, 30), // "on_actionImageSlicer_triggered"
QT_MOC_LITERAL(76, 2207, 31), // "on_actionVolumeRender_triggered"
QT_MOC_LITERAL(77, 2239, 32), // "on_actionMarchingCubes_triggered"
QT_MOC_LITERAL(78, 2272, 24), // "on_actionGraph_triggered"
QT_MOC_LITERAL(79, 2297, 26), // "on_actionSummary_triggered"
QT_MOC_LITERAL(80, 2324, 24), // "on_actionStats_triggered"
QT_MOC_LITERAL(81, 2349, 28), // "on_actionIntegrate_triggered"
QT_MOC_LITERAL(82, 2378, 28), // "on_actionRecordNew_triggered"
QT_MOC_LITERAL(83, 2407, 30), // "on_actionRecordStart_triggered"
QT_MOC_LITERAL(84, 2438, 30), // "on_actionRecordPause_triggered"
QT_MOC_LITERAL(85, 2469, 29), // "on_actionRecordStop_triggered"
QT_MOC_LITERAL(86, 2499, 33), // "on_actionUndoViewChange_trigg..."
QT_MOC_LITERAL(87, 2533, 33), // "on_actionRedoViewChange_trigg..."
QT_MOC_LITERAL(88, 2567, 29), // "on_actionZoomSelect_triggered"
QT_MOC_LITERAL(89, 2597, 30), // "on_actionZoomExtents_triggered"
QT_MOC_LITERAL(90, 2628, 28), // "on_actionViewCapture_toggled"
QT_MOC_LITERAL(91, 2657, 8), // "bchecked"
QT_MOC_LITERAL(92, 2666, 22), // "on_actionOrtho_toggled"
QT_MOC_LITERAL(93, 2689, 1), // "b"
QT_MOC_LITERAL(94, 2691, 25), // "on_actionShowGrid_toggled"
QT_MOC_LITERAL(95, 2717, 30), // "on_actionShowMeshLines_toggled"
QT_MOC_LITERAL(96, 2748, 30), // "on_actionShowEdgeLines_toggled"
QT_MOC_LITERAL(97, 2779, 32), // "on_actionBackfaceCulling_toggled"
QT_MOC_LITERAL(98, 2812, 27), // "on_actionViewSmooth_toggled"
QT_MOC_LITERAL(99, 2840, 28), // "on_actionShowNormals_toggled"
QT_MOC_LITERAL(100, 2869, 27), // "on_actionShowFibers_toggled"
QT_MOC_LITERAL(101, 2897, 29), // "on_actionShowDiscrete_toggled"
QT_MOC_LITERAL(102, 2927, 24), // "on_actionFront_triggered"
QT_MOC_LITERAL(103, 2952, 23), // "on_actionBack_triggered"
QT_MOC_LITERAL(104, 2976, 23), // "on_actionLeft_triggered"
QT_MOC_LITERAL(105, 3000, 24), // "on_actionRight_triggered"
QT_MOC_LITERAL(106, 3025, 22), // "on_actionTop_triggered"
QT_MOC_LITERAL(107, 3048, 25), // "on_actionBottom_triggered"
QT_MOC_LITERAL(108, 3074, 26), // "on_actionWireframe_toggled"
QT_MOC_LITERAL(109, 3101, 25), // "on_actionSnap3D_triggered"
QT_MOC_LITERAL(110, 3127, 22), // "on_actionTrack_toggled"
QT_MOC_LITERAL(111, 3150, 29), // "on_actionOnlineHelp_triggered"
QT_MOC_LITERAL(112, 3180, 27), // "on_actionFEBioURL_triggered"
QT_MOC_LITERAL(113, 3208, 29), // "on_actionFEBioForum_triggered"
QT_MOC_LITERAL(114, 3238, 33), // "on_actionFEBioResources_trigg..."
QT_MOC_LITERAL(115, 3272, 28), // "on_actionFEBioPubs_triggered"
QT_MOC_LITERAL(116, 3301, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(117, 3326, 23), // "on_actionSelect_toggled"
QT_MOC_LITERAL(118, 3350, 26), // "on_actionTranslate_toggled"
QT_MOC_LITERAL(119, 3377, 23), // "on_actionRotate_toggled"
QT_MOC_LITERAL(120, 3401, 22), // "on_actionScale_toggled"
QT_MOC_LITERAL(121, 3424, 34), // "on_selectCoord_currentIndexCh..."
QT_MOC_LITERAL(122, 3459, 1), // "n"
QT_MOC_LITERAL(123, 3461, 30), // "on_actionSelectObjects_toggled"
QT_MOC_LITERAL(124, 3492, 28), // "on_actionSelectParts_toggled"
QT_MOC_LITERAL(125, 3521, 31), // "on_actionSelectSurfaces_toggled"
QT_MOC_LITERAL(126, 3553, 29), // "on_actionSelectCurves_toggled"
QT_MOC_LITERAL(127, 3583, 28), // "on_actionSelectNodes_toggled"
QT_MOC_LITERAL(128, 3612, 31), // "on_actionSelectDiscrete_toggled"
QT_MOC_LITERAL(129, 3644, 21), // "on_selectRect_toggled"
QT_MOC_LITERAL(130, 3666, 23), // "on_selectCircle_toggled"
QT_MOC_LITERAL(131, 3690, 21), // "on_selectFree_toggled"
QT_MOC_LITERAL(132, 3712, 33), // "on_selectData_currentValueCha..."
QT_MOC_LITERAL(133, 3746, 1), // "i"
QT_MOC_LITERAL(134, 3748, 21), // "on_actionPlay_toggled"
QT_MOC_LITERAL(135, 3770, 24), // "on_actionFirst_triggered"
QT_MOC_LITERAL(136, 3795, 23), // "on_actionPrev_triggered"
QT_MOC_LITERAL(137, 3819, 23), // "on_actionNext_triggered"
QT_MOC_LITERAL(138, 3843, 23), // "on_actionLast_triggered"
QT_MOC_LITERAL(139, 3867, 31), // "on_actionTimeSettings_triggered"
QT_MOC_LITERAL(140, 3899, 25), // "on_actionColorMap_toggled"
QT_MOC_LITERAL(141, 3925, 26), // "on_selectTime_valueChanged"
QT_MOC_LITERAL(142, 3952, 31), // "on_fontStyle_currentFontChanged"
QT_MOC_LITERAL(143, 3984, 4), // "font"
QT_MOC_LITERAL(144, 3989, 24), // "on_fontSize_valueChanged"
QT_MOC_LITERAL(145, 4014, 19), // "on_fontBold_toggled"
QT_MOC_LITERAL(146, 4034, 7), // "checked"
QT_MOC_LITERAL(147, 4042, 21), // "on_fontItalic_toggled"
QT_MOC_LITERAL(148, 4064, 29), // "on_actionProperties_triggered"
QT_MOC_LITERAL(149, 4094, 21), // "on_tab_currentChanged"
QT_MOC_LITERAL(150, 4116, 24), // "on_tab_tabCloseRequested"
QT_MOC_LITERAL(151, 4141, 35), // "on_modelViewer_currentObjectC..."
QT_MOC_LITERAL(152, 4177, 9), // "FSObject*"
QT_MOC_LITERAL(153, 4187, 2), // "po"
QT_MOC_LITERAL(154, 4190, 17), // "OnSelectMeshLayer"
QT_MOC_LITERAL(155, 4208, 2), // "ac"
QT_MOC_LITERAL(156, 4211, 9), // "CloseView"
QT_MOC_LITERAL(157, 4221, 9), // "CPostDoc*"
QT_MOC_LITERAL(158, 4231, 7), // "postDoc"
QT_MOC_LITERAL(159, 4239, 15), // "SetCurrentState"
QT_MOC_LITERAL(160, 4255, 10), // "closeEvent"
QT_MOC_LITERAL(161, 4266, 12), // "QCloseEvent*"
QT_MOC_LITERAL(162, 4279, 2), // "ev"
QT_MOC_LITERAL(163, 4282, 13), // "keyPressEvent"
QT_MOC_LITERAL(164, 4296, 10), // "QKeyEvent*"
QT_MOC_LITERAL(165, 4307, 19), // "finishedReadingFile"
QT_MOC_LITERAL(166, 4327, 7), // "success"
QT_MOC_LITERAL(167, 4335, 11), // "errorString"
QT_MOC_LITERAL(168, 4347, 17), // "checkFileProgress"
QT_MOC_LITERAL(169, 4365, 13), // "StopAnimation"
QT_MOC_LITERAL(170, 4379, 7), // "onTimer"
QT_MOC_LITERAL(171, 4387, 21), // "on_glview_pointPicked"
QT_MOC_LITERAL(172, 4409, 5), // "vec3d"
QT_MOC_LITERAL(173, 4415, 1), // "r"
QT_MOC_LITERAL(174, 4417, 26), // "on_glview_selectionChanged"
QT_MOC_LITERAL(175, 4444, 13), // "onRunFinished"
QT_MOC_LITERAL(176, 4458, 8), // "exitCode"
QT_MOC_LITERAL(177, 4467, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(178, 4488, 2), // "es"
QT_MOC_LITERAL(179, 4491, 11), // "onReadyRead"
QT_MOC_LITERAL(180, 4503, 15), // "onErrorOccurred"
QT_MOC_LITERAL(181, 4519, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(182, 4542, 3), // "err"
QT_MOC_LITERAL(183, 4546, 17), // "onExportMaterials"
QT_MOC_LITERAL(184, 4564, 18), // "vector<GMaterial*>"
QT_MOC_LITERAL(185, 4583, 7), // "matList"
QT_MOC_LITERAL(186, 4591, 20), // "onExportAllMaterials"
QT_MOC_LITERAL(187, 4612, 17), // "onImportMaterials"
QT_MOC_LITERAL(188, 4630, 18), // "DeleteAllMaterials"
QT_MOC_LITERAL(189, 4649, 11), // "DeleteAllBC"
QT_MOC_LITERAL(190, 4661, 14), // "DeleteAllLoads"
QT_MOC_LITERAL(191, 4676, 11), // "DeleteAllIC"
QT_MOC_LITERAL(192, 4688, 16), // "DeleteAllContact"
QT_MOC_LITERAL(193, 4705, 20), // "DeleteAllConstraints"
QT_MOC_LITERAL(194, 4726, 25), // "DeleteAllRigidConstraints"
QT_MOC_LITERAL(195, 4752, 24), // "DeleteAllRigidConnectors"
QT_MOC_LITERAL(196, 4777, 14), // "DeleteAllSteps"
QT_MOC_LITERAL(197, 4792, 9), // "GetGLView"
QT_MOC_LITERAL(198, 4802, 8), // "CGLView*"
QT_MOC_LITERAL(199, 4811, 14), // "changeViewMode"
QT_MOC_LITERAL(200, 4826, 9), // "View_Mode"
QT_MOC_LITERAL(201, 4836, 2), // "vm"
QT_MOC_LITERAL(202, 4839, 15), // "GetCurrentModel"
QT_MOC_LITERAL(203, 4855, 15), // "Post::CGLModel*"
QT_MOC_LITERAL(204, 4871, 17), // "UpdateFontToolbar"
QT_MOC_LITERAL(205, 4889, 11), // "RunFEBioJob"
QT_MOC_LITERAL(206, 4901, 10), // "CFEBioJob*"
QT_MOC_LITERAL(207, 4912, 3), // "job"
QT_MOC_LITERAL(208, 4916, 15), // "NextSSHFunction"
QT_MOC_LITERAL(209, 4932, 12), // "CSSHHandler*"
QT_MOC_LITERAL(210, 4945, 15), // "ShowSSHProgress"
QT_MOC_LITERAL(211, 4961, 4), // "show"
QT_MOC_LITERAL(212, 4966, 17), // "UpdateSSHProgress"
QT_MOC_LITERAL(213, 4984, 12) // "DoModelCheck"

    },
    "CMainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSaveAs_triggered\0"
    "on_actionInfo_triggered\0"
    "on_actionImportFEModel_triggered\0"
    "on_actionExportFEModel_triggered\0"
    "on_actionImportGeometry_triggered\0"
    "on_actionExportGeometry_triggered\0"
    "on_actionImportProject_triggered\0"
    "on_actionExportProject_triggered\0"
    "on_actionImportImage_triggered\0"
    "on_actionConvertFeb_triggered\0"
    "on_actionConvertGeo_triggered\0"
    "on_actionExit_triggered\0"
    "on_recentFiles_triggered\0QAction*\0"
    "action\0on_recentFEFiles_triggered\0"
    "on_recentGeomFiles_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionInvertSelection_triggered\0"
    "on_actionClearSelection_triggered\0"
    "on_actionDeleteSelection_triggered\0"
    "on_actionHideSelection_triggered\0"
    "on_actionHideUnselected_triggered\0"
    "on_actionUnhideAll_triggered\0"
    "on_actionToggleVisible_triggered\0"
    "on_actionNameSelection_triggered\0"
    "on_actionTransform_triggered\0"
    "on_actionCollapseTransform_triggered\0"
    "on_actionClone_triggered\0"
    "on_actionCloneGrid_triggered\0"
    "on_actionCloneRevolve_triggered\0"
    "on_actionMerge_triggered\0"
    "on_actionPurge_triggered\0"
    "on_actionDetach_triggered\0"
    "on_actionExtract_triggered\0"
    "on_actionEditProject_triggered\0"
    "on_actionFaceToElem_triggered\0"
    "on_actionAddBC_triggered\0"
    "on_actionAddNodalLoad_triggered\0"
    "on_actionAddSurfLoad_triggered\0"
    "on_actionAddBodyLoad_triggered\0"
    "on_actionAddIC_triggered\0"
    "on_actionAddContact_triggered\0"
    "on_actionAddConstraint_triggered\0"
    "on_actionAddRigidConstraint_triggered\0"
    "on_actionAddRigidConnector_triggered\0"
    "on_actionAddMaterial_triggered\0"
    "on_actionAddStep_triggered\0"
    "on_actionAddReaction_triggered\0"
    "on_actionSoluteTable_triggered\0"
    "on_actionSBMTable_triggered\0"
    "on_actionCurveEditor_triggered\0"
    "on_actionMeshInspector_triggered\0"
    "on_actionElasticityConvertor_triggered\0"
    "on_actionFEBioRun_triggered\0"
    "on_actionFEBioStop_triggered\0"
    "on_actionFEBioOptimize_triggered\0"
    "on_actionOptions_triggered\0"
    "on_actionLayerInfo_triggered\0"
    "on_actionPlaneCut_triggered\0"
    "on_actionMirrorPlane_triggered\0"
    "on_actionVectorPlot_triggered\0"
    "on_actionTensorPlot_triggered\0"
    "on_actionIsosurfacePlot_triggered\0"
    "on_actionSlicePlot_triggered\0"
    "on_actionDisplacementMap_triggered\0"
    "on_actionStreamLinePlot_triggered\0"
    "on_actionParticleFlowPlot_triggered\0"
    "on_actionVolumeFlowPlot_triggered\0"
    "on_actionImageSlicer_triggered\0"
    "on_actionVolumeRender_triggered\0"
    "on_actionMarchingCubes_triggered\0"
    "on_actionGraph_triggered\0"
    "on_actionSummary_triggered\0"
    "on_actionStats_triggered\0"
    "on_actionIntegrate_triggered\0"
    "on_actionRecordNew_triggered\0"
    "on_actionRecordStart_triggered\0"
    "on_actionRecordPause_triggered\0"
    "on_actionRecordStop_triggered\0"
    "on_actionUndoViewChange_triggered\0"
    "on_actionRedoViewChange_triggered\0"
    "on_actionZoomSelect_triggered\0"
    "on_actionZoomExtents_triggered\0"
    "on_actionViewCapture_toggled\0bchecked\0"
    "on_actionOrtho_toggled\0b\0"
    "on_actionShowGrid_toggled\0"
    "on_actionShowMeshLines_toggled\0"
    "on_actionShowEdgeLines_toggled\0"
    "on_actionBackfaceCulling_toggled\0"
    "on_actionViewSmooth_toggled\0"
    "on_actionShowNormals_toggled\0"
    "on_actionShowFibers_toggled\0"
    "on_actionShowDiscrete_toggled\0"
    "on_actionFront_triggered\0"
    "on_actionBack_triggered\0on_actionLeft_triggered\0"
    "on_actionRight_triggered\0"
    "on_actionTop_triggered\0on_actionBottom_triggered\0"
    "on_actionWireframe_toggled\0"
    "on_actionSnap3D_triggered\0"
    "on_actionTrack_toggled\0"
    "on_actionOnlineHelp_triggered\0"
    "on_actionFEBioURL_triggered\0"
    "on_actionFEBioForum_triggered\0"
    "on_actionFEBioResources_triggered\0"
    "on_actionFEBioPubs_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionSelect_toggled\0"
    "on_actionTranslate_toggled\0"
    "on_actionRotate_toggled\0on_actionScale_toggled\0"
    "on_selectCoord_currentIndexChanged\0n\0"
    "on_actionSelectObjects_toggled\0"
    "on_actionSelectParts_toggled\0"
    "on_actionSelectSurfaces_toggled\0"
    "on_actionSelectCurves_toggled\0"
    "on_actionSelectNodes_toggled\0"
    "on_actionSelectDiscrete_toggled\0"
    "on_selectRect_toggled\0on_selectCircle_toggled\0"
    "on_selectFree_toggled\0"
    "on_selectData_currentValueChanged\0i\0"
    "on_actionPlay_toggled\0on_actionFirst_triggered\0"
    "on_actionPrev_triggered\0on_actionNext_triggered\0"
    "on_actionLast_triggered\0"
    "on_actionTimeSettings_triggered\0"
    "on_actionColorMap_toggled\0"
    "on_selectTime_valueChanged\0"
    "on_fontStyle_currentFontChanged\0font\0"
    "on_fontSize_valueChanged\0on_fontBold_toggled\0"
    "checked\0on_fontItalic_toggled\0"
    "on_actionProperties_triggered\0"
    "on_tab_currentChanged\0on_tab_tabCloseRequested\0"
    "on_modelViewer_currentObjectChanged\0"
    "FSObject*\0po\0OnSelectMeshLayer\0ac\0"
    "CloseView\0CPostDoc*\0postDoc\0SetCurrentState\0"
    "closeEvent\0QCloseEvent*\0ev\0keyPressEvent\0"
    "QKeyEvent*\0finishedReadingFile\0success\0"
    "errorString\0checkFileProgress\0"
    "StopAnimation\0onTimer\0on_glview_pointPicked\0"
    "vec3d\0r\0on_glview_selectionChanged\0"
    "onRunFinished\0exitCode\0QProcess::ExitStatus\0"
    "es\0onReadyRead\0onErrorOccurred\0"
    "QProcess::ProcessError\0err\0onExportMaterials\0"
    "vector<GMaterial*>\0matList\0"
    "onExportAllMaterials\0onImportMaterials\0"
    "DeleteAllMaterials\0DeleteAllBC\0"
    "DeleteAllLoads\0DeleteAllIC\0DeleteAllContact\0"
    "DeleteAllConstraints\0DeleteAllRigidConstraints\0"
    "DeleteAllRigidConnectors\0DeleteAllSteps\0"
    "GetGLView\0CGLView*\0changeViewMode\0"
    "View_Mode\0vm\0GetCurrentModel\0"
    "Post::CGLModel*\0UpdateFontToolbar\0"
    "RunFEBioJob\0CFEBioJob*\0job\0NextSSHFunction\0"
    "CSSHHandler*\0ShowSSHProgress\0show\0"
    "UpdateSSHProgress\0DoModelCheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     178,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  904,    2, 0x0a /* Public */,
       3,    0,  905,    2, 0x0a /* Public */,
       4,    0,  906,    2, 0x0a /* Public */,
       5,    0,  907,    2, 0x0a /* Public */,
       6,    0,  908,    2, 0x0a /* Public */,
       7,    0,  909,    2, 0x0a /* Public */,
       8,    0,  910,    2, 0x0a /* Public */,
       9,    0,  911,    2, 0x0a /* Public */,
      10,    0,  912,    2, 0x0a /* Public */,
      11,    0,  913,    2, 0x0a /* Public */,
      12,    0,  914,    2, 0x0a /* Public */,
      13,    0,  915,    2, 0x0a /* Public */,
      14,    0,  916,    2, 0x0a /* Public */,
      15,    0,  917,    2, 0x0a /* Public */,
      16,    0,  918,    2, 0x0a /* Public */,
      17,    1,  919,    2, 0x0a /* Public */,
      20,    1,  922,    2, 0x0a /* Public */,
      21,    1,  925,    2, 0x0a /* Public */,
      22,    0,  928,    2, 0x0a /* Public */,
      23,    0,  929,    2, 0x0a /* Public */,
      24,    0,  930,    2, 0x0a /* Public */,
      25,    0,  931,    2, 0x0a /* Public */,
      26,    0,  932,    2, 0x0a /* Public */,
      27,    0,  933,    2, 0x0a /* Public */,
      28,    0,  934,    2, 0x0a /* Public */,
      29,    0,  935,    2, 0x0a /* Public */,
      30,    0,  936,    2, 0x0a /* Public */,
      31,    0,  937,    2, 0x0a /* Public */,
      32,    0,  938,    2, 0x0a /* Public */,
      33,    0,  939,    2, 0x0a /* Public */,
      34,    0,  940,    2, 0x0a /* Public */,
      35,    0,  941,    2, 0x0a /* Public */,
      36,    0,  942,    2, 0x0a /* Public */,
      37,    0,  943,    2, 0x0a /* Public */,
      38,    0,  944,    2, 0x0a /* Public */,
      39,    0,  945,    2, 0x0a /* Public */,
      40,    0,  946,    2, 0x0a /* Public */,
      41,    0,  947,    2, 0x0a /* Public */,
      42,    0,  948,    2, 0x0a /* Public */,
      43,    0,  949,    2, 0x0a /* Public */,
      44,    0,  950,    2, 0x0a /* Public */,
      45,    0,  951,    2, 0x0a /* Public */,
      46,    0,  952,    2, 0x0a /* Public */,
      47,    0,  953,    2, 0x0a /* Public */,
      48,    0,  954,    2, 0x0a /* Public */,
      49,    0,  955,    2, 0x0a /* Public */,
      50,    0,  956,    2, 0x0a /* Public */,
      51,    0,  957,    2, 0x0a /* Public */,
      52,    0,  958,    2, 0x0a /* Public */,
      53,    0,  959,    2, 0x0a /* Public */,
      54,    0,  960,    2, 0x0a /* Public */,
      55,    0,  961,    2, 0x0a /* Public */,
      56,    0,  962,    2, 0x0a /* Public */,
      57,    0,  963,    2, 0x0a /* Public */,
      58,    0,  964,    2, 0x0a /* Public */,
      59,    0,  965,    2, 0x0a /* Public */,
      60,    0,  966,    2, 0x0a /* Public */,
      61,    0,  967,    2, 0x0a /* Public */,
      62,    0,  968,    2, 0x0a /* Public */,
      63,    0,  969,    2, 0x0a /* Public */,
      64,    0,  970,    2, 0x0a /* Public */,
      65,    0,  971,    2, 0x0a /* Public */,
      66,    0,  972,    2, 0x0a /* Public */,
      67,    0,  973,    2, 0x0a /* Public */,
      68,    0,  974,    2, 0x0a /* Public */,
      69,    0,  975,    2, 0x0a /* Public */,
      70,    0,  976,    2, 0x0a /* Public */,
      71,    0,  977,    2, 0x0a /* Public */,
      72,    0,  978,    2, 0x0a /* Public */,
      73,    0,  979,    2, 0x0a /* Public */,
      74,    0,  980,    2, 0x0a /* Public */,
      75,    0,  981,    2, 0x0a /* Public */,
      76,    0,  982,    2, 0x0a /* Public */,
      77,    0,  983,    2, 0x0a /* Public */,
      78,    0,  984,    2, 0x0a /* Public */,
      79,    0,  985,    2, 0x0a /* Public */,
      80,    0,  986,    2, 0x0a /* Public */,
      81,    0,  987,    2, 0x0a /* Public */,
      82,    0,  988,    2, 0x0a /* Public */,
      83,    0,  989,    2, 0x0a /* Public */,
      84,    0,  990,    2, 0x0a /* Public */,
      85,    0,  991,    2, 0x0a /* Public */,
      86,    0,  992,    2, 0x0a /* Public */,
      87,    0,  993,    2, 0x0a /* Public */,
      88,    0,  994,    2, 0x0a /* Public */,
      89,    0,  995,    2, 0x0a /* Public */,
      90,    1,  996,    2, 0x0a /* Public */,
      92,    1,  999,    2, 0x0a /* Public */,
      94,    1, 1002,    2, 0x0a /* Public */,
      95,    1, 1005,    2, 0x0a /* Public */,
      96,    1, 1008,    2, 0x0a /* Public */,
      97,    1, 1011,    2, 0x0a /* Public */,
      98,    1, 1014,    2, 0x0a /* Public */,
      99,    1, 1017,    2, 0x0a /* Public */,
     100,    1, 1020,    2, 0x0a /* Public */,
     101,    1, 1023,    2, 0x0a /* Public */,
     102,    0, 1026,    2, 0x0a /* Public */,
     103,    0, 1027,    2, 0x0a /* Public */,
     104,    0, 1028,    2, 0x0a /* Public */,
     105,    0, 1029,    2, 0x0a /* Public */,
     106,    0, 1030,    2, 0x0a /* Public */,
     107,    0, 1031,    2, 0x0a /* Public */,
     108,    1, 1032,    2, 0x0a /* Public */,
     109,    0, 1035,    2, 0x0a /* Public */,
     110,    1, 1036,    2, 0x0a /* Public */,
     111,    0, 1039,    2, 0x0a /* Public */,
     112,    0, 1040,    2, 0x0a /* Public */,
     113,    0, 1041,    2, 0x0a /* Public */,
     114,    0, 1042,    2, 0x0a /* Public */,
     115,    0, 1043,    2, 0x0a /* Public */,
     116,    0, 1044,    2, 0x0a /* Public */,
     117,    1, 1045,    2, 0x0a /* Public */,
     118,    1, 1048,    2, 0x0a /* Public */,
     119,    1, 1051,    2, 0x0a /* Public */,
     120,    1, 1054,    2, 0x0a /* Public */,
     121,    1, 1057,    2, 0x0a /* Public */,
     123,    1, 1060,    2, 0x0a /* Public */,
     124,    1, 1063,    2, 0x0a /* Public */,
     125,    1, 1066,    2, 0x0a /* Public */,
     126,    1, 1069,    2, 0x0a /* Public */,
     127,    1, 1072,    2, 0x0a /* Public */,
     128,    1, 1075,    2, 0x0a /* Public */,
     129,    1, 1078,    2, 0x0a /* Public */,
     130,    1, 1081,    2, 0x0a /* Public */,
     131,    1, 1084,    2, 0x0a /* Public */,
     132,    1, 1087,    2, 0x0a /* Public */,
     134,    1, 1090,    2, 0x0a /* Public */,
     135,    0, 1093,    2, 0x0a /* Public */,
     136,    0, 1094,    2, 0x0a /* Public */,
     137,    0, 1095,    2, 0x0a /* Public */,
     138,    0, 1096,    2, 0x0a /* Public */,
     139,    0, 1097,    2, 0x0a /* Public */,
     140,    1, 1098,    2, 0x0a /* Public */,
     141,    1, 1101,    2, 0x0a /* Public */,
     142,    1, 1104,    2, 0x0a /* Public */,
     144,    1, 1107,    2, 0x0a /* Public */,
     145,    1, 1110,    2, 0x0a /* Public */,
     147,    1, 1113,    2, 0x0a /* Public */,
     148,    0, 1116,    2, 0x0a /* Public */,
     149,    1, 1117,    2, 0x0a /* Public */,
     150,    1, 1120,    2, 0x0a /* Public */,
     151,    1, 1123,    2, 0x0a /* Public */,
     154,    1, 1126,    2, 0x0a /* Public */,
     156,    1, 1129,    2, 0x0a /* Public */,
     156,    1, 1132,    2, 0x0a /* Public */,
     159,    1, 1135,    2, 0x0a /* Public */,
     160,    1, 1138,    2, 0x0a /* Public */,
     163,    1, 1141,    2, 0x0a /* Public */,
     165,    2, 1144,    2, 0x0a /* Public */,
     168,    0, 1149,    2, 0x0a /* Public */,
     169,    0, 1150,    2, 0x0a /* Public */,
     170,    0, 1151,    2, 0x0a /* Public */,
     171,    1, 1152,    2, 0x0a /* Public */,
     174,    0, 1155,    2, 0x0a /* Public */,
     175,    2, 1156,    2, 0x0a /* Public */,
     179,    0, 1161,    2, 0x0a /* Public */,
     180,    1, 1162,    2, 0x0a /* Public */,
     183,    1, 1165,    2, 0x0a /* Public */,
     186,    0, 1168,    2, 0x0a /* Public */,
     187,    0, 1169,    2, 0x0a /* Public */,
     188,    0, 1170,    2, 0x0a /* Public */,
     189,    0, 1171,    2, 0x0a /* Public */,
     190,    0, 1172,    2, 0x0a /* Public */,
     191,    0, 1173,    2, 0x0a /* Public */,
     192,    0, 1174,    2, 0x0a /* Public */,
     193,    0, 1175,    2, 0x0a /* Public */,
     194,    0, 1176,    2, 0x0a /* Public */,
     195,    0, 1177,    2, 0x0a /* Public */,
     196,    0, 1178,    2, 0x0a /* Public */,
     197,    0, 1179,    2, 0x0a /* Public */,
     199,    1, 1180,    2, 0x0a /* Public */,
     202,    0, 1183,    2, 0x0a /* Public */,
     204,    0, 1184,    2, 0x0a /* Public */,
     205,    1, 1185,    2, 0x0a /* Public */,
     208,    1, 1188,    2, 0x0a /* Public */,
     210,    1, 1191,    2, 0x0a /* Public */,
     212,    1, 1194,    2, 0x0a /* Public */,
     213,    0, 1197,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Int,  133,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, QMetaType::QFont,  143,
    QMetaType::Void, QMetaType::Int,  133,
    QMetaType::Void, QMetaType::Bool,  146,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, 0x80000000 | 152,  153,
    QMetaType::Void, 0x80000000 | 18,  155,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, 0x80000000 | 157,  158,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void, 0x80000000 | 161,  162,
    QMetaType::Void, 0x80000000 | 164,  162,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,  166,  167,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 172,  173,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 177,  176,  178,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 181,  182,
    QMetaType::Void, 0x80000000 | 184,  185,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 198,
    QMetaType::Void, 0x80000000 | 200,  201,
    0x80000000 | 203,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 206,  207,
    QMetaType::Void, 0x80000000 | 209,    2,
    QMetaType::Void, QMetaType::Bool,  211,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Bool,

       0        // eod
};

void CMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSaveAs_triggered(); break;
        case 4: _t->on_actionInfo_triggered(); break;
        case 5: _t->on_actionImportFEModel_triggered(); break;
        case 6: _t->on_actionExportFEModel_triggered(); break;
        case 7: _t->on_actionImportGeometry_triggered(); break;
        case 8: _t->on_actionExportGeometry_triggered(); break;
        case 9: _t->on_actionImportProject_triggered(); break;
        case 10: _t->on_actionExportProject_triggered(); break;
        case 11: _t->on_actionImportImage_triggered(); break;
        case 12: _t->on_actionConvertFeb_triggered(); break;
        case 13: _t->on_actionConvertGeo_triggered(); break;
        case 14: _t->on_actionExit_triggered(); break;
        case 15: _t->on_recentFiles_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: _t->on_recentFEFiles_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 17: _t->on_recentGeomFiles_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 18: _t->on_actionUndo_triggered(); break;
        case 19: _t->on_actionRedo_triggered(); break;
        case 20: _t->on_actionInvertSelection_triggered(); break;
        case 21: _t->on_actionClearSelection_triggered(); break;
        case 22: _t->on_actionDeleteSelection_triggered(); break;
        case 23: _t->on_actionHideSelection_triggered(); break;
        case 24: _t->on_actionHideUnselected_triggered(); break;
        case 25: _t->on_actionUnhideAll_triggered(); break;
        case 26: _t->on_actionToggleVisible_triggered(); break;
        case 27: _t->on_actionNameSelection_triggered(); break;
        case 28: _t->on_actionTransform_triggered(); break;
        case 29: _t->on_actionCollapseTransform_triggered(); break;
        case 30: _t->on_actionClone_triggered(); break;
        case 31: _t->on_actionCloneGrid_triggered(); break;
        case 32: _t->on_actionCloneRevolve_triggered(); break;
        case 33: _t->on_actionMerge_triggered(); break;
        case 34: _t->on_actionPurge_triggered(); break;
        case 35: _t->on_actionDetach_triggered(); break;
        case 36: _t->on_actionExtract_triggered(); break;
        case 37: _t->on_actionEditProject_triggered(); break;
        case 38: _t->on_actionFaceToElem_triggered(); break;
        case 39: _t->on_actionAddBC_triggered(); break;
        case 40: _t->on_actionAddNodalLoad_triggered(); break;
        case 41: _t->on_actionAddSurfLoad_triggered(); break;
        case 42: _t->on_actionAddBodyLoad_triggered(); break;
        case 43: _t->on_actionAddIC_triggered(); break;
        case 44: _t->on_actionAddContact_triggered(); break;
        case 45: _t->on_actionAddConstraint_triggered(); break;
        case 46: _t->on_actionAddRigidConstraint_triggered(); break;
        case 47: _t->on_actionAddRigidConnector_triggered(); break;
        case 48: _t->on_actionAddMaterial_triggered(); break;
        case 49: _t->on_actionAddStep_triggered(); break;
        case 50: _t->on_actionAddReaction_triggered(); break;
        case 51: _t->on_actionSoluteTable_triggered(); break;
        case 52: _t->on_actionSBMTable_triggered(); break;
        case 53: _t->on_actionCurveEditor_triggered(); break;
        case 54: _t->on_actionMeshInspector_triggered(); break;
        case 55: _t->on_actionElasticityConvertor_triggered(); break;
        case 56: _t->on_actionFEBioRun_triggered(); break;
        case 57: _t->on_actionFEBioStop_triggered(); break;
        case 58: _t->on_actionFEBioOptimize_triggered(); break;
        case 59: _t->on_actionOptions_triggered(); break;
        case 60: _t->on_actionLayerInfo_triggered(); break;
        case 61: _t->on_actionPlaneCut_triggered(); break;
        case 62: _t->on_actionMirrorPlane_triggered(); break;
        case 63: _t->on_actionVectorPlot_triggered(); break;
        case 64: _t->on_actionTensorPlot_triggered(); break;
        case 65: _t->on_actionIsosurfacePlot_triggered(); break;
        case 66: _t->on_actionSlicePlot_triggered(); break;
        case 67: _t->on_actionDisplacementMap_triggered(); break;
        case 68: _t->on_actionStreamLinePlot_triggered(); break;
        case 69: _t->on_actionParticleFlowPlot_triggered(); break;
        case 70: _t->on_actionVolumeFlowPlot_triggered(); break;
        case 71: _t->on_actionImageSlicer_triggered(); break;
        case 72: _t->on_actionVolumeRender_triggered(); break;
        case 73: _t->on_actionMarchingCubes_triggered(); break;
        case 74: _t->on_actionGraph_triggered(); break;
        case 75: _t->on_actionSummary_triggered(); break;
        case 76: _t->on_actionStats_triggered(); break;
        case 77: _t->on_actionIntegrate_triggered(); break;
        case 78: _t->on_actionRecordNew_triggered(); break;
        case 79: _t->on_actionRecordStart_triggered(); break;
        case 80: _t->on_actionRecordPause_triggered(); break;
        case 81: _t->on_actionRecordStop_triggered(); break;
        case 82: _t->on_actionUndoViewChange_triggered(); break;
        case 83: _t->on_actionRedoViewChange_triggered(); break;
        case 84: _t->on_actionZoomSelect_triggered(); break;
        case 85: _t->on_actionZoomExtents_triggered(); break;
        case 86: _t->on_actionViewCapture_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->on_actionOrtho_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->on_actionShowGrid_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->on_actionShowMeshLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->on_actionShowEdgeLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->on_actionBackfaceCulling_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->on_actionViewSmooth_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: _t->on_actionShowNormals_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->on_actionShowFibers_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->on_actionShowDiscrete_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 96: _t->on_actionFront_triggered(); break;
        case 97: _t->on_actionBack_triggered(); break;
        case 98: _t->on_actionLeft_triggered(); break;
        case 99: _t->on_actionRight_triggered(); break;
        case 100: _t->on_actionTop_triggered(); break;
        case 101: _t->on_actionBottom_triggered(); break;
        case 102: _t->on_actionWireframe_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 103: _t->on_actionSnap3D_triggered(); break;
        case 104: _t->on_actionTrack_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 105: _t->on_actionOnlineHelp_triggered(); break;
        case 106: _t->on_actionFEBioURL_triggered(); break;
        case 107: _t->on_actionFEBioForum_triggered(); break;
        case 108: _t->on_actionFEBioResources_triggered(); break;
        case 109: _t->on_actionFEBioPubs_triggered(); break;
        case 110: _t->on_actionAbout_triggered(); break;
        case 111: _t->on_actionSelect_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->on_actionTranslate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: _t->on_actionRotate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 114: _t->on_actionScale_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 115: _t->on_selectCoord_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 116: _t->on_actionSelectObjects_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 117: _t->on_actionSelectParts_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: _t->on_actionSelectSurfaces_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 119: _t->on_actionSelectCurves_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: _t->on_actionSelectNodes_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 121: _t->on_actionSelectDiscrete_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 122: _t->on_selectRect_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 123: _t->on_selectCircle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 124: _t->on_selectFree_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 125: _t->on_selectData_currentValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->on_actionPlay_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 127: _t->on_actionFirst_triggered(); break;
        case 128: _t->on_actionPrev_triggered(); break;
        case 129: _t->on_actionNext_triggered(); break;
        case 130: _t->on_actionLast_triggered(); break;
        case 131: _t->on_actionTimeSettings_triggered(); break;
        case 132: _t->on_actionColorMap_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: _t->on_selectTime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 134: _t->on_fontStyle_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 135: _t->on_fontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 136: _t->on_fontBold_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 137: _t->on_fontItalic_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 138: _t->on_actionProperties_triggered(); break;
        case 139: _t->on_tab_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->on_tab_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 141: _t->on_modelViewer_currentObjectChanged((*reinterpret_cast< FSObject*(*)>(_a[1]))); break;
        case 142: _t->OnSelectMeshLayer((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 143: _t->CloseView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 144: _t->CloseView((*reinterpret_cast< CPostDoc*(*)>(_a[1]))); break;
        case 145: _t->SetCurrentState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 146: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 147: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 148: _t->finishedReadingFile((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 149: _t->checkFileProgress(); break;
        case 150: _t->StopAnimation(); break;
        case 151: _t->onTimer(); break;
        case 152: _t->on_glview_pointPicked((*reinterpret_cast< const vec3d(*)>(_a[1]))); break;
        case 153: _t->on_glview_selectionChanged(); break;
        case 154: _t->onRunFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 155: _t->onReadyRead(); break;
        case 156: _t->onErrorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 157: _t->onExportMaterials((*reinterpret_cast< const vector<GMaterial*>(*)>(_a[1]))); break;
        case 158: _t->onExportAllMaterials(); break;
        case 159: _t->onImportMaterials(); break;
        case 160: _t->DeleteAllMaterials(); break;
        case 161: _t->DeleteAllBC(); break;
        case 162: _t->DeleteAllLoads(); break;
        case 163: _t->DeleteAllIC(); break;
        case 164: _t->DeleteAllContact(); break;
        case 165: _t->DeleteAllConstraints(); break;
        case 166: _t->DeleteAllRigidConstraints(); break;
        case 167: _t->DeleteAllRigidConnectors(); break;
        case 168: _t->DeleteAllSteps(); break;
        case 169: { CGLView* _r = _t->GetGLView();
            if (_a[0]) *reinterpret_cast< CGLView**>(_a[0]) = std::move(_r); }  break;
        case 170: _t->changeViewMode((*reinterpret_cast< View_Mode(*)>(_a[1]))); break;
        case 171: { Post::CGLModel* _r = _t->GetCurrentModel();
            if (_a[0]) *reinterpret_cast< Post::CGLModel**>(_a[0]) = std::move(_r); }  break;
        case 172: _t->UpdateFontToolbar(); break;
        case 173: _t->RunFEBioJob((*reinterpret_cast< CFEBioJob*(*)>(_a[1]))); break;
        case 174: _t->NextSSHFunction((*reinterpret_cast< CSSHHandler*(*)>(_a[1]))); break;
        case 175: _t->ShowSSHProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 176: _t->UpdateSSHProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 177: { bool _r = _t->DoModelCheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_CMainWindow.data,
    qt_meta_data_CMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 178)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 178;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 178)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 178;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
