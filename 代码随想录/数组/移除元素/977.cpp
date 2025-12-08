//
// Created by eason on 8/12/2025.
// https://leetcode.cn/problems/squares-of-a-sorted-array/description/
//
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        vector<int> ret;
        ret.resize(end + 1);
        int index = end;
        while (start <= end) {
            int start_tmp = nums[start] * nums[start];
            int end_tmp = nums[end] * nums[end];
            if (start_tmp > end_tmp) {
                ret[index] = start_tmp;
                start ++;
            } else {
                ret[index] = end_tmp;
                end --;
            }
            index --;
        }
        return ret;
    }
};