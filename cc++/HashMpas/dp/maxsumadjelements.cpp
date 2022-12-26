#include <bits/stdc++.h> 

int f(vector<int>&nums, int n , vector<int>&dp) {
      if(n == 0) return nums[0];
    if( n < 0 )  return 0;
    
    if(dp[n] != -1) return dp[n];
    
    
    int pick  = nums[n] + f(nums, n-2, dp);
    int notPick  = f(nums, n-1 ,dp) + 0;
    
    return dp[n] = max(pick, notPick);
    
   }

int f1(vector<int>&nums, int n) {
    
    vector<int>dp(n,-1);
    
    dp[0] = nums[0];
    
    for(int i=1;i <n ;i++) { 
      
        int pick = nums[i] + dp[i-2];
        int notPick = 0 + dp[i-1];
        dp[i]=max(pick , notPick);
        
        
    }
    
    return dp[n-1];
    
    
     
         
}

int space(vector<int>&nums) {
      
       int n = nums.size();
       int prev1=  nums[0];
       int prev2 = 0;
    
    for(int i=1; i<n;i++) {
           int pick  = nums[i] + prev2;
          int notPick =  prev1 + 0;
        
          int ans  =max(pick , notPick);
          prev2 = prev1;
        prev1 = ans;
        
    }
    
    return prev1;
    
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    
    int n = nums.size();
//     vector<int>dp(n, -1);
    
//     return f(nums, n-1, dp);
    
    return space(nums);
    
    
}