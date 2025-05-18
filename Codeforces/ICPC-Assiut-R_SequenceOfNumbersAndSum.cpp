// Problem: R. Sequence of Numbers and Sum
// Contest: ICPC Assiut University Community
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2, sum;

    while(cin >> num1 >> num2){

        if(num1 <= 0 || num2 <=0) {
            break;
        }

        int low = min(num1, num2);
        int high = max(num1, num2);
        sum = 0;

        for(int i = low; i<= high; i++){
            cout << i << " ";
            sum+=i;
        }
        cout << " sum =" << sum << endl;
    }

    return 0;
}