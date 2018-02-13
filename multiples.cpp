/*Name: Holly Thorsted
 Course: CGS 3406
 Assignment: Assignment 3 Multiples
 Due Date: 2/9/2018
 About this Project: This program prompts the user to input a positive integer to find multiples of.*/

#include <iostream>
#include <iomanip> // You told me I could use this for decimal precision since I have xcode
using namespace std;

int main()
{
    //user input variables
    int m, x, y;
    int Sum(int x, int y);
    double Sum(double x, double y);
    //
    
    //prompt the user to input a postive number
    cout << "\nInput a positive integer to find multiple variables of: ";
    cin >> m;
    
    if (m < 0) {
        cout << "\nYou did not input a positive integer. Goodbye.";
        return 0;
        }
    else {
        cout << "\nInput two endpoints to search between: ";
        cin >> x >> y;
        cout << "\nThe multiples of " << m << " between " << x << " and " << y << " are:\n";
        
        cout << "\nTheir sum is " << Sum(x, y) << endl;
        return 0;
    }
    int Sum(x, y) {
        int sum = x + y;
        return sum;
    }
}
