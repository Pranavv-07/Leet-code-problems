class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;

      
        postOrder(root, output);
        
        return output;
    }

private:
    void postOrder(TreeNode* root, vector<int>& output) {
        if (root != nullptr) {
            postOrder(root->left, output);
            postOrder(root->right, output);
            output.push_back(root->val);
        }
    }
};
