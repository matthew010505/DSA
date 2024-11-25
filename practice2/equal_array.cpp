#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int> arr1 = { 3, 5, 2, 5, 2 };
    vector<int> arr2 = { 2, 3, 5, 5, 2 };
    unordered_map<int,int>hmap;
    bool flag=true;
    for(auto i:arr1) hmap[i]++;
    for(int i=0;i<arr2.size();i++){
        if(hmap.find(arr2[i])==hmap.end() || hmap[arr2[i]]==0){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"true";
    else cout<<"false";
}