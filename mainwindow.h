#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow: public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget* parent = 0);
        ~MainWindow();

    private slots:
        void on_actionExit_triggered();


};

#endif /* MAINWINDOW_H */