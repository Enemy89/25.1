#include <iostream>
#include <string>
#include "../include/my-func.h"

int main() {
    std::string command;
    int count_scalp = 0;
    int count_sutur = 0;
    while (command != "suture" && count_sutur == 0) {
        std::cout << "Enter the command." << std::endl;
        std::cin >> command;
        if (command == "scalpel") {
            count_scalp = 1;
            enter_coord_scp();
            std::cout << "The cut is made." << std::endl;
        }

        if (command == "hemostat" && count_scalp == 1) {
            enter_coord();
            std::cout << "The clamp is installed." << std::endl;
        }

        if (command == "tweezers" && count_scalp == 1) {
            enter_coord();
            std::cout << "Tweezers are used." << std::endl;
        }

        if (command == "suture" && count_scalp == 1) {
            enter_coord_str();
            check(&count_sutur);
        } else {
            if (count_scalp == 0) {
                command=" ";
                std::cout << "First you need a scalpel." << std::endl;
            }
        }
    }
}