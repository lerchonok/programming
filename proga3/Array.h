#include <vector>
#include <set>

class Array {
private:
    std::set<int> array;

public:
    explicit Array(std::set<int> &value);

    const std::set<int> &getArray() const;
    void addValue(int value);
    void eraseValue(int value);
};

Array& operator+(Array& obj1, Array& obj2);

bool operator==(Array& obj1, Array& obj2);
bool operator!=(Array& obj1, Array& obj2);

Array& operator+=(Array& obj1, int value);
Array& operator-=(Array& obj1, int value);


