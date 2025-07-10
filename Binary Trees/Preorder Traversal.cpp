
class Solution {
public:
    void createVec (TreeNode* root, vector <int> &v) {
        if (root == nullptr) {
            return;
        }
        v.push_back(root->val);
        createVec(root->left, v);
        createVec(root->right, v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        createVec(root, v);
        return v;
    }
};
