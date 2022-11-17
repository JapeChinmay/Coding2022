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

       ~Doubly() {
            int val = this->data;
            if(next!=NULL) {
                  delete next;
                  next = NULL;
                  
            }

            cout << "deleted"<< endl;

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

void insertAtPos(Doubly* &head, Doubly*&tail ,int data, int pos)  {
       if(pos == 1) {
             insertAtHead(head, data);
             return;

       }

       Doubly* temp = head;


       int c= 1;
       while(c < pos-1) {
            
            temp = temp->next;
            c++;

            
       }

       if(temp->next == NULL) {
            insetAtTail(tail, data);
            return;

       }

       Doubly*nodetoInsert = new Doubly(data);
       nodetoInsert->next = temp->next;
       temp->next->prev = nodetoInsert;
       temp->next = nodetoInsert;
       nodetoInsert->prev = temp;

}

void deleteAtPos(Doubly* &head, int pos) {
      
          if(pos == 1) {
            Doubly* temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;

                  
          } else {
               
               Doubly* curr = head;
               Doubly* prev = NULL;


               int c=1;
               while(c < pos) {
                     prev =curr;
                     curr = curr->next;
                     c++;
               }

              


               


               curr->prev = NULL;
               prev->next = curr->next;
               curr->next = NULL;
               delete curr;

               

               


          }
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
    insertAtPos(head, tail, 111,4);
    deleteAtPos(head, 2);
    

    

 






    print(head);

    cout << head->data << " " << tail->data << endl;



      
}