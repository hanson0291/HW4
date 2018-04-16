/*
create interactive command driven prompt parsing commands from user invoking functions.

Prompt user to specify what data type they want the priority queue to contain
(similar to generic vector program in assignment)

Enter looping prompt parsing cmmands


*/
#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
//#include <array>

#include "pq.h"

using namespace std;

int main(){
// commands for loop: enqueue <value> <priority>, dequeue, first, empty, clear, quit
int LL1size;
string input, input2;

//PriorityQueue<int> *pq = new PriorityQueue<int>();


	cout << "Specify what data type to store in priority quete:\n";
	cout << "\t 1) int\n\t 2) float\n\t 3) double\n\t 4) string\n\t 5) bool\n> ";
	
	getline(cin,input);

	//switch(1){	
	//	case 1: PriorityQueue<int> *pq = new Pr//PriorityQueue<float> floater;iorityQueue<int>();
	//	case 2: PriorityQueue<float> *pq = new PriorityQueue<float>();
	//	case 3: PriorityQueue<double> *pq = new PriorityQueue<double>();
	//	case 4: PriorityQueue<string> *pq = new PriorityQueue<string>();
	//	case 5: PriorityQueue<bool> *pq = new PriorityQueue<bool>();
	//}


	cout << "Now accepting commands (quit to exit program):" << endl;

	while(input2 != "quit") {
		cout << "> ";
		getline(cin,input2);

	
		if(input2.rfind("enqueue", 0) == 0){


			input2.erase(0,8);
			int value = 0;
			istringstream ss(input2);
			ss >> value;

			input2.erase(0,2);
			int priority = 0;
			istringstream ss2(input2);
			ss2 >> priority;

			

			if(input == "1"){
				PriorityQueue<int> *integer = new PriorityQueue<int>();
				integer->enqueue(value, priority);
                
			}
			else if(input == "2"){
				PriorityQueue<float> *floater = new PriorityQueue<float>();
				floater->enqueue(value,priority);
			}
			else if(input == "3"){
				PriorityQueue<double> *doubler = new PriorityQueue<double>();
		
			}
			else if(input == "4"){
				PriorityQueue<string> *stringer = new PriorityQueue<string>();
			}
			else if(input == "5"){
				PriorityQueue<bool> *booler = new PriorityQueue<bool>();
			}


			//PriorityQueue<int> Q;
			//Q.enqueue();

			//if(value == 1){
			//	cout << "you printed 1! OHMYGOERD" << endl;
			//}
		}
		if(input2.rfind("dequeue", 0) == 0){
			input2.erase(0,8);
			int value = 0;
			istringstream ss(input2);
			ss >> value;

		}
		if(input2.rfind("empty", 0) == 0){
			input2.erase(0,6);
			int value = 0;
			istringstream ss(input2);
			ss >> value;

		}
		if(input2.rfind("first", 0) == 0){
		// print first value
			input2.erase(0,6);
			int value = 0;
			istringstream ss(input2);
			ss >> value;

			

		}

	};

	return 0;
}





//cout << "priority = " << priority;
//cout << "integer->enqueue(value, priority) JUST RAN SUCCESSFULLY! TRY TO PRINT!" << endl;