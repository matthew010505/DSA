#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      int left=0,right=m-1;
      int top=0, bottom=n-1;
      vector<int> vi;
      while(left<=right && top<=bottom){

        for(int i=left;i<=right;i++){
            vi.push_back(matrix[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++){
            vi.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            vi.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            vi.push_back(matrix[i][left]);
        }
        left++;
        }

      }
      return vi;
    }
};