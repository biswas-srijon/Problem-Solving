// Problem: U. SomeSums
// Contest: ICPC Assiut University Community
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B, sum = 0, temp;

    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++){
        int j = i;
        temp = 0;
        while(j > 0){
            temp += j % 10;
            j /= 10;
        }
        //cout << temp << " " << endl;
        if(temp >= A && temp <= B){
            sum += i;
            //cout << "sum: " << sum<< endl;
        }
    }

    cout << sum << endl;
}