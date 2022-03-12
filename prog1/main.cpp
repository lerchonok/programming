#include <iostream>
#include "fun.h"
using namespace std;

int main(){

    //T1
    {
        int a = 5;
        int b = 3;
        cout << "TASK1" << endl;
        cout << a << ' ' << b << endl;
        task1DIR(a, b);
        cout << a << ' ' << b << endl;
        task1PTR(&a, &b);
        cout << a << ' ' << b << endl << endl;
    }

    //T2
    {
        double a = 2.5;
        cout << "TASK2" << endl;
        cout << a << endl;
        task2PTR(&a);
        cout << a << endl;
        task2DIR(a);
        cout << a << endl << endl;
    }

    //T3
    {
        int a = 5;
        int b = 3;
        cout << "TASK3" << endl;
        cout << a << ' ' << b << endl;
        task3DIR(a, b);
        cout << a << ' ' << b << endl;
        task3PTR(&a, &b);
        cout << a << ' ' << b << endl << endl;
    }

    //TODO T4
    {
        cout << "TASK4" << endl;
        int** matrix = new int*[5];
        cout << "POINTER: " << endl;
        for(int i = 0; i < 5; i++){
            matrix[i] = new int[5];
            for(int j = 0; j < 5; j++){
                matrix[i][j] = i * j;
                cout << matrix[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        int str1 = 0;
        int str2 = 2;
        task4PTR(matrix, &str1, &str2);
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cout << matrix[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl << endl;


        cout << "REFERENCE: " << endl;
        int matrix1[5][5];
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                matrix1[i][j] = i * j;
            }
        }

        for(auto & i : matrix1){
            for(int j : i){
                cout << j << ' ';
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
        task4DIR(matrix1, str1, str2);
        for(auto & i : matrix1){
            for(int j : i){
                cout << j << ' ';
            }
            cout << endl;
        }
    }
}
