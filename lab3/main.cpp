#include <iostream>
#include "Square.h"
#include "Array.h"

using namespace std;

int main() {
    Square square1(1,0,15,0);
    Square square2(1,0,15,0);
    cout << (square1 == square2);
    square1 = square1 * 5.5;
    vector<double> vect(2,2);
    square2 = square2 + vect;
    cout << (square1 == square2);


    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(7);

    set<int> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(5);
    s2.insert(6);
    Array array(s);
    Array array2(s2);
    cout << endl;
    array-=3;
    for(auto i: array.getArray()){
        cout << i << ' ';
    }
    array = array + array2;
    array+=9;
    cout << endl;
    for(auto i: array.getArray()){
        cout << i << ' ';
    }
}
