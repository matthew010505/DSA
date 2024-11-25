#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> intervals={{1,3},{2,4},{6,8},{9,10}};
        sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    int i=1;
    int start=intervals[0][0];
    int end=intervals[0][1];
    while (i<intervals.size()){
        if(intervals[i][0]<=end){
            end=max(end,intervals[i][1]);
        }
        else{ 
            res.push_back({start,end});
            start=intervals[i][0];
            end=intervals[i][1];
            }
        i++;
    }
    res.push_back({start,end});

    for(auto i:res){
        cout<<'[';
        for(auto j:i){
            cout<<j<<',';
        }
        cout<<']';
    }

}