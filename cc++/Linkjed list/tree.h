#include<vector>
#include<queue>
using namespace std;

template<typename T>


class TreeNode {

    public :

    T data;
    vector<TreeNode<T>*> children;

     
     TreeNode(T data) {
        this->data = data;

     }

   //   TreeNode<int>* takeInputLevelWise() {
   //       // taking root data

   //       int rootData;
   //       cout << "enter root data" << endl;
   //       cin >> rootData;

   //       // creating rootNOde
   //       TreeNode<int>* root = new TreeNode<int> (rootData);
   //       queue<TreeNode<int>*>pendingNodes;
   //       pendingNodes.push(root);
   //       while(pendingNodes.size() != 0) {

   //          TreeNode<int>*  front = pendingNodes.front()

   //       }
     };







