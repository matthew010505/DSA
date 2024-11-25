#include <bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={1, 5, 4, 3};
        int l=0;
        int r=(sizeof(arr)/sizeof(arr[0]))-1;
        int val,area=0;
        while(l<r){
            val=(r-l)*(min(arr[l],arr[r]));
            area=max(area,val);
            if(arr[l]<arr[r]) l++;
            else r--;
        }
        cout<<area;
}