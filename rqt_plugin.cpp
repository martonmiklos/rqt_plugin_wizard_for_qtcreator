#include <%{Plugin}/%{Plugin}.h>

#include <pluginlib/class_list_macros.h>
#include <ros/master.h>

namespace %{Plugin} {


%{CN}::%{CN}() :
    rqt_gui_cpp::Plugin()
{
    setObjectName("%{CN}");
}

void %{CN}::initPlugin(qt_gui_cpp::PluginContext &context)
{
    widget = new %{CN}Widget();
    context.addWidget(widget);
}

void %{CN}::shutdownPlugin()
{

}

void %{CN}::saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const
{

}

void %{CN}::restoreSettings(const qt_gui_cpp::Settings &plugin_settings, const qt_gui_cpp::Settings &instance_settings)
{

}

} // end namespace %{Plugin}

PLUGINLIB_EXPORT_CLASS(%{Plugin}::%{CN}, rqt_gui_cpp::Plugin)
