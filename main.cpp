//
//  main.cpp
//  Week5Prog5ARectangle
//
//  Created by Jackie on 2/21/21.
//

#include <iostream>
#include <iomanip>
#include "rect1.hpp"
using namespace std;


int main () {  // Use this driver program
    cout << "Name: Jackie Ocaña - Prog5Rect - Date:  2/21/21" << endl;
    // Use set_values function to set values
    Rectangle rect1;
    rect1.set_values (5,6);
    cout << "area: " << rect1.area() << endl;
    
    // Use set_values function to set values
      Rectangle rect2;
      rect2.set_values (3,4);
      cout << "area: " << rect2.area() << endl; return 0; }

