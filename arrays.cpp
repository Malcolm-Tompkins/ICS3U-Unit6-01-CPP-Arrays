// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on June 3, 2021
// Generates 5 random numbers and calculates their average

#include <iostream>
#include <random>
#include <iomanip>

main() {
    int random_number; 
    double average, total_sum, length_of_array;
    int random_numbers[10];
    std::cout << "Your random numbers are: ";
    length_of_array = sizeof(random_numbers)/sizeof(random_numbers[0]);
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        random_number = idist(rgen);
        random_numbers[loop_counter] = random_number;
        std::cout << random_numbers[loop_counter] << " ";
        total_sum = total_sum + random_number;
    }
    std::cout << "\nThe total sum is: ";
    std::cout << total_sum;
    average = total_sum / length_of_array;
    std::cout << "\nThe average is: ";
    std::cout << std::setprecision(3) << average;
}
