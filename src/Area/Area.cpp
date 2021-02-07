#include "Area.h"

#include "Circle.h"
#include "Square.h"

float Area::CalcArea(Circle c)
{
    const float PI = 3.141592653589;
    float area     = PI * c.radius_ * c.radius_;

    return area;
}

float Area::CalcArea(Square s)
{
    float area = s.width_ * s.height_;

    return area;
}
