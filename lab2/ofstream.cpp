#include "Ofstream.h"

Ofstream::Ofstream() = default;

Ofstream::Ofstream(const std::string &fileName) {
    this->fileName = fileName;
    fileStream.open(fileName);
    if (!fileStream) {
        std::cout << "FILE OPENING ERROR" << std::endl;
    }
}

Ofstream::~Ofstream() {
    fileStream.close();
}

void Ofstream::openFile() {
    if(fileStream.is_open())
        return;
    fileStream.open(fileName);
}

void Ofstream::openFile(std::string fileName) {
    this->fileName = fileName;
    if(fileStream.is_open())
        fileStream.close();
    fileStream.open(fileName);
}

void Ofstream::closeFile() {
    if(fileStream.is_open())
        fileStream.close();
}

std::string Ofstream::getFileName() {
    return fileName;
}

bool Ofstream::isOpen() {
    return fileStream.is_open();
}

void Ofstream::writeInt(int value) {
    if(fileStream.is_open())
        fileStream << value;
    else{
        std::cout << "ERROR: FILE STREAM CLOSED";
    }
}

void Ofstream::writeDouble(double value) {
    if(fileStream.is_open())
        fileStream << value;
    else{
        std::cout << "ERROR: FILE STREAM CLOSED";
    }
}

void Ofstream::writeString(std::string value) {
    if(fileStream.is_open())
        fileStream << value;
    else{
        std::cout << "ERROR: FILE STREAM CLOSED";
    }
}

