#include<iostream>
using namespace std;


class BST {
    public:
     
        int data;
        int left;
        int right;

        BST(int data) {
             
              this->data = data;
              this->left = NULL;

              this->right = NULL;

        }
};

int maximum(BST* root) {
      
}

int minimum(BST * root) {
     
      if(root == NULL) return INT_MAX;

      return min(root->data , min(minimum(root->left), minimum(root->right)));
      
}

bool isBST(BST* root) {
     
     if(root == NULL) {
          return true;

     }

     int leftMAx  = maximum(root->left);
     int rightMin = minimum(root->right);

     bool ans = (root->data > leftMAx  ) && (root->right <= rightMin) && (isBST(root->right)) && isBST(root->left);
     return ans;

}


int main () {

     
      

}