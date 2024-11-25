#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 100;
    vector<int> res(1000, 0);
    res[0] = 1;
    int size = 1;
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = 0; j < size; j++) {
            int prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }
    for (int i = size - 1; i >= 0; i--)
        cout << res[i];
    cout << endl;
    return 0;
}
