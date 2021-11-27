## rqt plugin wizard for QtCreator

Because I always mess it up, and troubleshoot a few hours when creating a new plugin.

Now it is easy.

Clone this repo to <QtCreator's install path>/share/qtcreator/templates/wizards/projects/rqt_plugin

And then:

![A](https://raw.githubusercontent.com/martonmiklos/rqt_plugin_wizard_for_qtcreator/master/screenshots/Screenshot_20190131_002246.png "A")

![B](https://raw.githubusercontent.com/martonmiklos/rqt_plugin_wizard_for_qtcreator/master/screenshots/Screenshot_20190131_002318.png "B")

![C](https://raw.githubusercontent.com/martonmiklos/rqt_plugin_wizard_for_qtcreator/master/screenshots/Screenshot_20190131_002349.png "C")

And then enjoy with:
```
rqt --force-discover
```

![C](https://raw.githubusercontent.com/martonmiklos/rqt_plugin_wizard_for_qtcreator/master/screenshots/Screenshot_20190131_003343.png "C")

### rqt plugin building tips for QtCreator

- Start the QtCreator from a shell where the catkin env is setup properly (setup.sh is sourced)
- Create the project with the wizard
- Remove the make step add a custom build step to call catkin_make (similar to this one):
![setup_catkin_make_as_build_step](https://raw.githubusercontent.com/martonmiklos/rqt_plugin_wizard_for_qtcreator/master/screenshots/catkin_make.png)

To the run configuration add  the following:
![kép](https://user-images.githubusercontent.com/1609182/60760484-536f6c00-a036-11e9-999d-ab778361aa5b.png)

With this setup you can even debug your plugin with GDB.


