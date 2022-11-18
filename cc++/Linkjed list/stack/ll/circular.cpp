#include<iostream>
#include<map>
using namespace std;


class Node {

    public:
      int data;
      Node* next;

      Node(int data) {
            this->data= data;
            next=  NULL;

      }

      ~Node() {
           int v = this->data;
           if(this->next!= NULL) {
                 delete next;
                 next= NULL;

           }
      }




      

};



void insertAtPos(Node* &tail, int e, int data) {

     if(tail == NULL) {
           
        Node* temp = new Node(data);
        tail  = temp;
        temp->next=  temp;




     }else {

          Node* curr=  tail;

           while(curr->data != e) {
                 curr =  curr-> next;

           }


           Node* temp =  new Node(data);
           temp->next=  curr->next;
           curr->next=  temp;


     }
        
          
}

void deleteNode(Node* &tail, int v) {

      if( tail == NULL) {
              cout << "List is empty" << endl;

      }else {
               
               Node* prev = tail;
               Node* curr =  prev->next;

               while(curr->data != v) {
                      prev = curr;
                      curr =curr->next;
               }


               prev->next= curr->next;
               if(tail == curr) {
                      tail = prev;
                      
               }
              
               curr->next =  NULL;
               delete curr;

      }


       
}

void print(Node* &tail) {
       Node* temp = tail;

       do {
          


          cout << " data :" << " " << tail->data  << endl;
          tail=  tail->next;
       }while(tail != temp);

            cout << endl;

       
      
       

}

bool isdetected(Node* &tail)  {
        
        if(tail== NULL) return false;

         map<Node* , bool> visited;


         Node* temp = tail;
         while(temp !=NULL) {
              if(visited[temp] == true) {
                     return 1;

              }

              visited[temp] == true;
              temp = temp->next;

         }

         return 0;

  }



int main() {

    Node* tail = NULL;
    insertAtPos(tail, 3, 12);
    insertAtPos(tail, 12 ,99);
    insertAtPos(tail, 12, 345);
    deleteNode(tail, 12);

    cout << isdetected(tail) << endl;


    
    //print(tail);



}