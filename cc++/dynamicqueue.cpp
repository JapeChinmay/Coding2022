 #include<iostream>
 using namespace std;


 class queue {

       
       int *data;
       int nextIndex;
       int firstIndex;
       int capacity;
       int size;



       public:

          queue(int s) {
              data = new int[s];
              firstIndex = -1;
              nextIndex  = 0;
              size = 0;
              capacity=s;



          }


          int getSize() {
            return size;

          }

          bool isEmpty() {
            return size == 0;

          }

          void enqueue(int element) {

              if(size == capacity) {
                int *newdata = new int[2*capacity];
                int j = 0;

                for(int i = firstIndex;i <capacity; i++) {

                    newdata[j] = data[i];
                    j++;


                }
                for(int i = 0; i<firstIndex;i++) {
                    newdata[j] = data[i];
                    j++;
                }
                delete[]data;
                data = newdata;

                firstIndex = 0;
                nextIndex = capacity;
                capacity *= 2;
                


                //cout << "queue is full " << endl;
                //return;

              }
            

              data[nextIndex] = element;
              nextIndex = (nextIndex +1) % capacity;
              if(firstIndex == -1) {
                firstIndex= 0;

              }

              size++;


          }

          int front() {
            if(isEmpty()) {
                cout << "queue is empty" << endl;
                return 0;

            }
            return data[firstIndex];

          }

          int dequeue() {
             if(isEmpty()) {
                cout << "queue is empty" << endl;
                return 0;

             }
              
              int ans = data[firstIndex];
              firstIndex =  (firstIndex +1) % capacity;
              size--;
              return ans;

          }


         



 };


  int main() {

            queue q1(10);
            q1.enqueue(1212);
            q1.enqueue(223232);
            
            cout << "size is:" << "  " << q1.getSize() << "  "<< "front is :" << " " << q1.front() << endl;
            
          }