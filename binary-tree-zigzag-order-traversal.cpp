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
  
vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
    vector<vector<int> > vv;
    if(root == NULL) return vv;

    int level = 0;
    TreeNode *last = root;
    queue<TreeNode*> q;

    q.push(root);
    vv.push_back(vector<int>());
    while(!q.empty()) {
        TreeNode *p = q.front();
        q.pop();

        vv[level].insert(level%2 ? vv[level].begin() : vv[level].end(), p->val);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

        if(p == last) {
            level++;
            last = q.back();
            vv.push_back(vector<int>());
        }
    }
    vv.pop_back();

    return vv;
}
};
