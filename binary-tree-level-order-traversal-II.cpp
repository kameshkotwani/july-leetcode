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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
      deque<TreeNode*> d; 
      vector<vector<int>> res;
      if(!root) return res; //base-case
      
      d.push_back(root);
      while(!d.empty())
      {
        vector<int> temp;
        for(auto i:d)
          temp.push_back(i->val);
          int len=d.size();
        while(len--)
        {
          if(d[0]->left)
            d.push_back(d[0]->left);
          if(d[0]->right)
            d.push_back(d[0]->right);
          d.pop_front();
        }
        res.push_back(temp);
      }
      reverse(res.begin(),res.end());
      return res;
    }
};
