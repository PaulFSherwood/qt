#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>

class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent *event);
public slots:
    void spawn();
    void movePlayer();
private:
    QMediaPlayer * bulletSound;
    bool keyLeft;
    bool keyRight;
    bool keySpace;
};

#endif // PLAYER_H
