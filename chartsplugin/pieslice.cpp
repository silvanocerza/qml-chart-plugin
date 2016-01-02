#include "pieslice.h"

#include <QPainter>

PieSlice::PieSlice(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
}

QColor PieSlice::color() const
{
    return m_color;
}

void PieSlice::setColor(const QColor &color)
{
    m_color = color;
}

int PieSlice::fromAngle() const
{
    return m_fromAngle;
}

void PieSlice::setFromAngle(const int &fromAngle)
{
    m_fromAngle = fromAngle;
}

int PieSlice::angleSpan() const
{
    return m_angleSpan;
}

void PieSlice::setAngleSpan(const int &angleSpan)
{
    m_angleSpan = angleSpan;
}

void PieSlice::paint(QPainter *painter)
{
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawPie(boundingRect().adjusted(1, 1, -1, -1), m_fromAngle * 16, m_angleSpan * 16);
}
