#include<iostream>

using namespace std;


int sum(int n) {

    if( n==0) return 0;
    if(n == 1) return 1;


    


    

    int sum1 =  n + sum(n-1);
    return sum1;



}

int main() {


    int n = 10;
    int i = 1;

    cout << sum(n);

}