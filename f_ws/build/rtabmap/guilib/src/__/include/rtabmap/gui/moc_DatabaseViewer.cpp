/****************************************************************************
** Meta object code from reading C++ file 'DatabaseViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/rtabmap/guilib/include/rtabmap/gui/DatabaseViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__DatabaseViewer_t {
    QByteArrayData data[70];
    char stringdata0[1258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__DatabaseViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__DatabaseViewer_t qt_meta_stringdata_rtabmap__DatabaseViewer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "rtabmap::DatabaseViewer"
QT_MOC_LITERAL(1, 24, 13), // "writeSettings"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "restoreDefaultSettings"
QT_MOC_LITERAL(4, 62, 14), // "configModified"
QT_MOC_LITERAL(5, 77, 12), // "openDatabase"
QT_MOC_LITERAL(6, 90, 13), // "closeDatabase"
QT_MOC_LITERAL(7, 104, 15), // "recoverDatabase"
QT_MOC_LITERAL(8, 120, 10), // "updateInfo"
QT_MOC_LITERAL(9, 131, 16), // "updateStatistics"
QT_MOC_LITERAL(10, 148, 19), // "selectObstacleColor"
QT_MOC_LITERAL(11, 168, 17), // "selectGroundColor"
QT_MOC_LITERAL(12, 186, 16), // "selectEmptyColor"
QT_MOC_LITERAL(13, 203, 14), // "editDepthImage"
QT_MOC_LITERAL(14, 218, 13), // "generateGraph"
QT_MOC_LITERAL(15, 232, 14), // "editSaved2DMap"
QT_MOC_LITERAL(16, 247, 16), // "exportSaved2DMap"
QT_MOC_LITERAL(17, 264, 11), // "import2DMap"
QT_MOC_LITERAL(18, 276, 18), // "regenerateSavedMap"
QT_MOC_LITERAL(19, 295, 17), // "viewOptimizedMesh"
QT_MOC_LITERAL(20, 313, 19), // "exportOptimizedMesh"
QT_MOC_LITERAL(21, 333, 19), // "updateOptimizedMesh"
QT_MOC_LITERAL(22, 353, 14), // "exportDatabase"
QT_MOC_LITERAL(23, 368, 13), // "extractImages"
QT_MOC_LITERAL(24, 382, 14), // "exportPosesRaw"
QT_MOC_LITERAL(25, 397, 32), // "exportPosesRGBDSLAMMotionCapture"
QT_MOC_LITERAL(26, 430, 19), // "exportPosesRGBDSLAM"
QT_MOC_LITERAL(27, 450, 21), // "exportPosesRGBDSLAMID"
QT_MOC_LITERAL(28, 472, 16), // "exportPosesKITTI"
QT_MOC_LITERAL(29, 489, 15), // "exportPosesTORO"
QT_MOC_LITERAL(30, 505, 14), // "exportPosesG2O"
QT_MOC_LITERAL(31, 520, 14), // "exportPosesKML"
QT_MOC_LITERAL(32, 535, 13), // "exportGPS_TXT"
QT_MOC_LITERAL(33, 549, 13), // "exportGPS_KML"
QT_MOC_LITERAL(34, 563, 18), // "generateLocalGraph"
QT_MOC_LITERAL(35, 582, 19), // "regenerateLocalMaps"
QT_MOC_LITERAL(36, 602, 26), // "regenerateCurrentLocalMaps"
QT_MOC_LITERAL(37, 629, 9), // "view3DMap"
QT_MOC_LITERAL(38, 639, 13), // "generate3DMap"
QT_MOC_LITERAL(39, 653, 22), // "detectMoreLoopClosures"
QT_MOC_LITERAL(40, 676, 28), // "updateAllNeighborCovariances"
QT_MOC_LITERAL(41, 705, 31), // "updateAllLoopClosureCovariances"
QT_MOC_LITERAL(42, 737, 28), // "updateAllLandmarkCovariances"
QT_MOC_LITERAL(43, 766, 22), // "refineAllNeighborLinks"
QT_MOC_LITERAL(44, 789, 25), // "refineAllLoopClosureLinks"
QT_MOC_LITERAL(45, 815, 15), // "resetAllChanges"
QT_MOC_LITERAL(46, 831, 19), // "sliderAValueChanged"
QT_MOC_LITERAL(47, 851, 19), // "sliderBValueChanged"
QT_MOC_LITERAL(48, 871, 12), // "sliderAMoved"
QT_MOC_LITERAL(49, 884, 12), // "sliderBMoved"
QT_MOC_LITERAL(50, 897, 12), // "update3dView"
QT_MOC_LITERAL(51, 910, 26), // "sliderNeighborValueChanged"
QT_MOC_LITERAL(52, 937, 22), // "sliderLoopValueChanged"
QT_MOC_LITERAL(53, 960, 28), // "sliderIterationsValueChanged"
QT_MOC_LITERAL(54, 989, 14), // "editConstraint"
QT_MOC_LITERAL(55, 1004, 10), // "updateGrid"
QT_MOC_LITERAL(56, 1015, 17), // "updateOctomapView"
QT_MOC_LITERAL(57, 1033, 19), // "updateGraphRotation"
QT_MOC_LITERAL(58, 1053, 15), // "updateGraphView"
QT_MOC_LITERAL(59, 1069, 16), // "refineConstraint"
QT_MOC_LITERAL(60, 1086, 13), // "addConstraint"
QT_MOC_LITERAL(61, 1100, 15), // "resetConstraint"
QT_MOC_LITERAL(62, 1116, 16), // "rejectConstraint"
QT_MOC_LITERAL(63, 1133, 20), // "updateConstraintView"
QT_MOC_LITERAL(64, 1154, 17), // "updateLoggerLevel"
QT_MOC_LITERAL(65, 1172, 12), // "updateStereo"
QT_MOC_LITERAL(66, 1185, 23), // "notifyParametersChanged"
QT_MOC_LITERAL(67, 1209, 15), // "setupMainLayout"
QT_MOC_LITERAL(68, 1225, 8), // "vertical"
QT_MOC_LITERAL(69, 1234, 23) // "updateConstraintButtons"

    },
    "rtabmap::DatabaseViewer\0writeSettings\0"
    "\0restoreDefaultSettings\0configModified\0"
    "openDatabase\0closeDatabase\0recoverDatabase\0"
    "updateInfo\0updateStatistics\0"
    "selectObstacleColor\0selectGroundColor\0"
    "selectEmptyColor\0editDepthImage\0"
    "generateGraph\0editSaved2DMap\0"
    "exportSaved2DMap\0import2DMap\0"
    "regenerateSavedMap\0viewOptimizedMesh\0"
    "exportOptimizedMesh\0updateOptimizedMesh\0"
    "exportDatabase\0extractImages\0"
    "exportPosesRaw\0exportPosesRGBDSLAMMotionCapture\0"
    "exportPosesRGBDSLAM\0exportPosesRGBDSLAMID\0"
    "exportPosesKITTI\0exportPosesTORO\0"
    "exportPosesG2O\0exportPosesKML\0"
    "exportGPS_TXT\0exportGPS_KML\0"
    "generateLocalGraph\0regenerateLocalMaps\0"
    "regenerateCurrentLocalMaps\0view3DMap\0"
    "generate3DMap\0detectMoreLoopClosures\0"
    "updateAllNeighborCovariances\0"
    "updateAllLoopClosureCovariances\0"
    "updateAllLandmarkCovariances\0"
    "refineAllNeighborLinks\0refineAllLoopClosureLinks\0"
    "resetAllChanges\0sliderAValueChanged\0"
    "sliderBValueChanged\0sliderAMoved\0"
    "sliderBMoved\0update3dView\0"
    "sliderNeighborValueChanged\0"
    "sliderLoopValueChanged\0"
    "sliderIterationsValueChanged\0"
    "editConstraint\0updateGrid\0updateOctomapView\0"
    "updateGraphRotation\0updateGraphView\0"
    "refineConstraint\0addConstraint\0"
    "resetConstraint\0rejectConstraint\0"
    "updateConstraintView\0updateLoggerLevel\0"
    "updateStereo\0notifyParametersChanged\0"
    "setupMainLayout\0vertical\0"
    "updateConstraintButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__DatabaseViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  349,    2, 0x08 /* Private */,
       3,    0,  350,    2, 0x08 /* Private */,
       4,    0,  351,    2, 0x08 /* Private */,
       5,    0,  352,    2, 0x08 /* Private */,
       6,    0,  353,    2, 0x08 /* Private */,
       7,    0,  354,    2, 0x08 /* Private */,
       8,    0,  355,    2, 0x08 /* Private */,
       9,    0,  356,    2, 0x08 /* Private */,
      10,    0,  357,    2, 0x08 /* Private */,
      11,    0,  358,    2, 0x08 /* Private */,
      12,    0,  359,    2, 0x08 /* Private */,
      13,    0,  360,    2, 0x08 /* Private */,
      14,    0,  361,    2, 0x08 /* Private */,
      15,    0,  362,    2, 0x08 /* Private */,
      16,    0,  363,    2, 0x08 /* Private */,
      17,    0,  364,    2, 0x08 /* Private */,
      18,    0,  365,    2, 0x08 /* Private */,
      19,    0,  366,    2, 0x08 /* Private */,
      20,    0,  367,    2, 0x08 /* Private */,
      21,    0,  368,    2, 0x08 /* Private */,
      22,    0,  369,    2, 0x08 /* Private */,
      23,    0,  370,    2, 0x08 /* Private */,
      24,    0,  371,    2, 0x08 /* Private */,
      25,    0,  372,    2, 0x08 /* Private */,
      26,    0,  373,    2, 0x08 /* Private */,
      27,    0,  374,    2, 0x08 /* Private */,
      28,    0,  375,    2, 0x08 /* Private */,
      29,    0,  376,    2, 0x08 /* Private */,
      30,    0,  377,    2, 0x08 /* Private */,
      31,    0,  378,    2, 0x08 /* Private */,
      32,    0,  379,    2, 0x08 /* Private */,
      33,    0,  380,    2, 0x08 /* Private */,
      34,    0,  381,    2, 0x08 /* Private */,
      35,    0,  382,    2, 0x08 /* Private */,
      36,    0,  383,    2, 0x08 /* Private */,
      37,    0,  384,    2, 0x08 /* Private */,
      38,    0,  385,    2, 0x08 /* Private */,
      39,    0,  386,    2, 0x08 /* Private */,
      40,    0,  387,    2, 0x08 /* Private */,
      41,    0,  388,    2, 0x08 /* Private */,
      42,    0,  389,    2, 0x08 /* Private */,
      43,    0,  390,    2, 0x08 /* Private */,
      44,    0,  391,    2, 0x08 /* Private */,
      45,    0,  392,    2, 0x08 /* Private */,
      46,    1,  393,    2, 0x08 /* Private */,
      47,    1,  396,    2, 0x08 /* Private */,
      48,    1,  399,    2, 0x08 /* Private */,
      49,    1,  402,    2, 0x08 /* Private */,
      50,    0,  405,    2, 0x08 /* Private */,
      51,    1,  406,    2, 0x08 /* Private */,
      52,    1,  409,    2, 0x08 /* Private */,
      53,    1,  412,    2, 0x08 /* Private */,
      54,    0,  415,    2, 0x08 /* Private */,
      55,    0,  416,    2, 0x08 /* Private */,
      56,    0,  417,    2, 0x08 /* Private */,
      57,    0,  418,    2, 0x08 /* Private */,
      58,    0,  419,    2, 0x08 /* Private */,
      59,    0,  420,    2, 0x08 /* Private */,
      60,    0,  421,    2, 0x08 /* Private */,
      61,    0,  422,    2, 0x08 /* Private */,
      62,    0,  423,    2, 0x08 /* Private */,
      63,    0,  424,    2, 0x08 /* Private */,
      64,    0,  425,    2, 0x08 /* Private */,
      65,    0,  426,    2, 0x08 /* Private */,
      66,    1,  427,    2, 0x08 /* Private */,
      67,    1,  430,    2, 0x08 /* Private */,
      69,    0,  433,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void,

       0        // eod
};

