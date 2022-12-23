#include<iostream>
#include<vector>


using namespace std;




int main() {
     
     int n;
     int k;
     cout << "enter the size of n" << endl;
     cin >> n;
     cout << "Enter the k" << endl;
     cin >> k;


     
      vector<int>ans(n);
      
      
      cout << "Enter the nums of vector" << endl;
      for(int i=0;i<n;i++) {
         
          cin >> ans[i];
      }


       int currSum = 0;
        int maxi = INT_MIN;
       
      for(int i=0; i<ans.size();i++) {
      



           if(i < k) currSum += ans[i];
           if(i == k-1) maxi = max(maxi, currSum);
           else if(i >=k) {
             
                 currSum += ans[i];
                 currSum -= ans[i-k];
                 maxi =  max(maxi, currSum);
           }

           


         
               
      }

      cout << maxi << endl;
      



      


}