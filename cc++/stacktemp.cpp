#include <iostream>


using namespace std;
template <typename T>

class Stack {


    T data ;
    int nextIndex;
    int capacity;


    public :
    
    Stack(T totalSize) {
        data = new T[totalSize];
        capacity = totalSize;
        nextIndex = 0;

    }

      T top() {
        
        return data[nextIndex-1];

        
    }

    void  push(T element) {

        if(nextIndex != capacity) {
            data[nextIdnex] =  element;
            nextIndex++;

        }
    }

};


int main() {

    Stack<int> s1(12);
    s1.push(1112);
    s1.push(12);

    cout << s1.top() << endl;

}

