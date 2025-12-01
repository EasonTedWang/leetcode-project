//
// Created by eason on 1/12/2025.
// https://leetcode.cn/problems/remove-element/
//

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;
        int k = 0;
        while (start <= end) {
            if (nums[start] == val) {
                while(nums[end] == val && start < end) {
                    end = end - 1;
                }
                if (start == end) {
                    return k;
                } else {
                    nums[start] = nums[end];
                    start ++;
                    end --;
                    k ++;
                }
            } else {
                k ++;
                start ++;
            }
        }
        return k;
    }
};
