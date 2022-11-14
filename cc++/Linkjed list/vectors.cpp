#include<iostream>
#include<vector>

using namespace std;


int main() {
    vector<int> *vp = new vector<int>();
    vector<int>v;

    v.push_back(10);
    v.push_back(112);


    v[1] = 100;
    


    cout<< v[1] << endl;



}