//
//  main.cpp
//  Book Exercise 3.4
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Goldilocks Program
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Goldilocks Program \n";
    // D
    double temp_input = 0.0;
    
    // I
    cout << "Enter the temperature: ";
    cin >> temp_input;
    
    // P // O
    if (temp_input < 30) {
        cout << "too cold" << endl;
    } else if (temp_input > 100) {
        cout << "too hot" << endl;
    } else {
        cout << "just right" << endl;
    }
    
    
    return 0;
}
