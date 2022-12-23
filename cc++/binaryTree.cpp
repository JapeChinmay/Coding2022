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

int maximum(BinaryTree<int>* root) {

      if(root == NULL) return INT_MIN;

      return max(root->data, max(maximum(root->left), maximum(root->right)));

      
}

int minimum(BinaryTree<int>* root) {
     
      if(root == NULL) return INT_MAX;

      return min(root->data , min(minimum(root->left), minimum(root->right)));
      
}

bool isBST(BinaryTree<int>* root) {
      if(root == NULL) return true;


      int leftMAx  = maximum(root->left);
     int rightMin = minimum(root->right);

     bool ans = ((root->data > leftMAx) && (root->data < rightMin) && isBST(root->left) && isBST(root->left));
     return ans;




       
        
}

class isBSTReturn {
      public:
        bool isBSt;
        int minimum;
        int maximum;

};

isBSTReturn isBST2(BinaryTree<int>* root) {
        if(root==NULL) {
              isBSTReturn op;
              op.isBSt = true;
              op.minimum = INT_MAX;
              op.maximum = INT_MIN;
              return op;


        }

        isBSTReturn leftOp = isBST2(root->left);
        isBSTReturn rightOp=  isBST2(root->right);
        int minimum = min(root->data, min(leftOp.minimum, rightOp.minimum));
        int maximum = max(root->data, max(leftOp.maximum, rightOp.maximum));

        bool ans = (root->data > leftOp.maximum) && (root->data <= rightOp.minimum)  && (leftOp.isBSt) && (rightOp.isBSt);

        isBSTReturn output1;
        output1.isBSt = ans;
        output1.maximum = maximum;
        output1.minimum = minimum;
        return output1;

};

bool isBST3(BinaryTree<int>* root, int min= INT_MIN, int max =INT_MAX)  {
        if(root == NULL) return true;
        if(root->data < min || root->data > max) return false;

        bool isLeftOK = isBST3(root->left , min , root->data -1);
        bool isRightOk  = isBST3(root->right, root->data , max);
        return isLeftOK && isRightOk;


}


int main() {



    BinaryTree<int>* root  = takeInputLevelWise();
    printTree(root);
    cout << isBST(root) << endl;

    


     
      

      delete(root);



        
}