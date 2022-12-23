#include<iostream>

#include<vector>

using namespace std;

int main() {
     
       int n;
       cin >> n;
       int target;
       cout << "Enter the target" << endl;
       cin >> target;


       vector<int>a(n);

       cout << "Enter the vector ele " << endl;
       for(int i=0;i<n;i++) {
         cin >> a[i];
       }

       int s=0;
       int e = n-1;

       while(s<e) {
           
            if(a[s] + a[e] > target) e--;
            if(a[s] + a[e] < target) s++;
            else {
                  
                   cout << a[s] << " " << a[e] << endl;
                   return 0;

            }
       }

       cout << "-1" << " " << "-1" << endl;


}