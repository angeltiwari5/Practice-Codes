#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int x;
	for(int i=0;i<n;i++)
	{

	cin>>x;
	v.push_back(x);

	}
	int index;
	for(int i=0;i<n-1;i++)
	{	index=i;
		for(int j=i+1;j<n;j++)
		{
			if(v[index]>v[j])
			{
			
			index=j;
			}
		}
		
		swap(v[i],v[index]);
	}
	for(int i=0;i<n;i++)
	{

	cout<<v[i]<<endl;

	}
	return 0;
}