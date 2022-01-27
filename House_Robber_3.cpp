class Solution {
public:
    map<pair<TreeNode*, int>, int > mp;
    
    int helper(TreeNode* root, int isParent){
        if(root == NULL)
            return 0;
        
        pair<TreeNode*, int> newPair = {root, isParent};
        
        if(mp.find(newPair) != mp.end())
            return mp[{newPair}];
        
        if(isParent == false)
        {
            int ans1 = root->val + helper(root->left, 1-isParent) + helper(root->right, 1-isParent);
            int ans2 = helper(root->left, isParent) + helper(root->right, isParent);
            
            return mp[newPair] = max(ans1, ans2); 
        }
        else
        {
            return mp[newPair] = helper(root->left, 1-isParent) + helper(root->right, 1-isParent);
        }
    }
    int rob(TreeNode* root) {
        return max(helper(root, 0), helper(root, 1));
    }
};
