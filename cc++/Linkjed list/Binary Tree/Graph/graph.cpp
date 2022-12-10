#include<iostream>

#include<queue>



using namespace std;

void print(int ** edges, int n, int sv,  bool* visited) {


     cout << sv << endl;
     visited[sv]=  true;

     for(int i =  0; i < n ;i++) {
             if( i == sv) {
                   continue;
             }

             if(edges[sv][i] == 1) {
                
                  if(visited[i]) {
                      continue;
                  }
                    print(edges , n , i, visited);

             }
     }
     
       
        
}

void printBFS(int **edges, int n , int  sv) {
       
       queue<int>pending;
       bool * visited = new bool[n];
       for(int i = 0; i< n ;i++) {
            
               visited[i] = false;

       }

       pending.push(sv);
       visited[sv] = true;

       while(!pending.empty()) {

       int front =  pending.front();

       pending.pop();

       cout << front <<  endl;

       for(int i= 0; i< n; i++) {

          if(i == front) {continue;}

            if(edges[front][i]  ==  1  && !visited[i]) {
                  pending.push(i);
                  visited[i] = true;

            }
             
              
       }
     

       }



}


int main() {

     int n;
     int e;

     cin >> n >> e ;

     int ** edges = new  int*[n];
     // creating one layer of 2d array which is of size of vertices


     for(int i = 0;i <n ;i++) {
            
              edges[i] = new int[n];

              for(int j=  0; j < n ;j++) {
                 
                   edges[i][j] = 0;

              }
     }


     for(int i = 0 ;i < e;i++) {
             int f, s ;
             cin >> f >> s;


             edges[f][s] =1;
             edges[s][f] = 1;

     }

     bool * visited = new bool[n];

     for(int i = 0;i < n ;i++) {
             visited[i] = false;


     }



     //print(edges , n,  0, visited);

     printBFS(edges, n ,0);





       
        
}