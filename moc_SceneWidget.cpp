/****************************************************************************
** Meta object code from reading C++ file 'SceneWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SceneWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SceneWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SceneWidget_t {
    QByteArrayData data[12];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneWidget_t qt_meta_stringdata_SceneWidget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 11),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 15),
QT_MOC_LITERAL(4, 41, 11),
QT_MOC_LITERAL(5, 53, 5),
QT_MOC_LITERAL(6, 59, 18),
QT_MOC_LITERAL(7, 78, 20),
QT_MOC_LITERAL(8, 99, 18),
QT_MOC_LITERAL(9, 118, 9),
QT_MOC_LITERAL(10, 128, 11),
QT_MOC_LITERAL(11, 140, 10)
    },
    "SceneWidget\0updateAngle\0\0changeDirection\0"
    "updateSpeed\0value\0updateTransparency\0"
    "updateHorizontalView\0updateVerticalView\0"
    "updateRed\0updateGreen\0updateBlue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       7,    1,   67,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void SceneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneWidget *_t = static_cast<SceneWidget *>(_o);
        switch (_id) {
        case 0: _t->updateAngle(); break;
        case 1: _t->changeDirection(); break;
        case 2: _t->updateSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateTransparency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateHorizontalView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateVerticalView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateRed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateGreen((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->updateBlue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SceneWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_SceneWidget.data,
      qt_meta_data_SceneWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *SceneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SceneWidget.stringdata))
        return static_cast<void*>(const_cast< SceneWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int SceneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
