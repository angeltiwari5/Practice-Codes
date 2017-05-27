#include<iostream>
using namespace std;
struct node{
	int val;
	struct node* left;
	struct node* right;
};
int min(int a,int b)
{
	return (a<=b)?a:b;
}
int minDepth(struct node*root)
{
	if(root==NULL)
	return 0;
	if(root->left==NULL&&root->right ==NULL)
	return 1;
	if(!root->left)
	return minDepth(root->right)+1;
	if(!root->right)
	return minDepth(root->left)+1;
	return min(minDepth(root->right),minDepth(root->left))+1;
}
struct node* newNode(int data)
{
	struct node* temp=new node;
	temp->val=data;
	temp->left=temp->right=NULL;
	return temp;
}
int main()
{
	struct node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    cout << minDepth(root);
    return 0;
	
}