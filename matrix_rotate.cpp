#include<iostream>
#include<vector>
using namespace std;
void matrixrotate(vector<vector<int> > &v)
{	cout<<"hey"<<endl;
	//if(v.size()==0||v[0].size()==v.size())
	//return ;
	int n=v.size();
	for(int layer=0;layer<n/2;layer++)
	{ cout<<"heya"<<endl;
	int first=layer;
	int last=n-1-layer;
	for(int i=first;i<last;i++)
	{cout<<"heya1"<<endl;
	int offset=i-first;
	int top=v[first][i];
	v[first][i]=v[last-offset][first];
	v[last-offset][first]=v[last][last-offset];
	v[last][last-offset]=v[i][last];
	v[i][last]=top;
	}
	}
	for(int i=0;i<4;i++)
	{
	for(int j=0;j<4;j++)
	{
		cout<<v[i][j]<<" " ;
	}
	cout<<endl;
	}
	return ;
}
int main()
{
	vector< vector<int> > vec(4,vector<int>(4,0));
	for(int i=0;i<4;i++)
	{
	for(int j=0;j<4;j++)
	{
		cin>>vec[i][j];
	}
	}
	matrixrotate(vec);
	return 0;
	
}