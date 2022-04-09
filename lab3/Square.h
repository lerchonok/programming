#include <vector>

class Square {
private:
    double x;
    double y;
    double sideSize;
    double corner;
public:
    Square(double x, double y, double sideSize, double corner);

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double getSideSize() const;

    void setSideSize(double sideSize);

    double getCorner() const;

    void setCorner(double corner);

    double getSquare();
};

bool operator==(Square& obj1, Square& obj2);
bool operator!=(Square& obj1, Square& obj2);
bool operator<(Square& obj1, Square& obj2);
bool operator>(Square& obj1, Square& obj2);

Square& operator*(Square& obj, double value);
Square& operator+(Square& obj, std::vector<double> vect);


