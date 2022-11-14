#include<iostream>
using namespace std;

class StackUsingArray {


    int *data;
    int nextIndex;
    int capacity;

    

    public : 


    StackUsingArray(int totalSize) {

        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;


    }

    int size() {
        return nextIndex;

    }

    int front() {
        if(nextIndex == 0) {
            cout << "is empty" <<endl;
            return 0;

        }
         return data[nextIndex-1];

    }

    void push(int ele){
        if(nextIndex== capacity) {
            cout << "lol" << endl;
            return;

        }
        data[nextIndex]  = ele;
        nextIndex++;
        

        
    }

    int pop() {
        nextIndex--;
        return data[nextIndex];
        
    }


}