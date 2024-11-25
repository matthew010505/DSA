#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={4,5,2,25};
    stack<int>st;
    vector<int>ans;
    for(int i=nums.size()-1;i>=0;i--){
        st.push(nums[i]);
    }
    for(int i=nums.size()-1;i>=0;i--){
        while(!st.empty()&&st.top()<=nums[i]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(st.top());
        }
            st.push(nums[i]);
    }
        reverse(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<' ';
    }
        
}