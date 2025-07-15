#include "mainwindow.h"
#include <QMessageBox>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      centralWidget(new QWidget(this)),
      layout(new QVBoxLayout),
      label(new QLabel("Select folder with images (.jpg/.png)")),
      browseButton(new QPushButton("Browse")),
      runButton(new QPushButton("Organize Photos")) {

    layout->addWidget(label);
    layout->addWidget(browseButton);
    layout->addWidget(runButton);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    connect(browseButton, &QPushButton::clicked, this, &MainWindow::selectFolder);
    connect(runButton, &QPushButton::clicked, this, &MainWindow::runSnapSort);
}

MainWindow::~MainWindow() {}

void MainWindow::selectFolder() {
    selectedFolder = QFileDialog::getExistingDirectory(this, "Select Photo Folder");
    if (!selectedFolder.isEmpty()) {
        label->setText("Selected: " + selectedFolder);
    }
}

void MainWindow::runSnapSort() {
    if (selectedFolder.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a folder first.");
        return;
    }
    QProcess::execute("./SnapSort", QStringList() << selectedFolder);
    QMessageBox::information(this, "Done", "Photos organized into albums/ folder.");
}