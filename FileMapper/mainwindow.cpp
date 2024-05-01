#include "mainwindow.h"
#include "ui_mainwindow.h"

// Конструктор класса MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , formatAdaptor(new FormatMapper(this)) // Создание экземпляра класса FormatMapper
{
    ui->setupUi(this);

    // Привязываем сигналы к слотам для кнопок
    connect(ui->registerButton, &QPushButton::clicked, this, &MainWindow::registerApplication);
    connect(ui->openButton, &QPushButton::clicked, this, &MainWindow::openWithRegisteredApp);
    connect(ui->showAppsButton, &QPushButton::clicked, this, &MainWindow::showRegisteredApplications);
    connect(ui->showFormatsButton, &QPushButton::clicked, this, &MainWindow::showRegisteredFormats);
}

// Деструктор класса MainWindow
MainWindow::~MainWindow()
{
    delete ui;
}

// Слот для регистрации приложения
void MainWindow::registerApplication()
{
    QString appName = ui->appNameEdit->text();
    QStringList supportedFormats = ui->formatsEdit->text().split(",", Qt::SkipEmptyParts);

    formatAdaptor->RegisterApplication(appName, supportedFormats);
}

// Слот для открытия файла с зарегистрированным приложением
void MainWindow::openWithRegisteredApp()
{
    QString filePath = ui->filePathEdit->text();

    formatAdaptor->OpenFileWithRegisteredApp(filePath);
}

// Слот для отображения списка зарегистрированных приложений
void MainWindow::showRegisteredApplications()
{
    // Получаем список зарегистрированных приложений
    QStringList applications = formatAdaptor->GetRegisteredApplications();

    // Очищаем текстовое поле перед выводом списка
    ui->textBrowser->clear();

    // Выводим список зарегистрированных приложений
    ui->textBrowser->append("Registered Applications:");
    for (const QString &app : applications) {
        ui->textBrowser->append("- " + app);
    }
}

// Слот для отображения списка зарегистрированных форматов
void MainWindow::showRegisteredFormats()
{
    // Получаем список зарегистрированных форматов
    QMap<QString, QStringList> formats = formatAdaptor->GetRegisteredFormats();

    // Очищаем текстовое поле перед выводом списка
    ui->textBrowser->clear();

    // Выводим список зарегистрированных форматов
    ui->textBrowser->append("Registered Formats:");
    for (auto it = formats.constBegin(); it != formats.constEnd(); ++it) {
        QString formatList = it.value().join(", ");
        ui->textBrowser->append(it.key() + ": " + formatList);
    }
}
