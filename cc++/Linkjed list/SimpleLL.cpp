#include<iostream>


using namespace std;

class Node {

    public :
    int data;
    Node *next;



    Node(int data) {
        this->data = data;
        next = NULL;

    }

    // take input from user for LL (Normal approch)


    Node *takeInput() {
        int data;
        cin >> data;
        Node *head = NULL;


        while(data != -1) {

            Node *newNode = new Node(data);
            if(head == NULL) head = newNode;



            else {
                Node *temp = head;
                while(temp->next != NULL) {

                    temp=temp->next;

                }

                temp->next = newNode;

            }
            cin >> data;


        }


        return head;



    }


    // taking  input better way (maintaining tale pointer and head)
    

    Node *betterInput() {
        int data;
        cin >> data;
        Node *head = NULL;
        Node *tail = NULL;

        while(data != -1) {
            Node *newNode  = new Node(data);
            if(head == NULL) {
                head=  newNode;
                tail = newNode;

            } else {
                tail->next = newNode;
                tail = newNode;

            }

            cin >> data;

        }

        return head;

    }

    Node *delteNode(Node *head, int i) {

        int count  = 0;
        Node *temp = head;

        if(i==0) {
            Node *a = head->next;

            
        }

        while(temp != NULL && count != i-1) {
            temp = temp->next;
            count++;


        }

        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;


        delete a;

    }


    Node *insertNode(Node *head, int i,int data) {
        Node *newNode = new Node(data);
        int count = 0;
        Node *temp = head;

        if(i==0) {
            newNode->next = head;
            head=  newNode;
            return head;

        }
        while(temp != NULL && count < i-1) {
            temp=temp->next;
            count++;
        }

        Node *a = temp->next;
        temp->next = newNode;
        newNode->next  =a;


    }
    void Print(Node *head) {
        Node *temp = head;
        //using dummy pointer so we dont loose temp.



        while(temp != NULL)

        {
            cout << temp->data << endl;
            temp  = temp->next;

            
        }



    }


    



};

int main() {

    //static

    


    // Node n1(112);

    // Node *head = &n1;
    // Node n2(1212);


    // n1.next = &n2;



    // cout << n1.data <<" " << n2.data << " "<< " " << head << endl;


   // dynamic 

   Node *n1 = new Node(11212);
   Node *n2 = new Node(4545);

   Node *n3 = new Node(11223);
   Node *n4 = new Node(323);
   Node *head = n1;

   n1->next = n2;
   n2->next = n3;
   n3->next = n4;
   n4->next = NULL;

//    Print(head);






   cout << n3->data << " " << n4->data << " " <<  head << endl;




}