/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size();
        while (n > 0) {
            while (m > 0 && nums1[m-1] > nums2[n-1]) {
                swap(nums1[--i], nums1[--m]);
            }
            swap(nums1[--i], nums2[--n]);
        }
    }
};
// @lc code=end

