#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[] = { 1, 2, 4, 6, 10, 12, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    if(x>arr[n-1]){
        cout<<arr[n-1];
    }
    else{
        if(arr[0]>x) cout<<-1;
        else{
            for(int i=1;i<n;i++){
                if(x<arr[i]){
                    cout<<arr[i-1];
                    break;
                }
            }
        }
    }
    return 0;
    
}