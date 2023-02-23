/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <vector>
using namespace std;
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
};

bool isSymmetric2(TreeNode* left, TreeNode* right) {
  if (!left && !right) return true;
  if (!left || !right) return false;
  if (left->val != right->val) return false;
  return isSymmetric2(left->left, right->right) &&
         isSymmetric2(left->right, right->left);
}
class Solution {
 public:
  bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isSymmetric2(root, root);
  }
};
