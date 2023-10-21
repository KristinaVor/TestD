#include "customtitlebar.h"
#include <QHBoxLayout>

CustomTitleBar::CustomTitleBar(QWidget *parent) : QFrame(parent)
{
    setGeometry(0,0,544,64);

    titleLabel = new QLabel("Title", this);
    titleLabel->setGeometry(0,0,440,24);
    titleLabel->setFont(QFont("Inter", 20, 700));
    titleLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    closeButton = new QPushButton("X", this);
    closeButton->setFixedSize(56, 56);
    closeButton->setStyleSheet("padding: 16px; border-radius: 4px;");
    connect(closeButton, &QPushButton::clicked, parent, &QWidget::close);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(titleLabel);
    layout->addStretch(1);
    layout->addWidget(closeButton);
    layout->setContentsMargins(16, 0, 16, 0);
}

void CustomTitleBar::setTitle(const QString &title)
{
    titleLabel->setText(title);
}
