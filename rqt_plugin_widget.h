#ifndef %{GUARD}_WIDGET
#define %{GUARD}_WIDGET

#include <QWidget>

namespace Ui {
class %{CN}Widget;
}

class %{CN}Widget : public QWidget
{
    Q_OBJECT

public:
    explicit %{CN}Widget(QWidget *parent = nullptr);
    ~%{CN}Widget();

private:
    Ui::%{CN}Widget *ui;
};

#endif // %{GUARD}_WIDGET
