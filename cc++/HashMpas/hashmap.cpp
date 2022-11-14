#include<iostream>
#include <unordered_map>
#include <string>
#include<vector>


using namespace std;

//ordered maps -> BST-> Nlogn;
// unorderd-maps - O(1);


vector<int> removeduplicate(int* a , int s) {
        vector<int>ans;
        unordered_map<int,bool> seen;
        for(int i=0;i<s;i++){
             if(seen.count(a[i]> 0)) {
                    continue;
             }else{

                seen[a[i]] = true;
                ans.push_back(a[i]);

             }
        }

        return ans;
        

}


int main () {

    int a[] = {1,1,2,3,4,4,3,3,4,5,6,7,8,9,6,7};
    
    vector<int> op = removeduplicate(a, 16);
    for(int i=0;i<op.size();i++) {
         cout << op[i] << endl;

    }


    // unordered_map<string, int>ourmap;
    // pair<string ,int> p("abc",1);

    // ourmap.insert(p);

    // ourmap["def"] = 2;


    // //find ,access
    // cout << ourmap["abc"] << endl;

    // cout << ourmap.at("def") << endl;

    

    // //at func

    // cout << ourmap.at("abc") << endl;

    // // chekck

    // if(ourmap.count("abc")> 0) {
           
    //        cout << " invalid" << endl;

    // }else {
    //      return;

    // }





  





      
};
