//
// Created by eason on 25/11/2025.
// https://leetcode.cn/problems/search-insert-position/
//

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            int num = nums[mid];
            if (num == target) {
                return mid;
            } else if (num > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (right == -1)    return 0;
        if (left == nums.size())    return nums.size();
        return left;
    }
};
