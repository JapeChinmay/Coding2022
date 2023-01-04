#include<iostream>

#include <vector>
#include<queue>
using namespace std;

template<typename T>

class TreeNode {

    public:
      
       T data;
       vector<TreeNode<T>*>children;

       TreeNode(T data) {
          
          this->data = data;

       }



       


};

void printTree(TreeNode<int>* root) { 

    if(root == NULL) return;

     
       cout << root->data << ":";

        for(int i=0;i<root->children.size();i++) {

            if(root->children[i]->data) {
               cout << root->children[i]->data << ",";
            }
            else {
                   cout << "No child";


            }


       }

       cout << endl;





       for(int i=0;i<root->children.size();i++) {
               printTree(root->children[i]);

       }
};


TreeNode<int>*takeInput() {
     
       int rootD;
       cout << "Enter the root data" << endl;
       cin >> rootD;
       TreeNode<int>* root  = new TreeNode<int>(rootD);

       int n;

       cout << "enter number of child for " << rootD << endl;
       for(int i=0; i<n;i++) { 
         
             TreeNode<int>* child=  takeInput();
             root->children.push_back(child);



       }


       return root;


};

TreeNode<int>* takeInputLevelWise() {

    int rootData;
    cout << "ENter the data for root"<< endl;
    cin >> rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);



    while(!pendingNodes.empty()) { 
         
            TreeNode<int>* front = pendingNodes.front();
            pendingNodes.pop();

            cout << "Enter No of children for" << front->data << endl;
            int n;
            cin >> n;
            for(int i=0;i<n;i++) {
                  int childD;

                 
                  cout << "Enter the child for " << i <<"th" << " " << "child" << endl;

                  cin >> childD;
                  TreeNode<int>* child = new TreeNode<int>(childD);
                  front->children.push_back(child);
                  pendingNodes.push(child);


            }

           



    }

    return root;
    



     
        
};



int main () {

    // TreeNode<int>* root = new TreeNode<int>(23);
    //  TreeNode<int>* node1 =  new TreeNode<int>(1211);
    //  TreeNode<int>* node2 =  new TreeNode<int>(1211);
    //   root->children.push_back(node1);
    //   root->children.push_back(node2);


     
     TreeNode<int>* root =   takeInputLevelWise();



   printTree(root);



    



     
      
}