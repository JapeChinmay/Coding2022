#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node *next;


    Node(int data) {
        this->data = data;
    }
};

class Stack {
    Node *head;
    int size;


    public :
    

    Stack() {
        head = NULL;
        size = 0;

    }

    int getSize() {
        return size;

    }

    bool isEmpty() {
        return size == 0;

    }

    void push(int element) {
        Node *newNode = new Node(element);
        newNode->next=head;
        head = newNode;
        size++;

    }

    int pop() {
        if(isEmpty()) {
            cout << "empty" << endl;
            return 0;

        }
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;

    }

    int top() {
        if(isEmpty()) {
            return 0;
        }else {
            return head->data;

        }

    }
};

int main () {
    Stack s1;
    s1.push(12);
    s1.push(121212);
    s1.push(121211);
    s1.push(2);


    cout << "Size is :" << " " << s1.getSize()<< " " << "top ele is :" << " " << s1.top() << endl;

}