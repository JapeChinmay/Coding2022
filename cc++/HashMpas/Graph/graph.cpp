#include<iostream>

#include<queue>
using namespace std;


void print(int**edges, int n, int sv, bool* visited) {
     
       cout << sv << endl;
       visited[sv] = true;

       for(int i =0 ;i<n;i++) {
         
           if(i == sv) continue;
           if(edges[sv][i] == 1) {
             
                    if(visited[i] == true) {
                            continue;
                    }

                print(edges, n,i ,visited);

           }
       }
}






void printBFS(int** edges,  int n, int sv) {

    queue<int>pendingVertices;
    bool*visited = new bool[n];
    for(int i = 0; i<n;i++) { 
         
          visited[i] = false;

    }

    pendingVertices.push(sv);
    visited[sv] = true;

    while(!pendingVertices.empty())
     
     {

           int front = pendingVertices.front();
           pendingVertices.pop();
           cout << front << endl;
           for(int i=0;i<n;i++) { 
             
              if(i == front) continue;

              if(edges[front][i] == 1 && !visited[i]) {
                 
                     pendingVertices.push(i);
                     visited[i] = true;

              } 
           }


     }
     
       
}

void DFS(int**edges, int n) {
     
       bool * visited = new bool[n];
       for(int i=0;i<n;i++) {
         
          visited[i] = false;

       }

       for(int i=0;i<n;i++) {
          
           if(!visited[i]) {
             
                 print(edges, n, i, visited);

           }
       }
}

int main() {
     
      
    int e;
    int n;

    cout << "Enter edges and vertices" << endl;

    cin >> e >> n;

    int ** edges = new  int*[n];
    for(int i=0;i<n ;i++) {
         
           edges[i] = new int[n];
           for(int j=0;j<n;j++) {
             
                edges[i][j] = 0;

           }
    }

    for(int i=0;i<e;i++) {
         
           int f,s;
           cout << "Enter  " << " " << i << "th" << " pair"<< endl;

           cin >> f >> s;

           edges[f][s] = 1;
           edges[s][f] = 1;

    } 

    bool *visited = new bool[n];
    for(int i=0;i<n;i++) { 
         
           visited[i] = false;

    } 


    //print(edges ,n, 0, visited);

    //printBFS(edges, n ,0);

    DFS(edges, n);



    // delete [] visited;
    // for(int i =0 ;i<n;i++) { 

    //     delete [] edges[i];

         
    // }

    // delete[]edges;


}