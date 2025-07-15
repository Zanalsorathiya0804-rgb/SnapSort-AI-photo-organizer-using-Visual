#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QString>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void selectFolder();
    void runSnapSort();

private:
    QWidget *centralWidget;
    QVBoxLayout *layout;
    QLabel *label;
    QPushButton *browseButton;
    QPushButton *runButton;
    QString selectedFolder;
};