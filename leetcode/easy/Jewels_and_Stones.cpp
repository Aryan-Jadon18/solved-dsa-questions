/*
https://leetcode.com/problems/jewels-and-stones/description/
#Problem
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

Example 2:
Input: jewels = "z", stones = "ZZ"
Output: 0
''' 
#Intuition
 It seems a simple string problem that can be solved using simple iterations.

#Approach
 I used a range based for loop for iterating through 'jewels' string and inside it used 'count' keyword which outputs the frequency of that particular 'jewel' if it's present in 'stones.begin() to stones.end()'.

#Complexity
 Time complexity:
 t.c. of for(constautojewel:jewels)for(const auto jewel : jewels)for(constautojewel:jewels) will be O(n)O(n)O(n) and for count(stones.begin(),stones.end(),jewel)count(stones.begin(), stones.end(), jewel)count(stones.begin(),stones.end(),jewel) will be again O(n)O(n)O(n).
 So, it must be O(n^2)

Space complexity:
O(n)O(n)O(n)
# Code
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        for(const auto jewel : jewels){
            cnt += count(stones.begin(), stones.end(), jewel);
}
    return cnt;
    }
};
*/