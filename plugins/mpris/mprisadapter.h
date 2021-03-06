/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.mpris.MediaPlayer2.xml -a mprisadapter.h:mprisadapter.cpp -c MprisAdapter
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MPRISADAPTER_H_1383326427
#define MPRISADAPTER_H_1383326427

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.mpris.MediaPlayer2
 */
class MprisAdapter: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.mpris.MediaPlayer2")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.mpris.MediaPlayer2\">\n"
"    <method name=\"Quit\"/>\n"
"    <method name=\"Raise\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanQuit\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanRaise\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Identity\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"DesktopEntry\"/>\n"
"  </interface>\n"
        "")
public:
    MprisAdapter(QObject *parent);
    virtual ~MprisAdapter();

public: // PROPERTIES
    Q_PROPERTY(bool CanQuit READ canQuit)
    bool canQuit() const;

    Q_PROPERTY(bool CanRaise READ canRaise)
    bool canRaise() const;

    Q_PROPERTY(QString DesktopEntry READ desktopEntry)
    QString desktopEntry() const;

    Q_PROPERTY(QString Identity READ identity)
    QString identity() const;

public Q_SLOTS: // METHODS
    void Quit();
    void Raise();
Q_SIGNALS: // SIGNALS
};

#endif
