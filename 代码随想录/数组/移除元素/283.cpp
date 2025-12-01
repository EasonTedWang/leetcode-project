//
// Created by eason on 1/12/2025.
// https://leetcode.cn/problems/move-zeroes/solutions/2969353/kuai-man-zhi-zhen-wei-shi-yao-ke-yi-ba-s-1h8x/
//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int stack_size = 0;
        for (int x : nums) {
            if (x) {
                nums[stack_size ++] = x;
            }
        }
        fill(nums.begin() + stack_size, nums.end(), 0);
    }
};

