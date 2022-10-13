/*
https://leetcode.com/problems/longest-common-prefix/
Problem:
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

solution:
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        sort(strs.begin(), strs.end());
        for(int i=0; i<strs[0].size();i++){
            if(strs[0][i]==strs[n-1][i]){
                ans+=strs[0][i];
                
            }
            else
                break;
        }
        return ans;
    }
};
*/