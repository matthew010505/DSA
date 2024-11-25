#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 4, 5, 6, 7, 0, 1, 2 };
    int key = 3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid, l=0,r=n-1;
    bool flag=false;
    while(l<=r){
            mid=(l+r)/2;
            if(arr[mid]==key) {
                flag=true;
                break;
            }
            else if(arr[mid]<arr[n-1]){
                if(arr[mid]<key && key<=arr[n-1]) l++;
                else r--;
            }
            else{
                if(arr[0]<=key  && key<arr[mid]) r--;
                else l++;
            }
    }
    if(flag) cout<<mid;
    else cout<<-1;

        
}