/*
 •• Business P2.8
 Giving change. Implement a program that directs a cashier how to give change. The program has two inputs: the amount due and the amount received from the customer. Display the dollars, quarters, dimes, nickels, and pennies that the customer should receive in return.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter amount due: ";
    float amount_due;
    cin >> amount_due;
    
    cout << "Enter amount recieved: ";
    float amount_recieved;
    cin >> amount_recieved;
    
    float change = amount_recieved - amount_due;
    cout << "change: " << change << endl;

    int dollars = change;
    cout << "dollars: " << dollars << endl;
    
    int newChange = (change * 100) + 0.5;
    cout << "new change: " << newChange << endl;
    
    unsigned int cents = newChange % 100;
    
    cout << "cents: " << cents << endl;
    
    int quarters = cents / 25;
    cout << "quarters: " << quarters << endl;
    
    newChange = cents - (quarters * 25);
    
    int dimes = newChange / 10;
    cout << "dimes: " << dimes << endl;
    
    newChange = newChange - (dimes * 10);
    
    int nickels = newChange / 5;
    cout << "nickels: " << nickels << endl;
    
    newChange = newChange - (nickels * 5);
    int pennies = newChange;
    cout << "pennies: " << pennies << endl;
    
}
