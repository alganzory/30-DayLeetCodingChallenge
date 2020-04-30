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
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return checkPath (root, arr, 0);
    }
    
    bool checkPath (TreeNode* root, vector<int>& arr, int index) {
        if (root == nullptr || index== (int) arr.size() )return 0;
        if(root->left == nullptr && root->right == nullptr && root->val == arr[index] && index == arr.size()-1)
             return true;
       
         return root->val == arr[index] && (checkPath(root->left, arr, index+1) || checkPath(root->right, arr, index+1));
        
    }
};
