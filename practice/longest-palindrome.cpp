#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="forgeeksskeegfor";
    string res="";
    int maxi=0;
    for(int i=0;i<s.size();i++){
        //odd length substring
        int l=i,r=i;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            if(r-l+1 >maxi){
                maxi=r-l+1;
                res=s.substr(l,r-l+1);
            }
            l--;
            r++;
        }
        //even length substring
        l=i,r=i+1;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            if(r-l+1 >maxi){
                maxi=r-l+1;
                res=s.substr(l,r-l+1);
            }
            l--;
            r++;
        }
            
    }
    cout<<res;
}