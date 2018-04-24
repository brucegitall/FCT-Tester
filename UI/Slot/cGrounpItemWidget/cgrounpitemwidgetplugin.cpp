#include "cgrounpitemwidget.h"
#include "cgrounpitemwidgetplugin.h"

#include <QtPlugin>

cGrounpItemWidgetPlugin::cGrounpItemWidgetPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void cGrounpItemWidgetPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool cGrounpItemWidgetPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *cGrounpItemWidgetPlugin::createWidget(QWidget *parent)
{
    return new cGrounpItemWidget(parent);
}

QString cGrounpItemWidgetPlugin::name() const
{
    return QLatin1String("cGrounpItemWidget");
}

QString cGrounpItemWidgetPlugin::group() const
{
    return QLatin1String("Slot");
}

QIcon cGrounpItemWidgetPlugin::icon() const
{
    return QIcon();
}

QString cGrounpItemWidgetPlugin::toolTip() const
{
    return QLatin1String("");
}

QString cGrounpItemWidgetPlugin::whatsThis() const
{
    return QLatin1String("This is a GrounpItemWidget in a Slot");
}

bool cGrounpItemWidgetPlugin::isContainer() const
{
    return false;
}

QString cGrounpItemWidgetPlugin::domXml() const
{
    return QLatin1String("<widget class=\"cGrounpItemWidget\" name=\"cGrounpItemWidget\">\n</widget>\n");
}

QString cGrounpItemWidgetPlugin::includeFile() const
{
    return QLatin1String("cgrounpitemwidget.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(cgrounpitemwidgetplugin, cGrounpItemWidgetPlugin)
#endif // QT_VERSION < 0x050000
