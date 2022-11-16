#include<iostream>

using  namespace std;

class Node {
      public:
      int data;
      Node *next;


      Node(int data) {
          this->data = data;
          next = NULL;

      }

};

void insert(Node* &head, int data) {
    Node* temp  =new Node(data);
    temp->next = head;
    head = temp;
   
}

void printLL(Node* &head) {
      Node* temp  = head;

    
      while(temp != NULL) {
           cout << temp->data << " ";

           temp = temp->next;

      }
      cout << endl;
      
}




int main() {

    Node* node1 = new Node(12);
    Node *head = node1;
    insert(head, 12);
    insert(head ,1212);
    printLL(head);
    




    

      

}