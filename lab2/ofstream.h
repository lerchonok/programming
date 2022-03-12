#pragma once
#define UNTITLED3_OFSTREAM_H
#include <iostream>
#include <fstream>


class Ofstream {
private:
    std::string fileName;
    std::fstream fileStream;

public:
    Ofstream();
    explicit Ofstream(const std::string& fileName);
    ~Ofstream();

    void openFile();
    void openFile(std::string fileName);
    void closeFile();

    std::string getFileName();
    bool isOpen();

    void writeInt(int value);
    void writeDouble(double value);
    void writeString(std::string value);

};
