
class Solution {
public:
    void getVec(TreeNode* root, vector <int> &v, int depth) {
        if (root==nullptr) {
            return;
        }
        if (depth>v.size()) v.push_back(root->val);
        getVec(root->right, v, depth+1);
        getVec(root->left, v, depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector <int> v;
        getVec(root, v, 1);
        return v;
    }
};
