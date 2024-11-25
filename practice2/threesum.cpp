    #include<bits\stdc++.h>
    using namespace std;
    int main(){
        vector<int>nums={-1,0,1,2,-1,-4};
        vector<vector<int>> res;
        int n=nums.size();
        int l,r,sume;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            l=i+1;
            r=n-1;
            while(l<r){
                sume=nums[i]+nums[l]+nums[r];
                if(sume>0) r--;
                else if(sume<0) l++;
                else{
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] && l<r) l++;

                }
            }
        }
        for(auto i:res){
            cout<<'[';
            for(auto j:i) cout<<j<< ' ';
            cout<<']';
        }
        
    }