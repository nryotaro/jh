#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};
class Solution {
  public:
    int maxDepth(TreeNode *root) { return rec(root, 0); }
    int rec(TreeNode *node, int depth) {
        if(node == nullptr)
            return depth;
        return max(rec(node->left, depth + 1), rec(node->right, depth + 1));
    }
};