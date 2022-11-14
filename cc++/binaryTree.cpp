#include<iostream>
#include <queue>

using namespace std;

template<typename T>
class BinaryTree {
public:

        T data;
        BinaryTree* left;
        BinaryTree* right;

        BinaryTree(T data) {
              
                 this->data=  data;
                 left = NULL;
                 right  = NULL;


        }

        ~BinaryTree() {
               delete left;
               delete right;

        }

};

void printTree(BinaryTree<int>* root) {

      if(root == NULL) return;
      
        cout << root->data << endl;

        if(root->left) {
       cout << "L" << " " << root->left->data << endl;

        }else {
              cout << " NO left child for " << " " << root->data << endl;

        }
        if(root->right) {
             cout <<" R:" << " " << root->right->data << endl;
        }else {
              cout << "No right child for "<< " " << root->data << endl;

        }


       

     
        printTree(root->left);
        printTree(root->right);


}

BinaryTree<int>* takeInput() {
       int rootdata;
       cout << "Enter the root data" << endl;
       cin >> rootdata;
       if(rootdata == -1) {
               return NULL;

       }
       BinaryTree<int>* root  = new BinaryTree<int>(rootdata);
       BinaryTree<int>* leftChild = takeInput();
       BinaryTree<int>* rightChild = takeInput();


       root->left =leftChild;
       root->right = rightChild;
       return root;

       
}

BinaryTree<int>* takeInputLevelWise() {
        int rootData;
        cout << "Enter Root data" << endl;
        cin >> rootData;
        if(rootData == -1) {
             return NULL;
        }

        BinaryTree<int>* root =  new BinaryTree<int>( rootData);

        queue<BinaryTree<int>*> pendingNodes;
        pendingNodes.push(root);
        while(pendingNodes.size() != 0) {
              BinaryTree<int>* front =  pendingNodes.front();
              pendingNodes.pop();


              cout << "Enter left Child for " << front->data << endl;
              int leftChild ;
              cin >> leftChild;
              if(leftChild  != -1) {

                  BinaryTree<int> * child = new BinaryTree<int>(leftChild);
                  front->left = child;
                  pendingNodes.push(child);

                    
              }

              cout << "Enter right Child for " << front->data << endl;
              int rightChild ;
              cin >> rightChild;
              if(rightChild  != -1) {

                  BinaryTree<int> * child = new BinaryTree<int>(rightChild);
                  front->right = child;
                  pendingNodes.push(child);
                  
                    
              }

             

        }

        return root;



}

int main() {



    BinaryTree<int>* root  = takeInputLevelWise();
    printTree(root);
    


     
      

      delete(root);



        
}