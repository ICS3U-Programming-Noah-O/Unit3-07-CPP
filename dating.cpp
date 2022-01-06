// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 15, 2021
// This program allows a user to guess a number between 0
// and 9 with a randomly generated number
#include <unistd.h>
#include <iostream>
#include <iomanip>



int main() {
    std::string userAnswer1;
    std::string userAnswer2;
    // Asks question and gets user input
    std::cout << "Are you good enough to date my grandchild?\n";
    std::cout << " \n";

    sleep(1);
    std::cout << "Are you rich? y/n: ";
    std::cin >> userAnswer1;
    std::cout << " \n";


    sleep(1);
    std::cout << "Are you really good looking? y/n: ";
    std::cin >> userAnswer2;
    std::cout << " \n";
    sleep(1);

    // Evaluates user answers and determines if they are good enough to date.
    if (userAnswer1 == "y" && userAnswer2 == "y") {
        std::cout << "You are rich and good looking, please date";
        std::cout << " my grandchild!\n";
    } else if (userAnswer1 == "y" && userAnswer2 == "n") {
        std::cout << "You are rich, you can date";
        std::cout << " my grandchild.\n";
    } else if (userAnswer1 == "n" && userAnswer2 == "y") {
        std::cout << "You are really good looking, ";
        std::cout << "you can date my grandchild.\n";
    } else if (userAnswer1 == "n" && userAnswer2 == "n") {
        std::cout << "You cannot date my grandchild.\n";
    } else {
        std::cout << "Invalid input, try again.\n";
    }
}
