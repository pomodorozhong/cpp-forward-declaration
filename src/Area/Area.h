#pragma once

#define USING_FORWARD_DECLARATION_IN_AREA

#ifdef USING_FORWARD_DECLARATION_IN_AREA
class Circle;
class Square;

class Area
{
public:
    static float CalcArea(Circle c);
    static float CalcArea(Square s);
};

#else

#include "Circle.h"
#include "Square.h"

class Area
{
public:
    static float CalcArea(Circle c);
    static float CalcArea(Square s);
};

#endif
