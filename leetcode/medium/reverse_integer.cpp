/*
https://leetcode.com/problems/reverse-integer/

Problem:
digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

solution:
class Solution {
public:
    int reverse(int n) {
 int remainder, reversed_number=0;
    while(n != 0) {
        if (INT_MAX/10 < reversed_number || INT_MIN/10 > reversed_number)
                return 0;
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  

  return reversed_number;
    }
};
*/