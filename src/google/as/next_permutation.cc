#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int> &nums) {
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--) {
            for(int j = n - 1; j > i; j--) {
                if(nums[i] < nums[j]) {
                    swap(nums[i], nums[j]);
                    sort(nums.begin() + i + 1, nums.end());
                    return;
                }
            }
        }
        reverse(nums.begin(), nums.end());
    }
};