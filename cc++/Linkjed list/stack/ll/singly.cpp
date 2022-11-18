#include<iostream>
#include<map>

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

  /////////////////////////////////////////////////////////////////////////////////////////


  Node*  reverseLL(Node* &head) {
        Node* curr = head;
        
        Node* prev = NULL;

        while(curr != NULL) {

            Node* foraward = curr->next;
            curr->next=  prev;
            prev = curr;
            curr = foraward;

               
        };

        return prev;


        

      
  }

  int middle(Node* head) {

        if(head == NULL ) return 0;
        if(head->next == NULL) return head->data;

         Node* fast = head->next;
         Node* slow = head;

         while(fast != NULL) {
               fast = fast->next;
               if(fast != NULL) {
                    fast = fast->next;

               }

               slow = slow->next;
               cout << "Stepped" << endl;


         }

         return slow->data;


  }

  void reverseLLRecursive(Node* &head, Node* curr, Node* prev) {

        
          if(curr  == NULL) {
              head=  prev;
              return;





          }

          Node* ford = curr->next;
          reverseLLRecursive(head, ford, curr);
          curr->next= prev;

  }


  Node* ReverseinKNodes(Node* head, int k) {
         if(head == NULL) return NULL;


         Node* curr =  head;
         Node* Next = NULL;
         Node* prev = NULL;


         int c=  0;
         while(curr !=NULL && c <k) {
               Next = curr->next;
               curr->next = prev;
               prev= curr;
               curr = Next;
               c++;
               

         }

         if(Next != NULL) {
               head->next = ReverseinKNodes(Next, k);

         }

         return prev;



  }

  bool isdetected(Node* &head)  {
        
        if(head == NULL) return false;

         map<Node* , bool> visited;


         Node* temp = head;
         while(temp !=NULL) {
              if(visited[temp] == true) {
                     return 1;

              }

              visited[temp] == true;
              temp = temp->next;

         }

         return 0;

  }

  Node* floyed(Node* &head) {
         if(head == NULL) return NULL;



         Node* slow=  head;
         Node* fast =  head;


         while(slow!= NULL && fast !=NULL) {
               fast = fast->next;
               if(fast!=NULL) {
                     fast = fast->next;
               }

               slow = slow->next;


               if(slow == fast) {
                    return slow;



               }


         }

         return NULL;





  }

  


int main() {

    Node* node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;

   insertAttail(tail, 1212);
   insertAttail(tail,10);
   insertAttail(tail,111);
   insertAttail(tail,4567);
   insertAttail(tail,3232);
   insertAtPos(4,56,head, tail);

   insertAtPos(3,33,head, tail);



//    deleteNode(3, head, tail);
//    deleteNode(1,head, tail);
//    deleteNode(3, head, tail);

   //Node* newHead =  reverseLL(head);

//    Node* curr = head;
//    Node * prev = NULL;


//    reverseLLRecursive(head, curr, prev);

// int ans = middle(head);

// cout << ans << endl;

//   Node* ans1 = ReverseinKNodes(head, 2);
//   cout << isdetected(head) << endl;

//   printLL(ans1);


  Node* ans=  floyed(head);
  cout << ans << endl;
  



   
   //printLL(head);

   
   




  



   







    

      

}