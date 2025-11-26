//
// Created by eason on 26/11/2025.
// https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/
//
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBoarder = getLeftBoarder(nums, target);
        int rightBoarder = getRightBoarder(nums, target);
        if (leftBoarder == -2 || rightBoarder == -2)    return {-1,-1};
        if (rightBoarder - leftBoarder > 1) return {leftBoarder + 1, rightBoarder - 1};
        return {-1,-1};
    }

private:
    int getRightBoarder(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int rightBoarder = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] > target) {
                right = middle - 1;
            } else {
                left = middle + 1;
                rightBoarder = left;
            }
        }
        return rightBoarder;
    }

    int getLeftBoarder(vector<int>&nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int leftBoarder = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle - 1;
                leftBoarder = right;
            }
        }
        return leftBoarder;
    }

};