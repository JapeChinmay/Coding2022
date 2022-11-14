

#include<iostream>

template<typename T>



using namespace std;


class stack {

    T *stackArray;
    int ni;

    int capacity;


    public:


    stack () {

        stackArray = new T[10];
        ni = 0;
        int capacity = 10;



    }


    int size() {
        return ni;

    }

    bool isEmpty() {

        if(ni == 0) return true;
        else return false;

    }

    void push(T e) {

        if(ni == capacity) 
        
        {      T *newData = new T[2 * capacity];
              for(int i=0;i<capacity;i++) {
                newData[i] = stackArray[i];

              }
              capacity *= 2;
              delete [] stackArray;
              stackArray = newData;
              


            }
            //return;
        else {

              stackArray[ni] = e;
              ni++;


        }
    }


    T  pop() {
        if(ni == 0) return 0;
        else {
             
            ni--;

            return stackArray[ni];
            
        }
    }

    T  top() {

        if(ni==0) return 0;


        return stackArray[ni-1];

    }
};



int main() {


    stack<int>s1;

    s1.push(12);
    s1.push(121);

    cout << s1.top() << s1.isEmpty() << endl;

}