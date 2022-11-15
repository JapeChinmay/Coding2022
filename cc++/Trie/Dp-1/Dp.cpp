#include<iostream>

#include<vector>

using namespace std;



int fibDp(int n, vector<int>&dp){
       if(n <= 1) {
           return n;

       }

       if(dp[n] != -1) return dp[n];
       int a = fibDp(n-1,dp);
       int b = fibDp(n-2, dp);
       dp[n] = a+ b;
       return dp[n];

    
}

int main() {
       
       int n;
       cin >> n;
       vector<int> dp(n+1, -1);
      // cout << fibDp(n, dp);


       int prev = 1;
       int prev2 = 0;
       for(int i=2;i<=n; i++) {
           int curr  = prev + prev2;
           prev2 = prev;
           prev = curr;

       }

       cout << prev ;
       return 0;




}