#include<iostream>
using namespace std;



class Edge {

    public:
      int source;
      int dest;
      int weight;

};

int findParent(int  v , int * parent) {
      
        if(parent[v] = v) {
              return v;

        }

        return findParent(parent[v], parent);


}

bool compare(Edge e1, Edge e2) {
      
        return e1.weight < e2.weight;

}

void krushkals(Edge * input, int n ,  int E) {
      
       // sort the array of edges class obj.

       sort(input, input+E, compare);

       Edge* output= new Edge[n-1];

       int * parent  = new int [n];


       for(int i = 0 ; i< n; i++) {
           parent[i] = i;

       }



       int c = 0;
       int i  = 0;

       while(c !=  n-1) {

          Edge curr = input[i];

          // check the curr edge for MST

          int sourceParent = findParent(curr.source, parent);
          int destParent=  findParent(curr.dest, parent);


          if(sourceParent !=  destParent) {
                 
                    output[c] = curr;
                    c++;
                    parent[sourceParent] = destParent;


          }
          i++;




          
            
       }

       for(int i = 0 ;i< n-1; i++) {

        if(output->source < output->dest) {
          
             cout <<  output[i].source << " " << output[i].dest << " " << output[i].weight << endl;

        }
        else {

            cout <<  output[i].dest<< " " << output[i].source << " " << output[i].weight << endl;
              

        }

       }



}



int main() {

    int  n, e ;
    cin >> n >> e;
    Edge * input = new Edge[e];


    for(int i = 0 ;i < e; i++) {
             
                 int s, d, w;
                 cin >> s >> d >> w;
                 input[i]. source = s;
                 input[i].dest = d;
                 input[i].weight =  w;


    }

    krushkals(input, n, e );




      
}