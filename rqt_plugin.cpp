#include <rqt_%{Plugin}/rqt_%{Plugin}.h>

#include <pluginlib/class_list_macros.h>
#include <ros/master.h>

namespace rqt_%{Plugin} {


%{CN}::%{CN}() :
    rqt_gui_cpp::Plugin()
{
    setObjectName("%{CN}");
}

void rqt_%{Plugin}::%{CN}::initPlugin(qt_gui_cpp::PluginContext &context)
{
    widget = new %{CN}Widget();
    context.addWidget(widget);
}

void rqt_%{Plugin}::%{CN}::shutdownPlugin()
{

}

void rqt_%{Plugin}::%{CN}::saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const
{

}

void rqt_%{Plugin}::%{CN}::restoreSettings(const qt_gui_cpp::Settings &plugin_settings, const qt_gui_cpp::Settings &instance_settings)
{

}

} // end namespace rqt_%{Plugin}

PLUGINLIB_EXPORT_CLASS(rqt_%{Plugin}::%{CN}, rqt_gui_cpp::Plugin)
