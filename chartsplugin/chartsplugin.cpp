#include "chartsplugin.h"
#include "piechart.h"
#include "pieslice.h"

#include <qqml.h>

void ChartsPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<PieChart>(uri, 1, 0, "PieChart");
    qmlRegisterType<PieSlice>(uri, 1, 0, "PieSlice");
}
