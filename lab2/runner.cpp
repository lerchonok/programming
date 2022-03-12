#include "Runner.h"

Runner::Runner() = default;

Runner::~Runner() = default;

void Runner::printMenu() {
    std::cout << "What do you want to do: " << std::endl;
    std::cout << "1. Open file" << std::endl;
    std::cout << "2. Close file" << std::endl;
    std::cout << "3. Get file name" << std::endl;
    std::cout << "4. Check file status" << std::endl;
    std::cout << "5. Write string to your file" << std::endl;
    std::cout << "6. Write int to your file" << std::endl;
    std::cout << "7. Write double to your file" << std::endl;
    std::cout << "8. Exit program" << std::endl;
    std::cout << "Your choice: ";
}

void Runner::run() {
    bool close = false;
    while(true) {
        this->printMenu();
        switch (getchar()) {
            case '1': {
                getchar();
                 std::string path = "C:\Desktop\program2";
                std::string fileName;
                std::cout << "type File name: ";
                std::cin >> fileName;
                getchar();
                path += fileName;
                file.openFile(path);
                break;
            }
            case '2': {
                getchar();
                file.closeFile();
                break;
            }
            case '3': {
                getchar();
                std::cout << file.getFileName() << std::endl;
                break;
            }
            case '4': {
                getchar();
                if (file.isOpen()) {
                    std::cout << "file is opened" << std::endl;
                } else {
                    std::cout << "file is closed" << std::endl;
                }
                break;
            }
            case '5': {
                getchar();
                std::string value;
                std::cout << "Input value: ";
                getline(std::cin, value);
                file.writeString(value);
                break;
            }
            case '6': {
                getchar();
                int value;
                std::cout << "Input value: ";
                std::cin >> value;
                file.writeInt(value);
                break;
            }
            case '7': {
                getchar();
                double value;
                std::cout << "Input value: ";
                std::cin >> value;
                file.writeDouble(value);
                break;
            }
            case '8': {
                getchar();
                close = true;
                break;
            }
            default: {
                std::cout << "There is no such option. Try again" << std::endl;
            }
        }
        if(close)
            break;
    }
}

