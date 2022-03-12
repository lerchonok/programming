#ifndef UNTITLED3_RUNNER_H
#define UNTITLED3_RUNNER_H
#include <iostream>
#include "Ofstream.h"


class Runner {
private:
    Ofstream file;
public:
    Runner();
    ~Runner();
    void printMenu();
    void run();
};


#endif
