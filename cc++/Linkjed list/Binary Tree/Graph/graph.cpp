#include<iostream>
#include<queue>

using namespace std;


void print(int ** edges , int n, int sv, bool* seen) {
      
       cout << sv << endl;
       seen[sv] = true;

       for(int i = 0; i< n;i++) {
          
            if(i == sv) continue;

            if(edges[sv][i]== 1) {
                  if(seen[i])  {
                       continue;
                  }
                  print(edges, n, i, seen);

            }
       }



}



     
       
         
void DFS(int ** edges, int n) {
      
         bool * visited = new bool[n];
         for(int i=0;i<n ;i++){
            
              visited[i] = false;

         }

         for(int i=  0 ;i<n;i++) {

          if(!visited[i] ) {

         print(edges,  n, i , visited);

          }

         }
         delete [] visited;



}



int main() {

    int n;
     int e;

     cout << "Enter the number of vertices and edges" << endl;

     cin >> n >> e;


     int ** edges = new int*[n];


     for( int i =0 ;i<n;i++) {

        edges[i] = new int[n];

        for(int j = 0; j< n; j++) {
              edges[i][j] = 0;

        }



          
            
     }

     for(int i = 0; i<e; i++) {
          int f;
          int s;
          cin >> f >> s;

           edges[f][s] = 1;


     }

      bool* seen = new bool[n];
      for(int i = 0 ;i< n; i++) {
           seen[i] = false;


      }

     DFS(edges, n);





  
return 0;

}
