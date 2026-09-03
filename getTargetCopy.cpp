class Solution {
public:
    TreeNode* getTargetCopy(
        TreeNode* original,
        TreeNode* cloned,
        TreeNode* target
    ) {
        if (original == nullptr) {
            return nullptr;
        }

        if (original == target) {
            return cloned;
        }

        TreeNode* res = getTargetCopy(
            original->left,
            cloned->left,
            target
        );

        if (res != nullptr) {
            return res;
        }

        return getTargetCopy(
            original->right,
            cloned->right,
            target
        );
    }
};
