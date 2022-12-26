#include<iostream>
#include<vector>
using namespace std;

//priority queue



class PriorityQueue {

  
    vector<int>pq;
    //to store CBT in vector

    public:

    

       PriorityQueue() {
        //Constructor
          
       }



       bool isEmpty() {
             // returns T  or F 
            return pq.size() == 0;

       }

       int getSize(){
 
          // returns no. of elements in the vector.
          return pq.size();

       }

       void insert(int element) {

             pq.push_back(element);

             // finding child and parent index
             // we can now compare if child is smaller than parent to preserve heap order property
             

             int childIndex = pq.size() -1;

             // running while loop until we react root or we have found the right match for the number

            while(childIndex > 0 ) {
             int parentIndex = (childIndex  - 1 )/2;

             if(pq[childIndex] < pq[parentIndex]) {

               //swapping child to parent if  it i smaller

               int temp = pq[childIndex];
               pq[childIndex] = pq[parentIndex];
               pq[parentIndex] = temp;


                    
             }else {
                break;

             }



             // calculating new parentIdnex;
             childIndex = parentIndex;

            }
             

       }

       int removeMin() {
         if(isEmpty()) {
               return 0;

         }
          
             int ans = pq[0];
             pq[0]=  pq[pq.size()-1];
             pq.pop_back();

             // down-heapify 

             int parentIndex = 0;
             int leftChildIndex = 2 * parentIndex  +1;
             int rightChildIndex = 2 * parentIndex +2;


             while(leftChildIndex < pq.size()) {
             int minIndex = parentIndex;
             if(pq[minIndex] > pq[leftChildIndex]) {
                 minIndex = leftChildIndex;

             }

             if(rightChildIndex < pq.size()  &&  pq[minIndex] > pq[rightChildIndex]) {
                 minIndex = rightChildIndex;

             }
             if( minIndex == parentIndex) {
                  break;

             }

             int temp  = pq[minIndex];
             pq[minIndex] =  pq[parentIndex];
             pq[parentIndex] = temp;

             parentIndex = minIndex;
             leftChildIndex=  2* parentIndex + 1;
             rightChildIndex = 2* parentIndex +2;


             }




             return ans;


       }



      


};





 


      


int main () {

    PriorityQueue p;
   p.insert(12);
   p.insert(34);
   p.insert(454);
   p.removeMin();
   
    p.removeMin();


    cout << p.getSize() << endl;

    while(!p.isEmpty()) {
          cout << p.removeMin() << endl;
          
    }

       

}



