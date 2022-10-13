/*
https://leetcode.com/problems/median-of-two-sorted-arrays/
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 
solution:
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int totalLen = nums1.size() + nums2.size();
        double median = 0.0;
        
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        
       sort(nums1.begin(), nums1.end());
        
        
        if(nums1.size() % 2 == 0) 
            // if even
            median = ( nums1[nums1.size()/2] + nums1[(nums1.size()/2) - 1] ) / 2.0;
        
        else 
            // else odd
            median = nums1[floor(nums1.size()/2)];
        
        
        return median;
    }
};
*/