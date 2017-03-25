#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    virtual void closeEvent(QCloseEvent *e);

private slots:
    void actionNewFromTemplateEnd(const QString& project, const QString& error);

    void actionExportFinish(const QString& s);

    void on_projectView_fileOpen(const QString &);

    void projectNew();

    void projectOpen();

    void openProject();

    void projectOpened();

    void helpShow();

    void projectClose();

    void on_projectView_projectOpened();

    void on_actionSave_All_triggered();

    void configureShow();

    void loggerOpenPath(const QString &path, int col, int row);

private:
    Ui::MainWindow *ui;

    bool goToBuildStage();
};

#endif // MAINWINDOW_H
