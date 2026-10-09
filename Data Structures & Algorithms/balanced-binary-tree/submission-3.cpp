/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    int mp(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int l = mp(root->left);
        int r = mp(root->right);
        if(abs(l-r) > 1){
            return -1;
        }
        if(l==-1||r==-1){
            return -1;
        }
        else{
            return max(l,r)+1;
        }
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        return mp(root) != -1;
    }
};
