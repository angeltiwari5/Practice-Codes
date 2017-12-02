#include<iostream>
#include<vector>
#include<float.h>
using namespace std;
 
// Structure of a node of an n-ary tree
struct NaryNode
{
   int value;
   vector<NaryNode *> child;
};
 
// Utility function to create a new tree node
NaryNode *newNode(int key)
{
   NaryNode *temp = new NaryNode;
   temp->value = key;
   return temp;
}
 
double calculateaverage(NaryNode *root,int max) {
    double sum = 0.0;
    float count =0.0;
    if(root->child.size() == 0)
        return root->value;
    for(int i =0;i<root->child.size();i++){
        if(root->child[i]->child.size() > 0){
            double tmp = calculateaverage(root->child[i],max);
            if(tmp>max){
                max = tmp;
            }
        }
        sum+=root->child[i]->value;
        count++;
    }
   sum = sum+root->value;
    sum = sum/(count+1);
    cout<<sum<<endl;
    if(sum>max)
        max = sum;
    return max;
}
int main()
{
   /*   Let us create below tree
   *           A
   *         / /  \  \
   *       B  F   D  E
   *      / \     |  /|\
   *     K  J    G  C H I
   *      /\            \
   *    N   M            L
   */
 
   NaryNode *root = newNode(5);
   (root->child).push_back(newNode(-1));
   (root->child).push_back(newNode(3));
   (root->child).push_back(newNode(1));
   (root->child).push_back(newNode(9));
   (root->child[0]->child).push_back(newNode(10));
   (root->child[0]->child).push_back(newNode(12));
   (root->child[2]->child).push_back(newNode(3));
   (root->child[3]->child).push_back(newNode(7));
   (root->child[3]->child).push_back(newNode(8));
   (root->child[3]->child).push_back(newNode(5));
   (root->child[0]->child[0]->child).push_back(newNode(3));
   (root->child[0]->child[0]->child).push_back(newNode(2));
   (root->child[3]->child[2]->child).push_back(newNode(4));
   double max = (double)INT_MIN;
 
   cout << calculateaverage(root,max); 
 
   return 0;
}