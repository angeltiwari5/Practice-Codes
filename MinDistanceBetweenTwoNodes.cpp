struct Node
{
    int data;
    struct Node* left, * right;
}; */

/* Should return minimum distance between a and b
   in a tree with given root*/
  
Node * LCA(Node*  ,int  ,int  ) ;
int distance(Node *,int,int ) ;
  
int findDist(Node* root, int a, int b)
{
    if(root==NULL)
        return 0 ;
       
    Node *ROOT ;
    ROOT=LCA(root,a,b) ;
   
    int l1,l2 ;
    l1=distance(ROOT->left,a,b) ;
    l2=distance(ROOT->right,a,b) ;
   
    return l1+l2 ;
}

Node * LCA(Node* root ,int n1 ,int n2 )
{
    if(root==NULL)
        return root ;
       
    if(root->data==n1)
        return root ;
    if(root->data==n2)
        return root ;
       
    Node *L,*R ;
    L=LCA(root->left,n1,n2) ;
    R=LCA(root->right,n1,n2) ;
   
    if(L&&R)
        return root ;
       
    return (L!=NULL)?L:R ;
}

int distance(Node *root,int ele1,int ele2)
{
    if(root==NULL)
        return 0 ;
    int n1,n2 ;
    if(root->data==ele1||root->data==ele2)
        return 1 ;
  
    n1=distance(root->left,ele1,ele2) ;
    if(n1)
        return n1+1 ;
    n2=distance(root->right,ele1,ele2) ;
    if(n2)
        return n2+1 ;
  
}