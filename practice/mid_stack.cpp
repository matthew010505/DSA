#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<char> s;
    s.push('1');
    s.push('2');
    s.push('3');
    s.push('4');
    s.push('5');   
    vector<char> vec;
    while (!s.empty()) {
        vec.push_back(s.top());
        s.pop();
    }
    int len = vec.size();
    if (len % 2 == 0) {
        int mid = (len / 2);
        for (int i = 0; i < len; i++) {
            if (i == mid) continue;
            s.push(vec[i]);
        }
    } else {
        int mid = ceil(len / 2.0); 
        for (int i = 0; i < len; i++) {
            if (i == mid) continue;
            s.push(vec[i]);
        }
    }
    while (!s.empty()) {
        char elem = s.top();
        s.pop();
        cout << elem << " ";
    }
    return 0;
}
