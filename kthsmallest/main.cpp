#include <iostream>
#include<stack>
using namespace std;
struct TreeNode {
int val;
struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int smallest(struct TreeNode* root, int k)
{   stack<struct TreeNode*> st;
    if(root)
        st.push(root);
    while(!st.empty() || root)
    {
        if(root) {
            st.push(root->left);
            root=root->left;
        }
        else
        {
            struct TreeNode* node = st.top();
            if(--k==0)
                return node->val;
            st.pop();
            root=root->right;

        }
    }



}
int largest( struct TreeNode* root, int k)
{
    stack<struct TreeNode*> st;
    if( root)
        st.push(root);
    while(!st.empty() || root)
    {
        if( root)
        {
            st.push(root->right);
            root=root->right;
        }
        else{
            struct TreeNode* node = st.top();
            if(--k ==0)
            {
                return root->val;
            }
            root=root->left;
        }
    }
    return 0;
}
int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}