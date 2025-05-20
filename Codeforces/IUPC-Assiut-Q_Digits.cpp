// Problem: Q. Digits
// Contest: ICPC Assiut University Community
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        int temp = 0;

        if(num == 0){
            cout << "0";
        }
        while(num > 0){
            temp = num % 10;
            num/=10;
            cout << temp << " ";
        }
        cout << endl;
    }
}