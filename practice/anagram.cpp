#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "geeks";
    string s2 = "kseeg";
    bool flag = true;
    unordered_map<char, int> hmap;
    for (auto i : s1)
        hmap[i]++;
    for (auto i : s2)
        hmap[i]--;
    for (auto i : hmap)
    {
        if (i.second != 0)
            flag = false;
        break;
    }
    if (flag)
        cout << "true";
    else
        cout << "false";
}
