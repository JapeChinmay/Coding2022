#include<iostream>
using namespace std;


class TrieNode {

    public :
      int data;
      bool terminal;
      TrieNode* children[26];


      TrieNode(char data) {
          
             this->data = data;
             for(int i = 0 ;i<26;i++) {
                  
                    children[i] = NULL;

             }

             terminal = false;


      }

};

class Trie {

      TrieNode* root;
      public : 

      
        Trie() {
             
              root = new TrieNode('\0');

        }


     void insertWord(string word, TrieNode*root) {

        if(word.length() == 0) {
              root->terminal = true;

              return;


        }

        int index = word[0] = 'A';
        TrieNode* child;

        if(root->children[index] != NULL) {
              
                  child = root->children[index];

        }else  {
             
                child = new TrieNode(word[0]);
                root->children[index] = child;


        }

        insertWord( word.substr(1), child);


     }


     ////////////////////////////////////
    
              
               
        



     
    
    void insertWord(string word) {

        insertWord(word, root);


          
    }

    
};


int main () {
      
}