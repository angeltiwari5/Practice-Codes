#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void helper ( Node* root, int currentPath, int expectedValue, int & res)
{
    if( root == NULL)
        return ;
    if(root->data == expectedValue)
        currentPath++;
    else
        currentPath=1;
    res = max( res, currentPath);
    helper(root->left, currentPath, root->data+1, res);
    helper(root->right, currentPath, root->data+1, res);
}
int longestConsecutive(Node* root){
    if( root == NULL)
        return 0;
    int result =0;
    helper(root, 0 , root->data, result);
    return result;
}
int main() {

        Node* root = newNode(1);
        root->left = newNode(2);
        root->left->left = newNode(3);
        root->right = newNode(4);
        root->right->left = newNode(5);
        root->right->right = newNode(6);
        root->right->right->left = newNode(7);

        cout<< longestConsecutive(root);
        return 0;


}