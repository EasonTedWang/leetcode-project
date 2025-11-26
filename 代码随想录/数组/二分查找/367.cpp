//
// Created by eason on 26/11/2025.
// https://leetcode.cn/problems/valid-perfect-square/description/
//

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0 || num == 1)   return true;
        int left = 0, right = num;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (num / middle == middle) {
                if (middle * middle == num) {
                    return true;
                } else {
                    return false;
                }
            } else if (num / middle < middle) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return false;
    }
};
