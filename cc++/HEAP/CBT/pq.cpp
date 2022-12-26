#include<iostream>
#include<vector>
using namespace std;

class PriorityQueue  {

    private:

    vector<int>pq;


  public:
// constructor
    PriorityQueue() {
         
          
    }

     bool isEmpty() {
          return pq.size() == 0;

     }

     int getSize() {
         
            return pq.size();

     }

     int getMin() {
         
          if(isEmpty()) return 0;
          else return pq[0];

     }

     void insert(int element) {

        pq.push_back(element);
        
         
     }



     
       
};


int main() {
     
      
       
}