//RECURSIVE
void preorder(TreeNode* root,vector<int> &ans){ 
    if(root==NULL) return ;
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{   
    vector<int>ans;
     preorder(root,ans);
     return ans;
   
}

//ITERATIVE
vector<int> getPreOrderTraversal(TreeNode *root){
    stack<TreeNode*>st;
    vector<int>ans;
    if(root==NULL) return ans;
    st.push(root);
    while(!st.empty()){
        TreeNode* node=st.top();
        st.pop();
        ans.push_back(node->data);
        if (node->right != NULL) {
          st.push(node->right);
        }
        if (node->left != NULL) {
          st.push(node->left);
        }
    }
    return ans;
}

