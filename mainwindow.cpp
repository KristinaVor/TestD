#include "mainwindow.h"
#include "customtitlebar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Создаем главное окно
    QWidget *mainWidget = new QWidget;
    setCentralWidget(mainWidget);
    mainWidget->setFixedSize(1568, 960);
    mainWidget->setStyleSheet("background-color: #1E20213D;");

    QFrame *blueBar = new QFrame;
    blueBar->setGeometry(0, 0, 82,960);
    blueBar->setStyleSheet("background-color: #242E40; border-bottom-right-radius: 10px; ");

    QLabel *iconLabel = new QLabel(blueBar);
    QPixmap icon(":/Images/1.png");icon = icon.scaled(QSize(70, 70), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    iconLabel->setPixmap(icon);
    iconLabel->setGeometry(20, 20, 70, 70);

    QFrame *messageWidget = new QFrame;
    messageWidget->setStyleSheet("background-color: white; border-radius: 10px;");
    messageWidget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    messageWidget->setFixedSize(1386, 383);
    int gap = 24;

    // Размещаем элементы в окне
    QVBoxLayout *messageLayout = new QVBoxLayout;

    QLabel *label_update = new QLabel("Обновление устройства DTYU4656");
    label_update->setStyleSheet("font-family: Inter; font-size: 24px; font-weight: 500; line-height: 25px; letter-spacing: 0px; text-align: left;");
    label_update->setFixedSize(423, 25);

    QLabel *label_info = new QLabel("Информация по прошивке");
    label_info->setStyleSheet("font-family: Inter; font-size: 18px; font-weight: 400; line-height: 25px; letter-spacing: 0px; text-align: left;");
    label_info->setFixedSize(233, 25);

    QFormLayout *formLayout = new QFormLayout;

    // Горизонтальная компоновка для версии
    QLabel *label_version = new QLabel("Версия прошивки:");
    label_version->setStyleSheet("width: 128px; height: 20px; font-family: Inter; font-size: 14px; font-weight: 500; line-height: 20px; letter-spacing: 0em; text-align: left;");
    QLineEdit *lineEdit_version = new QLineEdit;
    lineEdit_version->setText("32.578.11.0.1");
    lineEdit_version->setReadOnly(true);
    formLayout->addRow(label_version, lineEdit_version);

    // Горизонтальная компоновка для даты
    QLabel *label_data = new QLabel("Дата прошивки:");
    label_data->setStyleSheet("width: 128px; height: 20px; font-family: Inter; font-size: 14px; font-weight: 500; line-height: 20px; letter-spacing: 0em; text-align: left;");
    QDateEdit *dateEdit = new QDateEdit;
    dateEdit->setReadOnly(true);
    dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons); // Убираем кнопки вверх и вниз
    formLayout->addRow(label_data,dateEdit);

    // Горизонтальная компоновка для описание
    QLabel *label_des = new QLabel("описание");
    label_des->setStyleSheet("width: 128px; height: 20px; font-family: Inter; font-size: 14px; font-weight: 500; line-height: 20px; letter-spacing: 0em; text-align: left;");
    QTextBrowser *textBrowser_description = new QTextBrowser;
    textBrowser_description->setFixedSize(551, 40);
    textBrowser_description->setStyleSheet("font-family: Inter; font-size: 14px; font-weight: 400; line-height: 20px; letter-spacing: 0em; text-align: left;");
    textBrowser_description->setPlainText("Какое-то описание прошивки может быть длинным в несколько строчек текста \n"
                                          "расположенным тут");
    textBrowser_description->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    formLayout->addRow(label_des,textBrowser_description);

    // Горизонтальная компоновка для кэша
    QLineEdit *lineEdit_cash = new QLineEdit("rtyjghngbERTYJGHBvvcbgxR578765434fdgHJHnbvcxesdtfyghbv");
    lineEdit_cash->setReadOnly(true);
    QLabel *label_cash = new QLabel("Кэш");
    label_cash->setStyleSheet("width: 128px; height: 20px; font-family: Inter; font-size: 14px; font-weight: 500; line-height: 20px; letter-spacing: 0em; text-align: left;");
    formLayout->addRow(label_cash,lineEdit_cash);
    QSpacerItem *spacer3 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

    QPushButton *pushButton = new QPushButton("Детали");
    pushButton->setStyleSheet("background-color: #4480F3; border-radius: 8px; color: white; font-size: 15px; font-weight: 500; line-height: 24px;"
                              " letter-spacing: 0px; text-align: center; padding: 9px 16px 11px 14px; gap: 8px;");
    pushButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    pushButton->setFixedSize(QSize(85, 44));
    connect(pushButton, &QPushButton::clicked, this, &MainWindow::openDetailsDialog);
    formLayout->addItem(spacer3);
    formLayout->addRow(pushButton);

    QSpacerItem *spacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);
    QSpacerItem *spacer2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

    messageLayout->addWidget(label_update);
    messageLayout->addSpacerItem(spacer);
    messageLayout->addWidget(label_info);
    messageLayout->addSpacerItem(spacer2);
    messageLayout->addLayout(formLayout);


    QGridLayout *gridLayout = new QGridLayout;
    QWidget *topSpacer = new QWidget();
    topSpacer->setFixedSize(1, 28);
    gridLayout->addWidget(topSpacer, 0, 0, 1, 4);
    QWidget *leftSpacer = new QWidget();
    leftSpacer->setFixedSize(28, 1);
    gridLayout->addWidget(leftSpacer, 1, 0);
    gridLayout->addLayout(messageLayout, 1, 1);
    QWidget *rightSpacer = new QWidget();
    rightSpacer->setFixedSize(675, 1);
    gridLayout->addWidget(rightSpacer, 1, 2);
    messageWidget->setLayout(gridLayout);
    messageWidget->setLayout(gridLayout);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    QVBoxLayout *litleLayout = new QVBoxLayout;
    litleLayout->addWidget(messageWidget);
    litleLayout->addSpacing(500);

    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->addWidget(blueBar);
    mainLayout->addSpacing(gap);
    mainLayout->addLayout(litleLayout);
    mainLayout->addSpacing(gap);

    mainWidget->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
}

