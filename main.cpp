#include <iostream>

#include "Point.h"

int main() {
    Point p1(1);
    Point p2(7, 4);

    p1.print_info();
    p2.print_info();

    std::cout << std::endl;

    std::cout << "p1.distance(p2): " << p1.distance(p2) << std::endl;
    std::cout << "p1.distance(): " << p1.distance() << std::endl;

    std::cout << std::endl;

    std::cout << "Point::get_count(): " << Point::get_count() << std::endl;

    return 0;
}