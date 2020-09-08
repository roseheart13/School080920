

#include <iostream>
#include <string>

int main()
{
    int option = 0;

    while (true) {
        std::cout << "1. Save the game" << std::endl;
        std::cout << "2. Restart teh game" << std::endl;
        std::cout << "3. Select difficulty" << std::endl;
        std::cout << "  Select an option: ";
        std::cin >> option;

        if (option == 1) {
            std::cout << "Saving ..." << std::endl;
        }
        else if (option == 2) {
            std::cout << " reastarting the game ..." << std::endl;
        }
        else if (option == 3) {
            std::cout << " Please select difficulty (easy/hard)" << std::endl;
        }
        else {
            std::cout << " Invalid input ..." << std::endl;
        }
    }
 }

