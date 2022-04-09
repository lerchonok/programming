#include "Square.h"

Square::Square(double x, double y, double sideSize, double corner) : x(x), y(y), sideSize(sideSize), corner(corner) {}

double Square::getX() const {
    return x;
}

void Square::setX(double x) {
    Square::x = x;
}

double Square::getY() const {
    return y;
}

void Square::setY(double y) {
    Square::y = y;
}

double Square::getSideSize() const {
    return sideSize;
}

void Square::setSideSize(double sideSize) {
    Square::sideSize = sideSize;
}

double Square::getCorner() const {
    return corner;
}

void Square::setCorner(double corner) {
    Square::corner = corner;
}

double Square::getSquare() {
    return sideSize * sideSize;
}

bool operator==(Square &obj1, Square &obj2) {
    return obj1.getSquare()==obj2.getSquare();
}

bool operator!=(Square &obj1, Square &obj2) {
    return !(obj1==obj2);
}

bool operator<(Square &obj1, Square &obj2) {
    return obj1.getSquare()<obj2.getSquare();
}

bool operator>(Square &obj1, Square &obj2) {
    return obj1.getSquare()>obj2.getSquare();
}

Square &operator*(Square &obj, double value) {
    Square* forReturn = new Square(obj.getX(), obj.getY(), obj.getSideSize() * value, obj.getCorner());
    return *forReturn;
}

Square &operator+(Square &obj, std::vector<double> vect) {
    Square* forReturn = new Square(obj.getX() + vect[0], obj.getY() + vect[1], obj.getSideSize(),
                                   obj.getCorner());
    return *forReturn;
}
