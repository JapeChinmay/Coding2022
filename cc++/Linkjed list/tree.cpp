#include<iostream>
#include<queue>
// #include<vector>
#include "tree.h"


using namespace std;


           int sumOfNodes(TreeNode<int>* root) {


               if(root == NULL) return 0;
               int sum = root->data;
               for(int i=0;i<root->children.size();i++) {
                    sum += sumOfNodes(root->children[i]);

               }

               return sum;
           }




              int Nodes(TreeNode<int>* root) {

                     if(root == NULL) return 0;
                     int ans = 1;

                     for(int i=0;i<root->children.size();i++) {
                           ans += Nodes(root->children[i]);

                     }

                     return ans;

              }


              void printTree(TreeNode<int>* root) {
                   if(root == NULL) return;

                   cout << "Root data" << " " << root->data << endl;
                   for(int i=0;i<root->children.size();i++) {


                    //  if(root->data == 0) cout << "NULL"<< " ";


                       

                         cout << "Root" << " " << i << " :" << " " <<  root->children[i]->data << ",";




                   }

                   cout << endl;

                   for(int i=0;i<root->children.size();i++) {
                         printTree(root->children[i]);

                   }
              }


              TreeNode<int>* takeInput() {

                   int rootData;
                   cout << "enter root"<< endl;
                   cin >> rootData;
                   TreeNode<int>* root = new TreeNode<int>(rootData);
                   


                   int n;
                   cout << "Enter number of children of " << " " << rootData << endl;
                   cin >> n;

                   for(int i=0;i<n;i++) {
                      TreeNode<int>* child = takeInput();
                      root->children.push_back(child);


                   }

                   return root;

              }


              TreeNode<int>* takeInputLevelWise() {

                  int rootData;
                  cout << "enter root data"<<endl;
                  cin >> rootData;
                  TreeNode<int>* root = new TreeNode<int>(rootData);

                  queue<TreeNode<int>*> pendingNodes;
                  pendingNodes.push(root);

                  while(pendingNodes.size()  != 0) {

                      TreeNode<int>* front  = pendingNodes.front();
                      pendingNodes.pop();


                      cout << "enter num of child for :" << " " << front->data << endl;
                      int num;
                      cin >> num;


                      for(int i=0;i<num;i++) {
                         int numD;
                         cout << "Enter" <<" " << i <<"th" <<" " <<" child of" << front->data <<endl;
                         cin >> numD;
                         TreeNode<int>*numChild = new TreeNode<int>(numD);
                         front->children.push_back(numChild);
                         pendingNodes.push(numChild);

                      }

                     

                  }

                  return root;


              }

    
           void printLevelWise(TreeNode<int>* root) {

                  queue<TreeNode<int>*> pendingNodes;
                  pendingNodes.push(root);

                  while(pendingNodes.size() != 0) {

                    TreeNode<int>* front = pendingNodes.front();
                    pendingNodes.pop();

                    cout<< " Data of  front Node:" << " " << front->data << " " << "This front node has :" << " " << front->children.size() << " " << "children" << endl;

                    for(int i =0 ;i<front->children.size();i++) {
                         pendingNodes.push(front->children[i]);
                         cout << "Child data for " << " " << i <<"th child" << " " << front->children[i]->data << endl;

                    }


                  }
           }


           void deleteTree(TreeNode<int>* root) {
               for(int i=0;i<root->children.size();i++) {
                    deleteTree(root->children[i]);

               }

               delete root;
               
           }

           



int main() {

    // 
    

    TreeNode<int>* root  = takeInputLevelWise();
    


    printLevelWise(root);
    cout << " No of Nodes are:" << " " <<  Nodes(root) << " " << "sum of nodes is" << " " << sumOfNodes(root);


    

}


