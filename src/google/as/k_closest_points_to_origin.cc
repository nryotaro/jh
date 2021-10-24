#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
        sort(points.begin(), points.end(),
             [](const vector<int> &a, const vector<int> &b) {
                 return a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1];
             });

        vector<vector<int>> res(points.begin(), next(points.begin(), k));
        return res;
    }
};