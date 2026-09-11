class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot ==NULL)return true;
        if(root==NULL || subRoot ==NULL)return false;
        bool res=false;
        if(root->val ==subRoot->val){
            res=isSubtree(root->left,subRoot->left) && isSubtree(root->right,subRoot->right);
        }
        res=res|| isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        return res;
    }
};
