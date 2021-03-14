//
//  rect1.cpp
//  Week5Prog5ARectangle
//
//  Created by Jackie on 2/21/21.
//


#include <iostream>
#include <iomanip>
using namespace std;
#include "rect1.hpp"

void Rectangle::set_values (int x, int y) {
     // complete this function so the code works
    width = x;
    height = y;
}

int Rectangle::area() {
   int answer;
    // complete this function so the code works
    answer = width * height;
   return answer;
}
