/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int height (TreeNode* root) { 
        if (root == NULL) return 0;

       return 1+ max (height(root->right), height(root-> left));
    } 
    
    int diameterOfBinaryTree(TreeNode* root) {
       if (root == NULL) return 0;
       
        
        int LH=  height (root->left);
        int RH=  height (root->right);;
        
        int D= LH+RH;
        int LD= diameterOfBinaryTree (root->left);
        int RD= diameterOfBinaryTree (root->right);
        
        return max (D, max (LD ,RD));
        
    }
};
