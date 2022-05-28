#include <iostream>
#include <vector>
#include <list>
#include <set>
#include "template.h"

using namespace std;

int main(){
    vector<int> vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//    vector.reverse();

    cout << noneOf(vector.begin(), vector.end(), isBiggerThan10<int>()) << endl;

    cout << isSorted(vector.begin(), vector.end(), isOrdered<int>()) << endl;


    auto result = findBackward(vector.rbegin(), vector.rend(), 2);
    cout << *(++result) << endl;
}
