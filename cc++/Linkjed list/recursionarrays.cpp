#include<iostream>
#include <vector>

using namespace std;


vector<int> t(int a[], int size, int index,int target) {
    vector<int> ans;

    if(size == 0) return ans;

    if(a[index] == target) {
        ans.push_back(a[index]);

    }
     
      t(a+1,size-1,index,target);
      return ans;


}




bool arrayS(int a[],int size,int index) {
      if(size ==0) return false;

      if(index == size-1) {
           return true;

      }

      return a[index] < a[index+1] && arrayS(a,size,index+1);

}


int main()

{
   int n;
   int a[100];


   cout << "enter size of an array" << endl;
   cin >> n;
   cout << "Enter the array elements" << endl;

   for(int i=0;i<n;i++)
   {
      cin >> a[i];

   }


//   cout << t(a,n,0,12);




  
      
}