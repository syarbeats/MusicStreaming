/****************************************************************************
** Meta object code from reading C++ file 'MusicsStreaming.h'
**
** Created: Fri Dec 24 08:16:05 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MusicsStreaming.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MusicsStreaming.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MusicsStreaming[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x0a,
      56,   16,   16,   16, 0x0a,
      69,   16,   16,   16, 0x0a,
     104,   83,   16,   16, 0x0a,
     146,   16,   16,   16, 0x0a,
     160,   16,   16,   16, 0x0a,
     200,  196,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MusicsStreaming[] = {
    "MusicsStreaming\0\0reply\0"
    "downloadFinished(QNetworkReply*)\0"
    "doDownload()\0setupBearer()\0"
    "readBytes,totalBytes\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "streamMusic()\0downloadXMLFinished(QNetworkReply*)\0"
    "row\0playSelectedSong(int)\0"
};

const QMetaObject MusicsStreaming::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MusicsStreaming,
      qt_meta_data_MusicsStreaming, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MusicsStreaming::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MusicsStreaming::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MusicsStreaming::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MusicsStreaming))
        return static_cast<void*>(const_cast< MusicsStreaming*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MusicsStreaming::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: downloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: doDownload(); break;
        case 2: setupBearer(); break;
        case 3: updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: streamMusic(); break;
        case 5: downloadXMLFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: playSelectedSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
