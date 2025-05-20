// Problem: V. PUM
// Contest: ICPC Assiut University Community
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s1;
    cin >> n;
    s1 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << s1 << " ";
            s1++;
        }
        s1++;
        cout << "PUM";
        cout << endl;
    }
}