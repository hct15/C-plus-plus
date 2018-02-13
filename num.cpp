/*Name: Holly Thorsted
 Course: CGS 3406
 Assignment: Assignment 2 num.cpp
 Due Date: 1/31/2018
 About this Project: This program will ask the user for 3 variables and will tell the user what the largest and the smallest one was.*/


#include <iostream>
using namespace std;

int main()
{
    //user input variables
    double x, y, z;
    
    //ask the user for 3 variables
    cout << "\nInput integer 1: ";
    cin >> x;
    cout << "\nInput integer 2: ";
    cin >> y;
    cout << "\nInput integer 3: ";
    cin >> z;
    
    //tell the user what the largest value was
    cout << "\nThe largest value was ";
    
    //if else statements calculating largest value
    if (x > y && x > z)
        cout << x;
    else if (y > x && y > z) 
        cout << y;
    else if (z > x && z > y)
        cout << z;
    
    
    //tell the user what the smallest value was
    cout << "\n\nThe smallest value was ";
    
    //if else statements calculating smallest value
if (x < y && x < z)
        cout << x << "\n";
else if (y < x && y < z)
        cout << y << "\n";
else if (z < x && z < y)
        cout << z << "\n";
    return 0;
}


