#include<iostream>

#include<unordered_map>


using namespace std;



#include<vector>



// vector<int>remove(int* a,int size) {
//        vector<int> ans;
//        unordered_map<int, bool> seen;
//        for(int i=0;i<size;i++) {
//             if(seen.count(a[i]) > 0) {

//                 continue;
                  
//             }
//             seen.insert({a[i], true});
//             ans.push_back(a[i]);

//        }

//        return ans;

// }

int main () {

    // int a[] = {1,2,4,4};

    // vector<int> ans = remove(a,4);
    // for(int i = 0;i<ans.size();i++)
    // {
    //     cout << ans[i];

    // }

    unordered_map<int,int> m;

    m.insert({12,34});
    m.insert({1,232334});
    m.insert({2,234});
    m.insert({13,34});
    m.insert({1445,54});
    m.insert({1556,5534});
    m.insert({133,364});


    unordered_map<int,int> :: iterator it = m.begin();

    while(it != m.end()) {
         cout << "KEY:" << " "<< it->first << " " << "value:" << " " << it->second << endl;
         it++;

    }

    }

