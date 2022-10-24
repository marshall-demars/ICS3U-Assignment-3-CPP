// Copyright(c) 2022 Marshall Demars All rights reserved.
//
// Created by: Marshall Demars
// Created on: October 2022
// This program calculates the average of 3 numbers
//    with user input

#include <iostream>

int main() {
    // creating variables
    float numberOne;
    float numberTwo;
    float numberThree;
    float average;

    // input
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> numberOne;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> numberTwo;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> numberThree;

    // process and output
    if (numberOne > 100) {
        std::cout << "Please input a number between 1 and 100.";
    } else if (numberTwo > 100) {
        std::cout << "Please input a number between 1 and 100.";
    } else if (numberThree > 100) {
        std::cout << "Please input a number between 1 and 100.";
    } else if (numberOne < 0) {
        std::cout << "Please input a number between 1 and 100.";
    } else if (numberTwo < 0) {
        std::cout << "Please input a number between 1 and 100.";
    } else if (numberThree < 0) {
        std::cout << "Please input a number between 1 and 100.";
    } else {
        average = (numberOne + numberTwo + numberThree) / 3;
        std::cout << "\nThe average is " << average << "!";
    }
    std::cout << "\nDone.";
}