void rtabmap::DatabaseViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->restoreDefaultSettings(); break;
        case 2: _t->configModified(); break;
        case 3: _t->openDatabase(); break;
        case 4: { bool _r = _t->closeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->recoverDatabase(); break;
        case 6: _t->updateInfo(); break;
        case 7: _t->updateStatistics(); break;
        case 8: _t->selectObstacleColor(); break;
        case 9: _t->selectGroundColor(); break;
        case 10: _t->selectEmptyColor(); break;
        case 11: _t->editDepthImage(); break;
        case 12: _t->generateGraph(); break;
        case 13: _t->editSaved2DMap(); break;
        case 14: _t->exportSaved2DMap(); break;
        case 15: _t->import2DMap(); break;
        case 16: _t->regenerateSavedMap(); break;
        case 17: _t->viewOptimizedMesh(); break;
        case 18: _t->exportOptimizedMesh(); break;
        case 19: _t->updateOptimizedMesh(); break;
        case 20: _t->exportDatabase(); break;
        case 21: _t->extractImages(); break;
        case 22: _t->exportPosesRaw(); break;
        case 23: _t->exportPosesRGBDSLAMMotionCapture(); break;
        case 24: _t->exportPosesRGBDSLAM(); break;
        case 25: _t->exportPosesRGBDSLAMID(); break;
        case 26: _t->exportPosesKITTI(); break;
        case 27: _t->exportPosesTORO(); break;
        case 28: _t->exportPosesG2O(); break;
        case 29: _t->exportPosesKML(); break;
        case 30: _t->exportGPS_TXT(); break;
        case 31: _t->exportGPS_KML(); break;
        case 32: _t->generateLocalGraph(); break;
        case 33: _t->regenerateLocalMaps(); break;
        case 34: _t->regenerateCurrentLocalMaps(); break;
        case 35: _t->view3DMap(); break;
        case 36: _t->generate3DMap(); break;
        case 37: _t->detectMoreLoopClosures(); break;
        case 38: _t->updateAllNeighborCovariances(); break;
        case 39: _t->updateAllLoopClosureCovariances(); break;
        case 40: _t->updateAllLandmarkCovariances(); break;
        case 41: _t->refineAllNeighborLinks(); break;
        case 42: _t->refineAllLoopClosureLinks(); break;
        case 43: _t->resetAllChanges(); break;
        case 44: _t->sliderAValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->sliderBValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->sliderAMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->sliderBMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->update3dView(); break;
        case 49: _t->sliderNeighborValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->sliderLoopValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->sliderIterationsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->editConstraint(); break;
        case 53: _t->updateGrid(); break;
        case 54: _t->updateOctomapView(); break;
        case 55: _t->updateGraphRotation(); break;
        case 56: _t->updateGraphView(); break;
        case 57: _t->refineConstraint(); break;
        case 58: _t->addConstraint(); break;
        case 59: _t->resetConstraint(); break;
        case 60: _t->rejectConstraint(); break;
        case 61: _t->updateConstraintView(); break;
        case 62: _t->updateLoggerLevel(); break;
        case 63: _t->updateStereo(); break;
        case 64: _t->notifyParametersChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 65: _t->setupMainLayout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->updateConstraintButtons(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::DatabaseViewer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_rtabmap__DatabaseViewer.data,
    qt_meta_data_rtabmap__DatabaseViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::DatabaseViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::DatabaseViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DatabaseViewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int rtabmap::DatabaseViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 67;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
