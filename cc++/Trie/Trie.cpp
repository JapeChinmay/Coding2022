#include<iostream>
using namespace std;


class TrieNode {

      public:

       char data;

       TrieNode ** children;
       bool isTerminal;


       TrieNode(char data) {
            this->data = data;
            children = new TrieNode*[26];

            for(int i=0;i<26;i++) {
                   
                     children[i]= NULL;

            }
            isTerminal = false;

             

       }


};

class Trie {
        TrieNode *root;

        public :

        Trie() {
             
              root = new TrieNode('\0');

        }

        void insertWord(TrieNode* root,  string word) {

            //base case
            if(word.size() == 0) {
                    root->isTerminal = true;
                    return;

            }

            int indexOfChild = word[0] - 'a';

            TrieNode* child;

            if(root->children[indexOfChild] != NULL) {

                  child = root->children[indexOfChild];
                     

            }else {
                    
                    child  = new TrieNode(word[0]);
                    root->children[indexOfChild] = child;



            }

            insertWord( word.substr(1));

              
               
        }

        void insertWord(string word) {
             
              insertWord(root ,word);

        }

        bool searchInTrie(TrieNode* root , string word) {
              
               // base case

               if(word.size() == 0) {
                     
                    return root->isTerminal;
                    

               }

               int index = word[0] = 'a';

               TrieNode* child;

               if(root->children[index] != NULL) {

                  child  = root->children[index];
                  insertWord(child ,word.substr(1));




                   
                      
               }else {
                   
                    return false;


               }
        }

        bool searchInTrie(string word) {
             
              return searchInTrie(root , word);

        }
};

int main() {

       

        
}