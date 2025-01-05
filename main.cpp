#include <iostream>

#include "Point.h"

int main() {
    Point p1(1);
    Point p2(7, 4);

    p1.print_info();
    p2.print_info();

    std::cout << std::endl;

    std::cout << "p1.distance(): " << p1.distance() << std::endl;
    std::cout << "p1.distance(3): " << p1.distance(3) << std::endl;
    std::cout << "p1.distance(-1, -1): " << p1.distance(-1, -1) << std::endl;
    std::cout << "p1.distance(p2): " << p1.distance(p2) << std::endl;

    return 0;
}