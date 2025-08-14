//LeetCode 9: Palindrome Number
//Difficulty: Easy
//Link: https://leetcode.com/problems/palindrome-number/


//TC : O(log n)
//SC : O(1)

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int revNum = 0;

        while (x > revNum) { //reversing the number only the halfway to avoid overflow
            revNum = revNum * 10 + x % 10;
            x = x / 10;
        }
    
        return (revNum == x || x == revNum / 10); //handles both odd and even numbers
    }
};

int main(){
    Solution s;

    int n;
    cout << "Please Enter a Positive Integer: ";
    cin >> n;

    if(s.isPalindrome(n)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}