#include<iostream>

using namespace std;

class Doubly {
    public:
       int data;
       Doubly*next;
       Doubly* prev;


       Doubly(int data) {
          this->data = data;
          this->prev = NULL;
          this->next = NULL;

       }
};


void print(Doubly* &head) {
       Doubly* temp = head;
       int l =0;

       while(temp!= NULL) {
        
          cout << temp->data << " ";
            l++;
          temp = temp->next;
        

       }

       cout << endl;
       cout << l<< endl;


}

void insertAtHead(Doubly* &head, int data) {
      Doubly* temp = new Doubly(data);
      temp->next=  head;
      head->prev=  temp;
      head = temp;

    
}

void insetAtTail(Doubly* &tail, int data) {
       Doubly* temp  =  new Doubly(data);
       tail->next= temp;
       temp->prev = tail;
       tail  = temp;

}



int main() {

    Doubly* nod1  = new Doubly(12);
    Doubly* head = nod1;
    Doubly* tail = nod1;

    insertAtHead(head, 121212);
    insertAtHead(head,34);
    insertAtHead(head,67);
    insertAtHead(head,3);
    insetAtTail(tail, 999);
    insertAtHead(head,1000);




    print(head);

    cout << head->data << " " << tail->data << endl;



      
}