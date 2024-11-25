#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[] = {-2, 6, -3, -10, 0, 2};
    int start=1,end=1;
    int n =sizeof(nums) / sizeof(nums[0]);
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(start==0) start=1;
        if (end==0) end=1;
        start*=nums[i];
        end*=nums[n-i-1];
        maxi=max(maxi,max(start,end));
    } 
    cout<<maxi;
}

