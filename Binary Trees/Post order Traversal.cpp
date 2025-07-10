class Solution {
public:
    void createVec (TreeNode* root, vector <int> &v) {
        if (root == NULL) {
            return;
        }
        createVec(root->left, v);
        createVec(root->right, v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> v;
        createVec(root, v);
        return v;
    }
};