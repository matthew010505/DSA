#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,vector<int>> hmap;
    unordered_set<int> visit;
    bool dfs(int crs){
            if(visit.find(crs)!=visit.end()) return false;
            if(hmap[crs].empty()) return true;
            visit.insert(crs);
            for(int nxt:hmap[crs]){
                if(!dfs(nxt)) return false;
            }
            visit.erase(crs);
            hmap[crs]=vector<int>();
            return true;
        }
       
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       for(int i=0;i<numCourses;i++){
            hmap[i]=vector<int>();
       }
       for(auto i:prerequisites){
            int crs=i[0];
            int pre=i[1];
            hmap[crs].push_back(pre);
       }
       for(int i=0;i<numCourses;i++){
        if(!dfs(i)) return false;
       }
       return true;

    }
};