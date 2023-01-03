#include<iostream>

#include<vector>

using  namespace std;


void solve( int n) {
     
      vector<bool>ans(n+1, true);

      ans[0] = false;
      ans[1] = false;

      for(int i = 2; i*i <=n; i++) {

        if(ans[i] == true);
         
          for(int j = i*i; j<=n; j+=i) {
             
                  ans[j] = false;

          }
      }

int count = 0;

  for(int i =0;i<n;i++) {
    

      
       if(ans[i] == true) {
           cout << ans[i] << endl;
           count++;

           cout << count << endl;


       }
  }


}

int main () {
     
      
      int n;
      cin >> n;

    solve(n);
      




}