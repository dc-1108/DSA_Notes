
class Solution {
public:
    void createVec(queue<TreeNode*> &q, vector<vector<int>> &v) {
        if (q.empty()) return;

        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();
            if (node == nullptr) continue;

            level.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        if (!level.empty()) v.push_back(level);

        createVec(q, v);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if (root == nullptr) return v;

        queue<TreeNode*> q;
        q.push(root);
        createVec(q, v);

        return v;
    }
};
