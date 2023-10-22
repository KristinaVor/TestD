/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_update;
    QLabel *label_info;
    QFormLayout *formLayout;
    QLabel *label_version;
    QLineEdit *lineEdit_version;
    QLabel *label_data;
    QDateEdit *dateEdit;
    QLabel *label_des;
    QTextBrowser *textBrowser_description;
    QLineEdit *lineEdit_cash;
    QPushButton *pushButton;
    QLabel *label_cash;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: whitergb(255, 252, 237)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 131, 551));
        frame->setStyleSheet(QString::fromUtf8("background-color: darkBlue;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 0, 621, 351));
        widget->setStyleSheet(QString::fromUtf8("QWidget{background-color, #fff}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_update = new QLabel(widget);
        label_update->setObjectName(QString::fromUtf8("label_update"));

        verticalLayout->addWidget(label_update);

        label_info = new QLabel(widget);
        label_info->setObjectName(QString::fromUtf8("label_info"));

        verticalLayout->addWidget(label_info);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_version = new QLabel(widget);
        label_version->setObjectName(QString::fromUtf8("label_version"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_version);

        lineEdit_version = new QLineEdit(widget);
        lineEdit_version->setObjectName(QString::fromUtf8("lineEdit_version"));
        lineEdit_version->setFrame(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_version);

        label_data = new QLabel(widget);
        label_data->setObjectName(QString::fromUtf8("label_data"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_data);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        dateEdit->setAutoFillBackground(false);
        dateEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        dateEdit->setWrapping(false);
        dateEdit->setFrame(false);
        dateEdit->setAccelerated(false);
        dateEdit->setKeyboardTracking(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, dateEdit);

        label_des = new QLabel(widget);
        label_des->setObjectName(QString::fromUtf8("label_des"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_des);

        textBrowser_description = new QTextBrowser(widget);
        textBrowser_description->setObjectName(QString::fromUtf8("textBrowser_description"));
        textBrowser_description->setAutoFillBackground(false);
        textBrowser_description->setFrameShadow(QFrame::Sunken);
        textBrowser_description->setLineWidth(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, textBrowser_description);

        lineEdit_cash = new QLineEdit(widget);
        lineEdit_cash->setObjectName(QString::fromUtf8("lineEdit_cash"));
        lineEdit_cash->setFrame(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_cash);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton);

        label_cash = new QLabel(widget);
        label_cash->setObjectName(QString::fromUtf8("label_cash"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_cash);


        verticalLayout->addLayout(formLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 340, 581, 201));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/X.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);

        gridLayout_2->addWidget(pushButton_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_update->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260 DTYU4656", nullptr));
        label_info->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\277\320\276 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\265", nullptr));
        label_version->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        label_data->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        label_des->setText(QApplication::translate("MainWindow", "\320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\265\321\202\320\260\320\273\320\270", nullptr));
        label_cash->setText(QApplication::translate("MainWindow", "\320\232\321\215\321\210", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
