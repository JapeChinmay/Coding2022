#include<iostream>

using namespace std;


class stackUsingArray  {

    int nextIndex;
    int*data;
    int capacity;



    public:

       stackUsingArray(int totalSize) {

              data = new int[totalSize];
              nextIndex=0;
              capacity = totalSize;



       }


       // return size

       int size() {

           return nextIndex;

       }

       // check if empty 

       bool isEmpty() {
        if(nextIndex==0) return true;
        else return false;

       }


       //insertEleement

       void push(int element) {

        if(nextIndex == capacity) {


            cout << "stack is Full" << capacity << endl;
            return;



        } else {

           data[nextIndex] = element;
           nextIndex++;

        }

       }

          //delete

          int pop() {

            if(nextIndex==0) {
                return 0;

            }

            else {

             nextIndex--;
             return data[nextIndex];

            }


          

          }

          //top

          int top() {
             return data[nextIndex-1];


          }



       };




int main () 

{


    stackUsingArray s1(5);
    s1.push(10);
    s1.push(1212);
    s1.push(122212);


    cout << s1.size() << s1.isEmpty() << endl;




}