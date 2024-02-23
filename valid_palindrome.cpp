// Name: Emmie Kao
// Date: Winter 2024
// Purpose: Finds whether a phrase is a valid palindrome, eliminating
// non-alphanumeric characters

// LEETCODE PROBLEM 125: Valid Palindrome

// Uses 3 test cases:
// "A man, a plan, a canal: Panama" --> true
// "race a car" --> false
// " " --> true

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // Finds whether an inputted value is a palindrome
        string all_alnum;


    for (int i = 0; i < s.size() + 1; i++){
        if (isalnum(s[i])){
            all_alnum += tolower(s[i]);
        }
    }

    string opposite;
    for (int i = all_alnum.size() - 1; i > -1; i--){
        opposite += all_alnum[i];
    }

    if (opposite == all_alnum) {
        return true;
    }
    else {
        return false;
    }
    }
};