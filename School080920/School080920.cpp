

#include <iostream>
#include <string>

int main()
{
    char option = 0;

    while (true) {
        std::cout << "A. Save the game" << std::endl;
        std::cout << "B. Restart teh game" << std::endl;
        std::cout << "C. Select difficulty" << std::endl;
        std::cout << "  Select an option: ";
        std::cin >> option;

        if (option == 'A' or option == 'a') {
            std::cout << "Saving ..." << std::endl;
        }
        else if (option == 'B' or option == 'b') {
            std::cout << " reastarting the game ..." << std::endl;
        }
        else if (option == 'C' or option == 'c') {
            std::cout << " Please select difficulty (easy/hard)" << std::endl;
        }
        else {
            std::cout << " Invalid input ..." << std::endl;
        }
    }
 }

