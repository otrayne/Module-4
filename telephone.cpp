/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	    CSC 242
** Assignment: 	Lesson 1
** File: 	    telephone.cpp
** Description: This program will allow the user to input a 10-digit phone number and format it with parenthesis and a hyphen.
**
** Author: 	    Dustin Overton
** Date: 	    08AUG24
** -------------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string phone_number;
     
    cout << "Please enter a 10 digit phone number: "; // Prompts user to enter 10 digit phone number
    cin >> phone_number;

    if (phone_number.length() == 10) // Validates user provided phone number and formats
        cout << "Your formatted phone number is: ("
             << phone_number.substr(0, 3) << ") "
             << phone_number.substr(3, 3) << "-"  
             << phone_number.substr(6) << endl;
    else 
        cout << "INVALID INPUT! YOU DID IT WRONG! Please enter a 10 digit phone number." << endl;
    
    return 0;
}
