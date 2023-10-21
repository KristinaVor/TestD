#ifndef CUSTOMTITLEBAR_H
#define CUSTOMTITLEBAR_H

#include <QFrame>
#include <QLabel>
#include <QPushButton>

class CustomTitleBar : public QFrame
{
    Q_OBJECT

public:
    CustomTitleBar(QWidget *parent = nullptr);

    void setTitle(const QString &title);

private:
    QLabel *titleLabel;
    QPushButton *closeButton;
};

#endif // CUSTOMTITLEBAR_H
