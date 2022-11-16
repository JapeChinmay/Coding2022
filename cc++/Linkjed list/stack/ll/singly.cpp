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

      ~Node() {
           int v = this->data;

           if(this->next != NULL) {
                 delete next;
                 this->next=  NULL;

           }

           cout << "Memory is free" << endl;
      }

};

////////////////////////////////////////////////////////////////////////////////////////////////////

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

void insertAttail( Node* &tail , int data) {
       
         Node*temp = new Node(data);
         tail->next = temp;
         tail = temp;



}

void insertAtPos(int pos, int data , Node* &head, Node* &tail) {

        if(pos == 1) {
             insert(head, data);
             return;

        }
        Node* temp = new Node(data);
        Node* start = head;
        int c=  1;
        while(c <pos-1) {
               start = start->next;
               c++;
        }
        if(start->next == NULL) {
              insertAttail(tail, data);
              return;

        }

        temp->next=  start->next;
        start->next = temp;


}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  void deleteNode(int pos , Node* &head, Node* &tail) {
       
           if(pos  == 1) {
               
                 Node* temp = head;
                 head= head->next;
                 temp->next = NULL;


                 delete temp;


           } 
           else  {
              Node* prev = NULL;
              Node* curr=  head;
              int c= 1;
              while(c <pos) {

                

                prev = curr;
                curr = curr->next;
                c++;


                    
              }if(curr->next == NULL) {
                    tail = prev;
                    prev->next = NULL;
                    


              }
              

             

              prev->next=  curr->next;
              curr->next = NULL;

              delete curr;

           }
  }

int main() {

    Node* node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;

   insertAttail(tail, 1212);
   insertAttail(tail,10);
   insertAtPos(4,56,head, tail);

   insertAtPos(3,33,head, tail);

   printLL(head);

   deleteNode(3, head, tail);
   deleteNode(1,head, tail);
   deleteNode(3, head, tail);


   printLL(head);



   cout << head->data << tail->data << endl;







    

      

}