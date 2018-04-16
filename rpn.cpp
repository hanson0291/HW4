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

bool isITanOperator(char o){
    if(o == '*' || o == '/' || o == '+' || o == '-'){
        return true;
    } else {
        //cout << "No Operator detected.";
        return false;
    }
}

bool isITanOperand(char o){
    if(!isITanOperator(o) && o != '(' && o  != ')'){
        return true;
    } else {
        cout << "No Operand Detected.";
        return false;
    }
}

int WhatIsTheInteger(int o1, int o2, char first){
     switch(first){
         case '*': return (o1 * o2);
         case '/': return (o1 / o2);
         case '+': return (o1 + o2);
         case '-': return (o1 - o2);
     }
    return 0;
}

void calculate(string stringer){
    Stack Operators;
    Stack Operands;
    string input;

	istringstream ss(stringer);
	//ss >> value;

while(ss >> input){
        
        char first = Operators.top();
        Operators.pop();
        int o1 = Operands.top();
        Operands.pop();
        int o2 = Operands.top();
        Operands.pop();
        Operands.push(WhatIsTheInteger(o1,o2,first));
    }
    Operators.pop();

    while(!Operators.isEmpty()){
        char first = Operators.top();
        Operators.pop();
        int o1 = Operands.top();
        Operands.pop();
        int o2 = Operands.top();
        Operands.pop();
        Operands.push(WhatIsTheInteger(o1,o2,first));
    }

    cout << Operands.top() << endl;
}

string NOspace(string stringer){
	int length = stringer.length();	
	string e = "";
	char ch = e[0];
		
	for (int x = 0; x < length; ++x){
		ch = stringer[x];	
		if (ch != ' ')
		    e += ch;
		
	}
	return e;
}


int main(){

Stack stack;
string expression, postfix = "", postfixstringer = "";

    cout << "Enter an infix expression: ";
    getline(cin,expression);
    string NoSpace = NOspace(expression);
    int NOspaceLength = NoSpace.length();
    char *posterfixer = new char[NOspaceLength - 1];

	for (int i = 0; i < NOspaceLength; i++) {
        posterfixer[i] = postfix[i];
        postfixstringer += posterfixer[i];
        postfixstringer += " ";

	}



    cout << endl << "The equivalent postfix expression of " << expression <<" is: " << endl << "\t" << postfix << endl;

    //isITanOperator(x);
    //calculate(expression);


    return 0;
}