void MainWindow::openDetailsDialog()
{
    QFrame *backgroundOverlay = new QFrame(this);
    backgroundOverlay->setGeometry(0, 0, this->width(), this->height());
    backgroundOverlay->setStyleSheet("background-color: rgba(0, 0, 0, 128);");

    QDialog *detailsDialog = new QDialog(this);
    detailsDialog->setWindowModality(Qt::WindowModal);

    detailsDialog->setWindowFlags(Qt::FramelessWindowHint);
    detailsDialog->setFixedSize(544, 278);
    detailsDialog->setGeometry(512, 304, 544, 278);
    detailsDialog->setStyleSheet("border-radius: 4px; background: #FFFFFF;");

    CustomTitleBar *titleBar = new CustomTitleBar(detailsDialog);
    titleBar->setTitle("Детали по устройству");

    QVBoxLayout *dialogLayout = new QVBoxLayout;
    QTextBrowser *descriptionBrowser = new QTextBrowser(detailsDialog);
    descriptionBrowser->setGeometry(16, 71, 496, 72);
    QString descriptionStyle = "font-family: 'IBM Plex Sans'; font-size: 15px; font-weight: 400; line-height: 24px;"
                               " letter-spacing: 0px; text-align: left;";
    descriptionBrowser->setStyleSheet(descriptionStyle);
    descriptionBrowser->setPlainText("Какое-то описание прошивки может быть длинным в несколько строчек текста \n"
                                     "расположенным тут");
    detailsDialog->setLayout(dialogLayout);

    QFrame *frame2 = new QFrame(detailsDialog);
    frame2->setGeometry(0, 278 - 104, 544, 104);
    frame2->setStyleSheet("background: #F8F8F8;");

    QPushButton *closeButton = new QPushButton("Закрыть", frame2);
    closeButton->setFixedSize(121, 56); // Размер кнопки
    closeButton->setStyleSheet("font-family: Inter; font-size: 17px; font-weight: 500; line-height: 24px;"
                               " letter-spacing: 0px; text-align: center; color: #1E2021; background: #F8F8F8;"
                               "padding: 16px 24px 16px 24px; border-radius: 4px;");

    closeButton->move(544 - closeButton->width() - 24, 104 - closeButton->height() - 16);
    connect(closeButton, &QPushButton::clicked, detailsDialog, &QDialog::close);

    connect(detailsDialog, &QDialog::finished, backgroundOverlay, &QFrame::hide);
    connect(detailsDialog, &QDialog::finished, detailsDialog, &QDialog::deleteLater);

    backgroundOverlay->show();
    detailsDialog->exec();
}

