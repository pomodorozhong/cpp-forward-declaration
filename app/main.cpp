#include <iostream>

#include "Area.h"
#include "Square.h"

int main()
{
    Square square;
    square.width_    = 2;
    square.height_   = 3;
    auto square_area = Area::CalcArea(square);
    std::cout << "square_area = " << square_area << std::endl;

    return 0;
}
