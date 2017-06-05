#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) :val(x),left(NULL),right(NULL){};
};


int closeVal(TreeNode* root,float val){
    TreeNode * child = root->val <val ? root->right:root->left;
    if( !child)
        return root->val;
    int childClose = closeVal(child,val);
    return abs(childClose - val)>abs(root->val - val) ?root->val : childClose;

}

int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}