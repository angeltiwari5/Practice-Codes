#include<iostream>
using namespace std;
struct node{
	//struct node* parent;
	struct node* left;
	struct node* right;
	int data;
};
struct node *newNode(int value)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void print(struct node* root)
{
	if(root!=NULL)
	{
	print(root->left);
	
	print(root->right);
	cout<<root->data;
	}
	return;
}
struct node* insert(struct node* node,int value)
{
	if(node==NULL)
	return newNode(value);
	if(value<node->data)
	node->left=insert(node->left,value);
	else if(value>node->data)
	node->right=insert(node->right,value);
	return node;
}
int main(){
int n;
cin>>n;
struct node * root=NULL;
for(int i=0;i<n;i++)
{
	root=insert(root,i);
}
	print(root);
	return 0;
}