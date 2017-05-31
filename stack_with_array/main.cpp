#include <iostream>
#include <vector>
using namespace std;
int top=-1;
int size=0;
int cap=4;
void pop(vector<int> & vec)
{
    if(vec.size()==0){
        cout<<"underflow";
        return ;
    }
    vec.resize(vec.size()-1);
    int result= vec[top];
    vec[top]=-1;
    top--;
    cout<<result<< "item popped";
}
void push(vector<int> & vec, int n)
{
    if(vec.size()==cap)
    {
        cout<<"overflow";
        return ;
    }
    vec.resize(vec.size()+1);
    top++;
    vec[top]= n;
    //top++;
}
void print( vector<int>  vec)
{
    for( int i =0;i<vec.size();i++)
    {
        cout<< vec[i]<<" ";
    }
    return ;
}
int main() {
    vector<int> vec;
    push(vec,4);
    //print(vec);
    push(vec,2);
    //print(vec);
    push(vec,1);
    push(vec,0);
    print(vec);
    pop(vec);
    print(vec);
    cout << "Hello, World!" << endl;
    return 0;
}