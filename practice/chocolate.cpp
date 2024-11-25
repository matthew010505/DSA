#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 5 ;
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int l=0;
    int r=m-1;
    int mini=INT_MAX;
    while(r<n){
        mini=min(mini,arr[r]-arr[l]);
        l++;
        r++;
    }
    cout<<mini;


}