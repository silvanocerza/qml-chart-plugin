#ifndef PIE_CHART_H
#define PIE_CHART_H

#include "pieslice.h"

#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class PieChart : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<PieSlice> slices READ slices)
    Q_PROPERTY(QString name READ name WRITE setName)

public:
    PieChart(QQuickItem *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QQmlListProperty<PieSlice> slices();

private:
    static void append_slice(QQmlListProperty<PieSlice> *list, PieSlice *slice);

    QString m_name;
    QList<PieSlice *> m_slices;
};

#endif // PIE_CHART_H
