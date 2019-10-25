//
//  main.cpp
//  machineatm
//
//  Created by Abbie Thorne on 9/18/19.
//  Copyright © 2019 Abbie Thorne. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int inputAmt;
    //explaining what the user will get back
    cout << "This machine  only will dispense in $1, $5, $10, $20, and $50 bills only" << endl;
    do
    {
        cout << "Enter in the amount to be withdraw : " << endl;
        
        cin >> inputAmt;
        
        if (inputAmt < 1.00) cout << "Please input a number greater than $1.00";
        if (inputAmt > 300.00) cout << "Please input a number less than or equal to $300.00";
    }while(inputAmt < 1 || inputAmt > 300);
    
    
    
    // Determines the amount of $50 bills to  dispense
    long fiftyBill;
    fiftyBill = inputAmt/50;
    
    long remainderAmt;
    remainderAmt = inputAmt - (fiftyBill*50);
    
    // Test the Remainder Amount if it is even
    int remE;
    remE = remainderAmt % 20;
    
    if (remE >= 10 || remE <= 20 )
    {
        // If it is not, reduced $50 by 1 and add it to the remainder amount
        fiftyBill = fiftyBill - 1;
        remainderAmt = remainderAmt + 50;
    }
    
    // Determines the amount of $20 bills to dispense
    long twentyBill;
    twentyBill = remainderAmt / 20;
    
    //Determine the number of $10 dollar bills to dispense
    long tenBill;
    tenBill = remainderAmt / 10;
    
    //Determine the number of $5 dollar bills to dispense
    long fivebill;
    fivebill = remainderAmt / 5;
    
    //Determines the number of $1 bills to dispense
    long dollarBill;
    dollarBill = remainderAmt / 1;
    
    // Output Message
    cout << "Number of $50 dollar bills : " << fiftyBill << endl;
    cout << "Number of $20 dollar bills : " << twentyBill << endl << endl;
    cout << "Number of $10 dollar bills : " << tenBill << endl << endl;
    cout << "Number of $5 dollar bills : "  << fivebill << endl << endl;
    cout << "Number of $1 dollar bills : "  << dollarBill << endl << endl;
    cout << "Number of bills dispensed is " << fiftyBill + twentyBill + tenBill + fivebill + dollarBill << endl;
    
    // ask if another transaction should be made
    
    char ask;
    do
    {
        
        std::cout << "Do You Want Another Transaction: Y/N";
        std::cin >> ask;
    } while (ask == 'y' || ask == 'Y');
    
    return 0;
    
    
    //program ends if no more withdrawals are being made
    
}


