#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>


class QMediaPlayer;
class QVideoWidget;
class QStandardItemModel;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    QString ChangeTime(qint64 position);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

    void updatePosition(qint64 position);

    void on_horizontalSlider_sliderMoved(int position);

private:
    Ui::Widget *ui;

    QMediaPlayer *player;
    QVideoWidget *videoWidget;

    QStringList strListFileName;//文件名称对应的列表
    QStringList strListUrlName;//文件路径

    QStandardItemModel *model;//模型

};

#endif // WIDGET_H
