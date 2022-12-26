#include<iostream>
#include<vector>
using namespace std;



void inplaceHeap(vector<int>&pq, int n) {

    for(int i= 1; i<n;i++) {

          int childIndex = i;

         
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
     
      
}

int main() {

     
       
}