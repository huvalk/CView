#ifndef CVIEW_H
#define CVIEW_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>

struct Meta;
struct Graph;

struct SRoomMeta; // структура, соответсвтующая комнате
struct SConnectionMeta; // структура, соответствующая соединению

class CGraphicConnection : public QGraphicsLineItem
{

};

class CGraphicRoom : public QGraphicsEllipseItem
{

};

class CGraphicsScene : public QGraphicsScene
{

};

class CGraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    explicit CGraphicsView( QObject *parent = nullptr );

private:
    QVector<CGraphicRoom> rooms_;
    QVector<CGraphicConnection> connections_;

signals:
    void SaveNewRoom( SRoomMeta & new_room );
    void SaveNewConnection( SConnectionMeta & new_connection );

    void ChooseRoom( int room_id );
    void ChooseConnection( int connection_id );

public slots:
    void BuildItems( const Meta & new_meta, const Graph & new_graph );
    void RefreshItems( const Meta & new_meta, const Graph & new_graph,
                       QVector< int > rooms_change_list);

    void DrawThePath( QVector< int > path );

    void CreateNewConnectin();
    void CreateNewRoomMeta();
    void ChangeRoomMeta();

};

#endif // CVIEW_H
