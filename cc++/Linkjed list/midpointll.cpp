#include <iostream>


using namespace std;


class Node {
    int data;
    Node *next;

    Node(int data) {
        this->data  = data;
        next = NULL;

    }

    Node *midPoint(NOde *head) {

        if(head == NULL) return 0;
        
        Node *temp = head;
        Node *fast = head->next;
        Node *slow = head;


        while(fast != NULL && fast->next != NULL) {

                slow  = slow->next;
                fast =  fast->next->next;


        }

        return slow;





    }



}


int main() {


    Node *n1 = new Node(12);
    Node *n2 = new Node(121);
    Node *n3 = new Node(3434);
    Node *n4 = new Node(31212);
    Node *n5  = new Node(2121);




}