// Problem: S. Sum of Consecutive Odd Numbers
// Contest: ICPC Assiut University Community
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, X, Y, sum;
    //int maxVal = static_cast<int>(pow(10, 4));

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> X >> Y;
        int low = min(X, Y);
        int high = max(X, Y);
        sum = 0;

        for(int j = low+1; j < high; j++){
            if(j%2 != 0){
                sum+=j;
            }
        }
        cout << sum << endl;
    }

    return 0;
}