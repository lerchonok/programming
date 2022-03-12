#include "fun.h"

void task1PTR(int *var1, int *var2) {
    (*var1 > *var2) ? (*var1 = *var1 % *var2) : (*var2 = *var2 % *var1);
}

void task1DIR(int &var1, int &var2) {
    (var1 > var2) ? (var1 = var1 % var2) : (var2 = var2 % var1);
}

void task2PTR(double *var) {
    *var = 1/(*var);
}

void task2DIR(double &var) {
    var = 1/var;
}

void task3PTR(int *radius, int *value) {
    if(*radius - *value > 0)
        *radius-=*value;
    else *radius = 0;
}

void task3DIR(int &radius, int &value) {
    if(radius - value > 0)
        radius-=value;
    else radius = 0;
}

void task4PTR(int **matrix, int *str1, int *str2) {
    int* tmp = matrix[*str1];
    matrix[*str1] = matrix[*str2];
    matrix[*str2] = tmp;
}

void task4DIR(int (&matrix)[5][5], int &str1, int &str2) {
    for(int i = 0; i < 5; i++){
        int tmp = matrix[str1][i];
        matrix[str1][i] = matrix[str2][i];
        matrix[str2][i] = tmp;
    }
}
