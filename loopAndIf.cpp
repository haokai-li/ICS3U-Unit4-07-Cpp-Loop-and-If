// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about loop and if
#include <iostream>

int main() {
    // This Program is about loop and if
    int loopNumber;

    // process
    for (loopNumber = 1000; loopNumber < 2001; loopNumber++) {
        if ((loopNumber + 1) % 5 == 0) {
            // output
            std::cout << loopNumber << " " << std::endl;
        } else {
            // output
            std::cout << loopNumber << " ";
        }
    }
    std::cout << "\nDone." << std::endl;
}
