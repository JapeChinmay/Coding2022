#include<iostream>
using namespace std;


class Node {

    int data;
    Node *next;

    public :
      Node() {
        this->data = data;

      }


};

class QueueLL {

     Node *head;
     Node*tail;
     int size;


     public :
     QueueLL() {
        head=NULL;
        tail = NULL;
        size = 0;

     }

     int getSize() {
        return size;

     }


     void enqueue(int ele) {
       
        Node *newNode = new int(ele);
        if(head==NULL) {
            head = newNode;
            tail = newNode;
            size++;

        }
        tail->next  = newNode;
        tail = newNode;
        size++;

     }

     int front() {
        if(head==NULL) {
            return 0;


        }
        return head->data;

     }

     int dequeue(){
        if(head==NULL) {
            return 0;

        }else {
            int ans  = head->data;
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
            return ans;

        }
        
     }
}