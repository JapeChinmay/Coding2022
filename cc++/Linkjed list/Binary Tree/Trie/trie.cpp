#include<iostream>
using namespace std;



class TrieNode {

    public:
      char data;

      TrieNode** children;
      bool isTerminal;


      TrieNode(char  data) {
           this->data = data;
           children = new TrieNode*[26];
           for(int i=0;i <26;i++) {
                
                children[i]=  NULL;

           }
           isTerminal = false;


      }


};

class Trie {

    public:
       
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');

    }

    void insertWord(TrieNode* root , string word) {


        if(word.size() == 0 ) {
              root->isTerminal = true;
              return;

        }

        //check alphabet;

        TrieNode* child;

        int index = word[0] - 'a';
        if(root->children[index] != NULL) {
            child = root->children[index];

              
        }else{
              
              child = new TrieNode(word[0]);
              root->children[index] = child;

        }

        // call

        insertWord(child, word.substr(1));

















        

          
            
    }

    

   void insert(string word) 
   {
        insertWord(root, word);
   }

    


};



int main() {
      
       
}