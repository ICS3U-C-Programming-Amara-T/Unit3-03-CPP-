// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: March 21, 2025
// In this code the user will guess the randomly generated number
#include <iostream>
#include <cstdlib>

int main() {
    // Declare variables
    float userGuess;

    // Declare integers, initialize seed and generate a random number from 2-57
    int randomNumber;

    srand((unsigned)time(NULL));

    randomNumber = rand() % 57 + 2;

    // Get User's guess
    std::cout << "Enter a number between 2 and 57: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // If the user guessed correctly or incorrectly
    if (userGuess == randomNumber) {
        std::cout << "That is the correct number!" << "The random guess is: " << randomNumber;
    }
    else {
        std::cout << "That's the incorrect number!" << "The random guess is:" << randomNumber;
    }
}
