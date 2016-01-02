import QtQuick 2.5
import Charts 1.0

Item {
    width: 400; height: 200

    PieChart {
        id: chart
        anchors.centerIn: parent
        width: 100; height: 100;

        slices: [
            PieSlice {
                anchors.fill: parent
                color: "red"
                fromAngle: 0; angleSpan: 60
            },
            PieSlice {
                anchors.fill: parent
                color: "black"
                fromAngle: 60; angleSpan: 40
            },
            PieSlice {
                anchors.fill: parent
                color: "blue"
                fromAngle: 100; angleSpan: 100
            }
        ]
    }
}
