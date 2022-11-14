#include<iostream>
using namespace std;


// void print(int n) {

//     if(n==0) return;
//     cout << "chinmay" << endl;
//     print(n-1);

// }

// // sum of n nums
// int sqaure(int n) {
//     if(n==0) return 0;

//     int s =  n*n;
//       return sqaure(n-1) + s;



   

    


    
// }

// void name(int n) {
//     if(n==0) return;
//     if(n%2) {
//         cout << "jape" << " ";
//     }

//     cout << "chinmay " << " ";

//     cout << endl;

//     return  name(n-1);


// }

// void printN(int n) {

//     if(n==0) return;

//      printN(n-1);
//     if(n%2) cout <<  "** :" << n << endl;
//     else {
//     cout << n << endl;
//     }

//     //   print(n);

//     return;





// }

// int p(int n) {
//     if(n==0) return 1;
//     if(n == 1) return 1;

//     int s = n * p(n-1);
//     return s;

// }

// // void nameNNumber(int n) {

// //     if(n == 0) return;

// //     cout << "chinmay" << " " << n*n;
// //      return nameNNumber(n-1);

// // }


  






int digits(int n) {
    if(n==0) return 0;

    int rem = n % 10;
    int N = n /10;

    int s = rem + digits(N);
    return s;

}


int coutnZeros(int n,int c) {

    if(n==0) return c;

    int rem = n %10;
    if(rem == 0) {
        return coutnZeros(n/10,c+1);

    }

    return coutnZeros(n/10,c);


    

     


}







int main() {

    int n;
    cout << "enter n";
    cin >> n;
//     cout << p(n);
   cout << coutnZeros(n,0);

}

    


// //    nameNNumber(n);

    




//     // int n;

//     // cout  << "Enter n" << endl;

//     // cin >> n;
//     // print(n);





//     /

// }