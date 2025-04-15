// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-04-15


// Description: Calculates the sum from 0 up to a number entered by the user

#include <iostream>

int main() {
    int userInput;
    int counter = 0;
    int totalSum = 0;

    // Ask the user to enter a number
    std::cout << "Enter a positive whole number (up to 100): ";
    std::cin >> userInput;

    // Check if number is in valid range
    if (userInput < 0 || userInput > 100) {
        std::cout << "\nPlease enter a number between 0 and 100." << std::endl;
    } else {
        // Add numbers from 0 up to the user's number
        while (counter < userInput) {
            counter++;            // Increment the counter
            totalSum += counter;  // Add to the total sum
            std::cout << "Counting: " << counter << std::endl;
        }

        // Display the final result
        std::cout << "\n0 - " << userInput << " is: " << totalSum << std::endl;
    }
}
