/*
Name: Andrew Hanson
Email: awh5563@psu.edu
Class: CMPSC 122, section 1
Program 4.1 : rpn.cpp
Description: This program implements a reverse polish notation algorithm
*/


#include <iostream>
#include <string>
#include <sstream>
#include "stack.h"

using namespace std;

int main(){

Stack stack;
string expression;
    cout << "Enter an infix expression: ";
    getline(cin,expression);

    cout << "The equivalent postfix expression of" << expression <<"is: " << endl << "\t";

    


    return 0;
}