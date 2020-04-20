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

    void sol (vector<int>& preorder, int i , TreeNode * root,
    vector<int>& vis) {


        if (i >= preorder.size()-1) return;

        cout << i << endl ;

        int j= i+1;
        if (preorder[j] < preorder[i] and vis[j]!= 1) {
            root->left = new TreeNode (preorder[j]);
            vis[j] =1;
            j++;
            }
        else root->left = nullptr;
        
        for (; j< preorder.size(); j++ ){
            if (preorder[j] > preorder[i]) break;
        }
            
        if (j<preorder.size() and vis[j]!= 1 ) {
            root->right = new TreeNode (preorder[j]);
            vis[j] =1;
        }
        else root->right = nullptr;

        if ( root->left!=nullptr)
        sol (preorder, i+1, root->left,vis);
        if ( root->right!=nullptr)
        sol (preorder, j, root->right,vis);

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        vector<int> vis (preorder.size(),0);
        int i= 0;
        TreeNode* root = new TreeNode (preorder[i]);
        if (preorder.size() == 1) return root;
        sol(preorder, i, root, vis);
        return root;
    }
};
