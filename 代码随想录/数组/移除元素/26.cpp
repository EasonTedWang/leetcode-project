//
// Created by eason on 1/12/2025.
// https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
//

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if (size == 0 || size == 1) return size;
        int startIndex = 1;
        int endIndex = 1;
        while (endIndex < size) {
            if (nums[endIndex] != nums[endIndex - 1]) {
                nums[startIndex] = nums[endIndex];
                startIndex ++;
                endIndex ++;
            } else {
                endIndex ++;
            }
        }
        return startIndex;
    }
};

