#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string>arr={"geeksforgeeks", "geeks", "geek", "geezer"};
    sort(arr.begin(),arr.end());
    int a=arr.size();
    string one=arr[0];
    string last=arr[a-1];
    string res="";
    for(int i=0;i<one.size();i++){
            if(one[i]==last[i]){res+=one[i];}
            else break;
    }
    cout<<res;
        
}