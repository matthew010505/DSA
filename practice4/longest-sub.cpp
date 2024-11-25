#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>hmap;
       int l=0,r=0;
       int ans=0;
       while(r<s.size()){
            if(hmap.find(s[r])==hmap.end()) hmap[s[r]]=1;
            else hmap[s[r]]++;
            if(hmap[s[r]]>1){
                while(hmap[s[r]]>1){
                    hmap[s[l]]--;
                    l++;
                }
            }
            ans=max(ans,r-l+1);
            r++;

       }
       return ans;
    }
};