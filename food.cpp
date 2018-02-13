/*Name: Holly Thorsted
 Course: CGS 3406
 Assignment: Assignment 2 Time Calculator
 Due Date: 2/2/2018
 About this Project: This program calculates the total price that an order will cost a customer.*/

#include <iostream>
using namespace std;

int main() {
    const double tax = 0.06;
    
    //user input variables
    int b_ordered, f_ordered, d_ordered;
    double given;
    
    //calculated variables
    double burger = 5.50, fries = 3.25, drink = 2.50;
    
    //Get initial user input for prices and quantity
    cout << "Hello, welcome to food calculator!\n"
    << "\nHow much do burgers cost? ";
    cin << burger;
    cout << "\nHow much do fries cost? ";
   cin >> fries;
    cout << "\nHow much do drinks cost? ";
    cin >> drink;
    cout << "\nHow many burgers were ordered? ";
    cin >> b_ordered;
    cout << "\nHow many fries were ordered? ";
    cin >> f_ordered;
    cout << "\nHow many drinks were ordered? ";
    cin >> d_ordered;
    
    //calculate the toal cost before taxes
    double cost = b_ordered * burger + f_ordered * fries + d_ordered * drink;
    
    
    //tell user cost before and after taxes
    cout << "\nThis will cost $"
    << cost;
    
    //calculate the total after taxes
    cost *= (1 + tax);
    
    cout << " before taxes and $" << cost << " after taxes";
    
    //get amount user gave so change can be calculated
    cout << "\nHow much money was given to the cashier? $";
    cin >> given;
    
    //calculate how much change the user will receive
    double change = given - cost;
    
    cout << "\nThe change is $"
    << change;
    
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //print summary
    cout << "\n\nSummary:\n"
    << "\nThe customer ordered\n";
    cout << b_ordered << " burgers\n";
    cout << f_ordered << " fries, and\n";
    cout << d_ordered << " drinks.\n";
    cout << "\nThe customer gave $" << given << " to the cashier and recieved $" << change << " in change.";
    cout << "\nThe total price was $" << cost << "\n";
    
    return 0;
    
}



