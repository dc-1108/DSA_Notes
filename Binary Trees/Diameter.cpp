class Solution {
public:
    int maxD = 0;
    int findDepth (TreeNode* root) {
        if (root==nullptr) return 0;
        int leftD = findDepth(root->left);
        int rightD = findDepth(root->right);

        maxD = max(maxD, leftD+rightD);
        return 1 + max(leftD, rightD);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        findDepth(root);
        return maxD;
    }
};