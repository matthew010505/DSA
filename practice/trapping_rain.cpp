#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr= {3, 0, 1, 0, 4, 0, 2};
    int n=arr.size();
    int l=0,r=n-1;
    int res=0;
    int lmax=INT_MIN,rmax=INT_MIN;
    while(l<r){
            lmax=max(arr[l],lmax);
            rmax=max(arr[r],rmax);
            if(lmax<rmax){
                res+=(lmax-arr[l]);
                l++;
            }else{
                res+=(rmax-arr[r]);
                r--;
            }
        }
    cout<<res;
        
}
    





