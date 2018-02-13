/*Name: Holly Thorsted
 Course: CGS 3406
 Assignment: Assignment 2 Time Calculator
 Due Date: 1/31/2018
 About this Project: This program calculates total time it would take to get x miles by either walking, biking, car, or airplane.*/

#include <iostream>
#include <iomanip> // You told me I could use this for decimal precision since I have xcode
using namespace std;

int main()
{
    //user input variable
    char input;
    double miles = 0;
   
    //calculated variables
    double walking = 3.11, bicycle = 9.63, car = 70, airplane = 575;
    
    
    //welcome message and getting initial input from user
    cout << "\n\nWelcome to Travel Time Calculator\n";
    cout << "\nSelect how the person will travel.\n\n";
    cout << "W   Walking\n";
    cout << "B   Bicycle\n";
    cout << "C   Car\n";
    cout << "A   Airplane\n";
    cin >> input;
    
    //display error message if user doesnt input a, b, c, or w
    if (input != 'a' && input != 'b' && input != 'c' && input != 'w' && input != 'A' && input != 'B' && input != 'C' && input != 'W') {
         cout << "\nSorry, you did not enter either W, B, C, or A\n";
    }
    
    //get the distance the user will travel in miles if input is correct
    else {
        cout << "\nHow far will the person travel (in miles)? ";
        cin >> miles;
    }
    
    //calculate time user will take to travel
    double w_time = miles / walking, b_time = miles / bicycle, c_time = miles / car, a_time = miles / airplane;

    //if else statement to display error message if value for miles is less than 0
    if (miles < 0) {
       cout << "Sorry, you did not enter a positive number.\n";
        
    } else {
        
    /* Switch statements to calculate how long the user will take to travel, with precision of miles set to 2 decimals and hours set to 4 */
   
        switch (input) {
            case 'w':
            case 'W':
                cout << "\nThe person will take ";
                std:: cout << setiosflags(ios::fixed | ios::showpoint)
                << setprecision(4) << w_time << " hours to travel ";
                std:: cout << std:: setprecision(2) << miles << " miles. Goodbye \n";
                break;
              
            case 'b':
            case 'B':
                cout << "\nThe person will take ";
                std:: cout << setiosflags(ios::fixed | ios::showpoint)
                << setprecision(4) << b_time << " hours to travel ";
                std:: cout << std:: setprecision(2) << miles << " miles. Goodbye \n";
                break;
            
            case 'c':
            case 'C':
                cout << "\nThe person will take ";
                std:: cout << setiosflags(ios::fixed | ios::showpoint)
                << setprecision(4) << c_time << " hours to travel ";
                std:: cout << std:: setprecision(2) << miles << " miles. Goodbye \n";
                break;
                
            case 'a':
            case 'A':
                cout << "\nThe person will take ";
                std:: cout << setiosflags(ios::fixed | ios::showpoint)
                << setprecision(4) << a_time << " hours to travel ";
                std:: cout << std:: setprecision(2) << miles << " miles. Goodbye \n";
                break;
                
            default:
                cout << "Please start the program over and enter valid input.\n";
                break;
        }
    }
}


