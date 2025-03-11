#include <iostream>
#include "mathutils.h" // First inclusion
#include "mathutils.h" // Second inclusion (duplicate)

int main()
{
    MathUtils utils;
    std::cout << "5 + 3 = " << utils.add(5, 3) << std::endl;
    return 0;
}