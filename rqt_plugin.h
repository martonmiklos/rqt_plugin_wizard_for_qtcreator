#ifndef %{GUARD}
#define %{GUARD}

#include <rqt_gui_cpp/plugin.h>
#include <std_msgs/String.h>

#include <%{Plugin}/%{Plugin}_widget.h>

namespace %{Plugin} {

class %{CN} : public rqt_gui_cpp::Plugin
{
public:
    %{CN}();

    void initPlugin(qt_gui_cpp::PluginContext& context) override;
    void shutdownPlugin() override;

    void saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const override;
    void restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings) override;

private:
    %{CN}Widget *widget = nullptr;
};

}

#endif // %{GUARD}

