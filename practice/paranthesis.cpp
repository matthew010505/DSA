#include <bits/stdc++.h>
using namespace std;
int main(){
     string s ="())((())";
     stack<char>st;
     for(auto i:s){
        if(i=='(') st.push(i);
        else{
            if(st.empty()){
                cout<<"false";
                return 0;
            }
            st.pop();
        }
     }
     if(st.empty()) cout<<"true";
     else cout<<"false";

}