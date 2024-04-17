    }
    void dfs(TreeNode* node, string path, string& smallest) {
        if (node == nullptr) return;
        path += char('a' + node->val);
        if (node->left == nullptr && node->right == nullptr) {
            reverse(path.begin(), path.end());
            if (smallest.empty() || path < smallest) {
                smallest = path;
            }
            reverse(path.begin(), path.end());
        }
        return smallest;
    string smallestFromLeaf(TreeNode* root) {
        string smallest;
        dfs(root, "", smallest);
class Solution {
public:
        dfs(node->left, path, smallest);
        dfs(node->right, path, smallest);
    }
};
[0,1,2,3,4,3,4]
