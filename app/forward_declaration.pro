TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES +=     main.cpp

INCLUDEPATH += ../src/Area/
SOURCES +=     ../src/Area/Area.cpp

INCLUDEPATH += ../src/Square/

INCLUDEPATH += ../src/Circle/
SOURCES +=     ../src/Circle/Circle.cpp

INCLUDEPATH += ../src/OtherDeps/
