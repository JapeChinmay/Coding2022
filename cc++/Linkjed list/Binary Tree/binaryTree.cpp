#include <iostream>
#include<queue>

using namespace std;

template <typename T>

class BinaryTree {

    public :

    T data;
    BinaryTree* left;
    BinaryTree* right;


    BinaryTree(T data) {
        this->data = data;
        left = NULL;
        right  = NULL;
    }


    ~BinaryTree() {
     delete left;
     delete right;

    }




       
};
  
  BinaryTree<int>* buildTreeHelper(int* in, int* pre, int inS, int inE, int PreS, int PreE) {

    if(inS > inE) {
      return NULL;

    }

    int rootdata = pre[PreS];
    int leftPreS = PreS + 1;
    int leftPreE;
    int leftInS = inS;
    int leftInsE;
    int rightPreS;
    int rightPreE = PreE;
    int rightInS;
    int rightInE = inE;

    BinaryTree<int>* root = BinaryTree<int>(rootdata);
    root->left = buildTree(in,pre,leftInS,leftInsE,leftPreS,leftPreE);
    root->right = buildTree(in, pre, rightInS,rightInE,rightPreS,rightPreE);
    return root;




  }

   BinaryTree<int>* buildTree(int *in, int* pre, int size) {
       return uildTreeHelper(in,pre,0,size-1,0,size-1);
   }

     

  

  void printTree(BinaryTree<int>* root) {

    if(root == NULL) return;
    cout << "Root Data:" << ":" << " " << root->data <<" ";
    if(root->left != NULL) {

        cout << "LeftNODE" << " " << root->left->data<< ",";

    


    }

    if(root->right){
        cout << "right Node:" <<" " << root->right->data<< " ";

    }

    cout << endl;


    printTree(root->left);
    printTree(root->right);


  }
//1 2 3 4 5 6 7

   BinaryTree<int>* takeInput() {
      int rootData;
      cout <<" enter root data" << endl;
      cin >> rootData;
      if(rootData == -1) return NULL;

      BinaryTree<int>* root = new BinaryTree<int>(rootData);
      BinaryTree<int>* leftChild = takeInput();
      BinaryTree<int>* rightChild  =  takeInput();
      root->left = leftChild;
      root->right = rightChild;
      return root;
      

   }

   BinaryTree<int>* takeInputLevelWise()

   {
      int rootData;
      cout << "Enter Root Data" << endl;
      cin >> rootData;
      if(rootData == -1) {
        return NULL;
      }
      BinaryTree<int>* root  = new BinaryTree<int>(rootData);

      queue<BinaryTree<int>*> pendingNodes;
      pendingNodes.push(root);
      while(pendingNodes.size() != 0) {



        BinaryTree<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout << "enter left child for:" << " " << front->data << endl;
        int leftCD;
        cin >> leftCD;
        if(leftCD != -1) {
            BinaryTree<int>* child =  new BinaryTree<int>(leftCD);

            front->left = child;
            pendingNodes.push(child);
        }


        cout << "enter Right child for:" << " " << front->data << endl;
        int rightCD;
        cin >> rightCD;
        if(rightCD != -1) {
            BinaryTree<int>* child =  new BinaryTree<int>(rightCD);

            front->right = child;
            pendingNodes.push(child);
        }


      }

      return root;

   }

   void inOrder(BinaryTree<int>* root) {

        if(root == NULL) return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);

   }

   void postOrder(BinaryTree<int>* root) {

        if(root  == NULL) return;
        
       
        postOrder(root->left);
        postOrder(root->right);
        cout <<  root->data << " ";
   }


   

   


int main() {


    // BinaryTree<int>* root = new BinaryTree<int>(11);
    // BinaryTree<int>* n1 = new BinaryTree<int>(111);
    // BinaryTree<int>* n2 = new BinaryTree<int>(101);




    // root->left = n1;
    // root->right = n2;

    BinaryTree<int>* root =   takeInputLevelWise();

    // inOrder(root);
    postOrder(root);




    // printTree(root);
    delete root;



}