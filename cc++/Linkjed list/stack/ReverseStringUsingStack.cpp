#include<iostream>
#include<stack>
#include<string>
using namespace std;



void solve(stack<int>&num, int c,int size) {
        
          if(c == size/2) {
                num.pop();
                return;

          }


          int takeBack  = num.top();
          num.pop();


          // call

          solve(num, c+1,size);
          num.push(takeBack);

          while(!num.empty() ) {
               cout << num.top();
               num.pop();
          }

};


int main() {

    // string name = "chinmay";

    // stack<char>cj;


    


    // for(int i = 0; i<name.length();i++) {



    //     char ch = name[i];

    //     cj.push(ch);
          
    // }


    // while(!cj.empty()){
    //       cout << cj.top() << endl;
    //       cj.pop();


    // }


    stack<int>num;
    int c = 0;


    for(int i = 0; i<23;i++) {
        int r = rand() % 23;
        num.push(r);


    }

    int size = num.size();
    solve(num, c, size);


    



   








     
}