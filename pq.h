/*

This program must contain the priorityQueue class as specified.

You may need additional classes to implement priorityQueue class(possibly ListNode and List)


*/
#include <string>
//#include <array>

using namespace std;

template <typename T>
class PriorityQueue {
    public:
        // enqueue method <value> <priority> 
        T *pq;
        T enqueue();
        T enqueue(int,int);
        T enqueue(float,float);
        T enqueue(double,double);
        T enqueue(string,string);
        T enqueue(bool,bool);
        // dequeue = print returned value to standard output
        T dequeue();
        // first = print returned calue to standard out
        T first();
        // empty = print returned value to standard out
        T clear();



    private:
        // Private members ;)

};

template <typename T>
class ListNode {
    public:

    private:

};

template <typename T>
class List {
    public:

    private:
};


template <typename T>
T PriorityQueue<T>::enqueue(){
    //cout << "\n\nPriority class::enqueue function NO PARAMETERS called!\n\n" << endl;

}

template <typename T>
T PriorityQueue<T>::enqueue(int value, int priority){
    //cout << "\n\nPriority class:: enqueue function called!\n\n" << endl;
    //PriorityQueue<int> *pq = new PriorityQueue<int>();
    //cout << pq->dequeue() << pq->dequeue() << pq->dequeue() << pq->dequeue();
    int v[] = {0},p[0];
    int *queue[value][priority]; 

    if(v[0] == 0){     
        //cout << "sizeof(v) = " << (sizeof(queue)/sizeof(queue[0])) << endl;
    } else {
        int *temp[(sizeof(queue)/sizeof(queue[0])) + 1][(sizeof(queue)/sizeof(queue[0])) + 1];
        for(int i = 0; i < (sizeof(queue)/sizeof(queue[0])) + 1; i++){
            for(int j = 0; j < (sizeof(queue)/sizeof(queue[0])) + 1; j++){
                temp[i][j] = queue[i][j];
                //pq = temp;
            }
        }   
        //delete [] queue;
        //queue = temp;
        //delete [] temp;
        //temp = NULL;
    }
}

template <typename T>
T PriorityQueue<T>::enqueue(float value, float priority){


}

template <typename T>
T PriorityQueue<T>::enqueue(double value, double priority){


}

template <typename T>
T PriorityQueue<T>::enqueue(string value, string priority){


}

template <typename T>
T PriorityQueue<T>::enqueue(bool value, bool priority){


}