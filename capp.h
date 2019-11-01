#ifndef CAPP_H
#define CAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CApp; }
QT_END_NAMESPACE

class CApp : public QMainWindow
{
    Q_OBJECT

public:
    CApp(QWidget *parent = nullptr);
    ~CApp();

private:
    Ui::CApp *ui;
};
#endif // CAPP_H
