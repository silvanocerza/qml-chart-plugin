#ifndef CHARTSPLUGIN_H
#define CHARTSPLUGIN_H

#include <QQmlExtensionPlugin>

class ChartsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionPlugin")

public:
    void registerTypes(const char *uri);
};

#endif // CHARTSPLUGIN_H
