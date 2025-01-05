#include <iostream>
#include <cmath>

#include "Point.h"

Point::Point() : x(0), y(0) {
    count++;
}

Point::Point(double xy) : x(xy), y(xy) {
    count++;
}

Point::Point(double x, double y) : x(x), y(y) {
    count++;
}

Point::~Point() {
    count--;
}

double Point::distance() const {
    return std::hypot(x, y);
}

double Point::distance(double x_p) const {
    return std::hypot(x - x_p, y - x_p);
}

double Point::distance(double x_p, double y_p) const {
    return std::hypot(x - x_p, y - y_p);
}

double Point::distance(const Point& p) const {
    return std::hypot(x - p.x, y - p.y);
}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}

double& Point::get_x() {
    return x;
}

double& Point::get_y() {
    return y;
}

Point* Point::get_address() {
    return this;
}

void Point::print_info() {
    std::cout << "Point (" << this << ")" << ": [x:" << x << ", y: " << y << "]" << std::endl;
}

unsigned int Point::get_count() {
    return count;
}