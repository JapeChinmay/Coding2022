#include<iostream>
#include<string>
using namespace std;


void tri(int r,int c) {
    if(r == 0) return;

    if(c < r) {
        cout << "*";
        tri(r,c+1);

    }else {
        cout << endl;
        tri(r-1,0);

    }
}

void tri2(int r, int c) {
    if(r == 0) return;

    if(c < r) {
        tri2(r, c+1);
        cout << "*";

    }else {
       
        tri2(r-1,0);
        cout << endl;
        

    }
}


void arr(string s, char target) {

      for(int i=0;i<s.size();i++) {
           if(s[i] == target) {
                 s.erase(i,1);
                 
           }

           cout << s << endl;

      }

    
}




int main () {

    string s = "chinmayjapewew";
    char* t = "w";
    


//   string str;
//   cin >> str;
//   cout << str;

//   string str1(5,'c');
//   cout << str1;

//   string cj;
//   getline(cin,cj);
//   cout << cj;

//   string s1;
//   string s2;

//   cout << "enter s1 "<< endl;

//   getline(cin,s1);

//   cout << "enter s2"<< endl;
//   getline(cin,s2);


//   cout << s1 +  " " + s2 << endl;
 

//  cout << s1[1] << " " << s2[3] << " " << s1.substr(3);


//  string s1 = "abc";
//  string s2 = "jape";

//  cout << s1.erase();





  



}
   








       
