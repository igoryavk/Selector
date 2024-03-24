#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setListObjects(QStringList list);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel model;

};
#endif // MAINWINDOW_H