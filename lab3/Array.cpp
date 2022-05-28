#include "Array.h"

Array::Array(std::set<int> &value) {
    for(int i : value){
        array.insert(i);
    }
}

const std::set<int> &Array::getArray() const {
    return array;
}

void Array::addValue(int value) {
    array.insert(value);
}

void Array::eraseValue(int value) {
    array.erase(value);
}


Array operator+(Array &obj1, Array &obj2) {
    std::set<int> vect;
    for(auto i: obj1.getArray()){
        vect.insert(i);
    }
    for(auto i: obj2.getArray()){
        vect.insert(i);
    }
    return Array(vect);
}

bool operator==(Array &obj1, Array &obj2) {
    if(obj1.getArray().size() != obj2.getArray().size()) {
        return false;
    }
   //! for(auto i: obj1.getArray()){
        if(obj2.getArray().find(i) == obj2.getArray().end()){
            return false;
        }
    }
    return true;
}

bool operator!=(Array &obj1, Array &obj2) {
    return !(obj1 == obj2);
}

Array &operator+=(Array &obj1, int value) {
    obj1.addValue(value);
    return obj1;
}

Array &operator-=(Array &obj1, int value) {
    obj1.eraseValue(value);
    return obj1;
}
