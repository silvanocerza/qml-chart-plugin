#ifndef PIE_SLICE_H
#define PIE_SLICE_H

#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class PieSlice : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(int fromAngle READ fromAngle WRITE setFromAngle)
    Q_PROPERTY(int angleSpan READ angleSpan WRITE setAngleSpan)

public:
    PieSlice(QQuickItem *parent = 0);

    QColor color() const;
    void setColor(const QColor &color);

    int fromAngle() const;
    void setFromAngle(const int &fromAngle);

    int angleSpan() const;
    void setAngleSpan(const int &angleSpan);

    void paint(QPainter *painter);

private:
    QColor m_color;
    int m_fromAngle;
    int m_angleSpan;
};

#endif // PIE_SLICE_H
