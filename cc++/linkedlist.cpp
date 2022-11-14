#include<iostream>
using namespace std;









class Node {
  public :
    int data;
    Node *next;
  

   Node (int data) {

    this->data = data;
    next = NULL;


   }  

   void print(Node *head) {

       Node* temp = head;
       while(temp!=NULL) {

        cout << "value is :" << " " << temp->data << endl;
        temp = temp->next;
        
       }  
   }



};

int main() {

    Node *n1 = new Node(12);

    Node *head =  n1;
    print(head);
    



}