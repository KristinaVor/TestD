#ifndef CUSTOMTITLEBAR_H
#define CUSTOMTITLEBAR_H

#include <QFrame>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QIcon>
#include <QPixmap>

class CustomTitleBar : public QFrame
{
    Q_OBJECT

public:
    CustomTitleBar(QWidget *parent = nullptr);
    ~CustomTitleBar();

    void setTitle(const QString &title);

private:
    QLabel *titleLabel;
    QPushButton *closeButton;
};

#endif // CUSTOMTITLEBAR_H
