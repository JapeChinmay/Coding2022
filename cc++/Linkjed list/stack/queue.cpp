#include<iostream>

using namespace std;

template<typename T>;



class queueArray {
     
     T *data;

     int ni;
     int fi;
     int size;
     int capacity;



   public :

   queueArray(int s) {

        data = new T[s];
        ni=0;
        fi = -1;
        size = 0;
        capacity = s;


   }


   T  getSize() {
    return size;
   }


   bool isEmpty() {
    return size ==0;

   }


   //insert 

   void enqueue(T el) {

    if(size == capacity) return;

       data[ni] = el;
       ni = (ni + 1) % capacity;

       if(fi == -1) {
        fi = 0;

       }
       size++;





   }


   T front() {

    if(fi ==  -1) return 0;

    else return data[fi];



   }

   // delete

   T dequeue() {

       if(fi == -1) return 0;
       T ans = data[fi];
       fi++;
       size--;
       return ans;
       

   }

}