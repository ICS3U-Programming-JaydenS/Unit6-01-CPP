// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: May 16, 2025
// This code gives the average of random numbers

#include <random>
#include <iostream>

int main() {
    // Define constants
    const int MAX = 100;
    const int MIN = 0;
    const int DIVIDER = 10;

    // Define variables
    float sum = 0;
    float singleGrade;
    float average;
    float grades[10];

    // Makes the random number and stores array
    for (int counter = 0; counter < 10; counter++) {
        // Creates random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN, MAX);

        // Sets to single grade and stores to grades array
        singleGrade = idist(rgen);
        grades[counter] = singleGrade;
        std::cout << counter << " number: " << singleGrade << "\n";}

        // Add up all 10 numbers in array to a sum
    for (int counter2 = 0; counter2 < 10; counter2++) {
        sum += grades[counter2];
    }

    // Divide added numbers by 10 and prints average
    average = sum / DIVIDER;
    std::cout << "The average is " << average;
    std::cout << "\n";
}
