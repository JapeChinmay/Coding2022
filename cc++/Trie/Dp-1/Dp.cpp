#include<iostream>

#include<vector>

using namespace std;


  // sc-> creatign a vector to maintain the ans

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

int minSteps(int n)  {
       if(n <=1) {
           return 0;

       }

       int x = minSteps(n-1);
       int y=  INT_MAX;
       int z = INT_MAX;


       if(n%2 == 0) {
             y=minSteps(n/2);
       }

       if(n%3==0) {
             z = minSteps(n/3);

       }

       int ans =  min(x, min(y,z)) + 1;
       return ans;


}

int minStepsDP(int n , vector<int>&dp){
       if(n<=1) {
         return 0;

       }

       if(dp[n] != -1) {return dp[n];}

       ////


       int x= minStepsDP(n-1, dp);
       int y= INT_MAX;
       int z = INT_MAX;


       if(n%2 == 0) {
            y =  minStepsDP(n/2, dp);
            

       }

       if(n%3 == 0 ) {
           z = minStepsDP(n/3, dp);
       

       }

       int ans = min(x,min(y,z)) + 1;
       
       dp[n] = ans;
       return ans;







}

int main() {
       
       int n;
       cin >> n;
       vector<int> dp(n+1, -1);
      // cout << fibDp(n, dp);

      cout << minStepsDP(n, dp);




//    // tabulation-> taking less space to perform 
//        int prev = 1;
//        int prev2 = 0;
//        for(int i=2;i<=n; i++) {
//            int curr  = prev + prev2;
//            prev2 = prev;
//            prev = curr;

//        }

//        cout << prev ;
//        return 0;




}