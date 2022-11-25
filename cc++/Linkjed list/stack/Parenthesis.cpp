#include<iostream>
#include<stack>
#include<string>


using namespace std;

bool isBalanced(string input) {
      
        stack<char>ans;
        for(int i=0;i<input.length();i++){

            // if opening 

            char ch = input[i];
            if(ch == '(' || ch == '{' || ch == '[') {
                  ans.push(ch);

            }else {
                   
                   if(!ans.empty()) {
                         char top = ans.top();
                         if( (ch == '}' &&  top == '{' )  || (ch == ']' && top == '[') || (ch == ')' && top == '(')) 
                         {

                              ans.pop();
                         }else {
                               return false;

                         }
                   }else {
                      return false;

                   }
            }
              
        }


        if(ans.empty()) return true;
        else return false;

}

void insertAtBottm(stack<char>&cj, char ch) {
      
        if(cj.empty()) {
              
              cj.push(ch);
               return;

        }


        char keepAside = cj.top();
        cj.pop();

        //call
        insertAtBottm(cj, ch);
        cj.push(keepAside);
        

}

void reverseStack(stack<char>&cj) {
      if(cj.empty()) {
          return;

      }


}






int main() {

    string input = "(((()){}))";



    

    cout << isBalanced(input) << endl;

    stack<char> cj;

    cj.push('q');
    cj.push('e');
    cj.push('Q');
    cj.push('t');

    insertAtBottm(cj, 'c');
    while(!cj.empty()) {
          cout << cj.top() << endl;
          cj.pop();


    }


    


       
        
}