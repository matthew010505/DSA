#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int sum=0;
    int maxi=arr[0];
    for(auto i:arr){
        if(sum<0) sum=0;
        sum+=i;
        maxi=max(maxi,sum);
    }
    cout<<maxi;
}

