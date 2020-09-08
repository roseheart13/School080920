

#include <iostream>
#include <string>

int main()
{
    bool flag = true; //another way to stopp it
    char option = 0;

    //while (option != 'Q' && option != 'q') one way to stop loop
    while (flag == true) {
        std::cout << "A. Save the game" << std::endl;
        std::cout << "B. Restart teh game" << std::endl;
        std::cout << "C. Select difficulty" << std::endl;
        std::cout << "  Select an option: ";
        std::cin >> option;

        /*if (option == 'A' or option == 'a') {
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
        }*/

        //easy to check with switch
        switch (option) {
        case 'A':case 'a':
            std::cout << " Saving ..." << std::endl;
                break;
        case 'B':case 'b':
            std::cout << " restarting the game ..." << std::endl;
            break;
        case 'C':case 'c':
            std::cout << " Please select difficulty (easy/hard) ..." << std::endl;
            break;
        case 'Q':case 'q':
            flag = false;

        default:
            std::cout << " Invalid input ..." << std::endl;
            break;
        }
        

    }
 }

