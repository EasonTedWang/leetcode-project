//
// Created by eason on 26/11/2025.
// https://leetcode.cn/problems/sqrtx/
//


class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int left = 0, right = x;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (x / middle == middle) {
                return middle;
            } else if (x / middle < middle) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left - 1;
    }



};
