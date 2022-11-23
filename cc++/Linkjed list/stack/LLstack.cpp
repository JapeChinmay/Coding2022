#include<iostream>
using namespace std;


class Node {

    public:
       int data;
       Node* next;

       Node(int data) {
           this->data = data;
           next=  NULL;

       }



};

class Stack {

    public:
       Node*head = NULL;
       int s;

    
    Stack() {

        head = NULL;
        s = 0;
 
          
    }

    bool isEmpty() {
            return s == 0;

    }

    void Insert(int element) {
          
          Node* newNode = new Node(element);
          newNode->next =  head;
          head=  newNode;
          s++;

    }

    int pop() {

           if(isEmpty()) {
                return 0;

           }


           int ans = head->data;

           Node* temp = head;
           head=  head->next;
           delete temp;
           s--;
           return ans;


    }

    int top() {
           if(head == NULL) return 0;
           else {
              return head->data;

           }
    }




};

int main(){

    Stack s;
    s.Insert(112);
    cout << s.top() << endl;
    

    


}