#ifndef CVIEW_H
#define CVIEW_H

#include <QObject>

class CView : public QObject
{
    Q_OBJECT
public:
    explicit CView(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CVIEW_H
