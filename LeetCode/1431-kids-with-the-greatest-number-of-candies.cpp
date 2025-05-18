//LeetCode 1431: Kids With the Greatest Number of Candies
//Difficulty: Easy
//Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=problem-list-v2&envId=array

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int highest = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        for(int i = 0; i < candies.size(); i++){
            candies[i]+=extraCandies;
            if(candies[i]>=highest){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};

int main(){
    Solution sol;

    int n, x;
    cout << "Enter array size: ";
    cin >> n;

    vector <int> candies;
    if(n>=2 && n<=100){
        cout << "Enter array elements: ";
        for(int i= 0; i<n; i++){
            cin >> x;
            if(x>0 && x<= 100){
                candies.push_back(x);
            }
        }
    }

    int extraCandies;
    cout << "Enter amount of extra candies: ";
    cin >> extraCandies;

    vector<bool> result;
    if(extraCandies > 0 && extraCandies <= 100)
    result = sol.kidsWithCandies(candies, extraCandies);

    for (bool b : result) {
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}