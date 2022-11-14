#include<iostream>
// #include<bitset>
#include<bits/stdc++.h>
#include<vector>



using namespace std;


int main() {


      
      vector<int>a(10);

      for(int i=0;i<a.size();i++) cin>>a[i];
      cout << " sorted" << " " << sort(a.begin(),a.end()) << endl;

      if(binary_search(a.begin(),a.end(),5)) cout << "Yes" << endl;
       
      









}