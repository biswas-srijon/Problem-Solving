//LeetCode 78: Subsets
//Difficulty: Easy
//Link: https://leetcode.com/problems/subsets/


//TC : O(n * 2^n)
//SC : O()

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
    if(i == nums.size()){
        allSubsets.push_back({ans});
        return;
    }

    //include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i+1, allSubsets);

    ans.pop_back();
    //exclude
    getAllSubsets(nums, ans, i+1, allSubsets);

}

    //we have to store the subsets in this vector of vector
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;

        vector<int> ans;
        getAllSubsets(nums, ans, 0, allSubsets);

        return allSubsets;
    }
};

int main(){
    Solution s;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = s.subsets(nums);

    cout << "All subsets:\n";
    for (auto &subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
}