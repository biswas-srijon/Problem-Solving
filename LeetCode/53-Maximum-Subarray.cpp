//LeetCode 53: Maximum Subarray
//Difficulty: Medium
//Link: https://leetcode.com/problems/maximum-subarray/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0;
        int maxSum = INT_MIN;

        for(int i = 0; i<nums.size(); i++){
            curSum += nums[i];
            maxSum = max(curSum, maxSum);

            if(curSum<0){
                curSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    vector <int> num= {-2,1,-3,4,-1,2,1,-5,4};

    Solution s;

    cout << s.maxSubArray(num);
}