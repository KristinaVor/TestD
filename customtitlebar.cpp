#include "customtitlebar.h"

CustomTitleBar::CustomTitleBar(QWidget *parent) : QFrame(parent),
  titleLabel(nullptr), closeButton(nullptr)
{
    setGeometry(0,0,544,64);

    titleLabel = new QLabel("Title", this);
    titleLabel->setGeometry(0,0,440,24);
    QFont titleFont("Inter", 20, 700);
    titleFont.setLetterSpacing(QFont::AbsoluteSpacing, -0.3);
    titleFont.setPixelSize(24);
    titleFont.setStyleStrategy(QFont::PreferAntialias);

    titleLabel->setFont(titleFont);
    titleLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    QPixmap pixmap(":/Images/X.png");
    QIcon buttonIcon(pixmap);

    closeButton = new QPushButton(this);
    closeButton->setGeometry(416, 0, 56, 56);
    closeButton->setStyleSheet("padding: 16px; border-radius: 4px;");
    closeButton->setIcon(buttonIcon);
    closeButton->setIconSize(QSize(24, 24));
    connect(closeButton, &QPushButton::clicked, parent, &QWidget::close);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(titleLabel);
    layout->addStretch(1);
    layout->addWidget(closeButton);
    layout->setContentsMargins(16, 0, 16, 0);
}

CustomTitleBar::~CustomTitleBar()
{
    if (titleLabel)
    {
        delete titleLabel;
        titleLabel = nullptr;
    }

    if (closeButton)
    {
        delete closeButton;
        closeButton = nullptr;
    }
}


void CustomTitleBar::setTitle(const QString &title)
{
    titleLabel->setText(title);
}
