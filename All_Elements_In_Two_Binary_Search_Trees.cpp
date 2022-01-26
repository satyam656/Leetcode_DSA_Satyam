void traverseLeft(stack<TreeNode*> &s, TreeNode* root){
        while(root != NULL)
        {
            s.push(root);
            root = root->left;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        traverseLeft(s1, root1);
        traverseLeft(s2, root2);
        
        while(!s1.empty() || !s2.empty())
        {
            if(s1.empty())
            {
                TreeNode* temp = s2.top();
                s2.pop();
                ans.push_back(temp->val);
                traverseLeft(s2, temp->right); 
            }
            else if(s2.empty())
            {
                TreeNode* temp = s1.top();
                s1.pop();
                ans.push_back(temp->val);
                traverseLeft(s1, temp->right);
            }
            else if(s1.top()->val <= s2.top()->val)
            {
                TreeNode* temp = s1.top();
                s1.pop();
                ans.push_back(temp->val);
                traverseLeft(s1, temp->right);
            }
            else
            {
                TreeNode* temp = s2.top();
                s2.pop();
                ans.push_back(temp->val);
                traverseLeft(s2, temp->right);   
            }
        }
        return ans;
    }
