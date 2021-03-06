/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    TopDownFibCalculator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Dalton McCart <dmm42@live.missouristate.ed>
 * @brief   Definition of TopDownFibCalculator.
 */

#include "TopDownFibCalculator.h"

int TopDownFibCalculator::nthFibonacciNumber(int n) const {
  std::map<int, int> m;
  m[0] = 1;
  m[1] = 1;
  if (m.find(n) == m.end()){
      m[n] = nthFibonacciNumber(n-1) + nthFibonacciNumber(n-2);
  }
    return m[n];
}

