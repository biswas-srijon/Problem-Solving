//LeetCode 136: Single Number
//Difficulty: Easy
//Link: https://leetcode.com/problems/single-number/?envType=problem-list-v2&envId=array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;

        for (int val : nums){
            num ^= val; //XOR technique
        }
        return num;
    }
};

int main() {
    vector <int> num= {4,1,2,1,2};

    Solution s;

    cout << s.singleNumber(num);
}