/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    BottomUpFibCalculator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Dalton McCart <dmm42@live.missouristate.edu>
 * @brief   Definition of BottomUpFibCalculator.
 */

#include "BottomUpFibCalculator.h"

int BottomUpFibCalculator::nthFibonacciNumber(int n) const {
    int previousFib = 0;
    int currentFib = 1;
    int newFib = 0;

    if (n == 0 || n == 1){
        return 1;
    }
    else {
        for (int i = 0; i < n; ++i){
            newFib = previousFib + currentFib;
            previousFib = currentFib;
            currentFib = newFib;
        }
    }
    return currentFib;
}
