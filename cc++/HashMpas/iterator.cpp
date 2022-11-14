#include<iostream>
#include<unordered_map>
#include <string>
#include<vector>
using namespace std;

int main(){

    unordered_map<string,int>ourmap;

    ourmap["abc"] = 1;
     ourmap["abz"] = 2;
      ourmap["c"] = 3;
       ourmap["bc"] = 4;
        ourmap["ac"] = 5;
         ourmap["a"] = 6;

         unordered_map<string,int> :: iterator it;
         it=  ourmap.begin();
         while(it != ourmap.end()) {
                cout << "key:" << it->first << " " << " value" << it->second << endl;
                it++;

         }


         




}