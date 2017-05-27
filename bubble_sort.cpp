#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n,0);
	int x;
	for(int i=0;i<n;i++)
	{
	cin>>v[i];

	}
	
	for(int i=0;i<n-1;i++)
	{ 
	 for(int j=0;j<n-i-1;j++)
	 {
	 	if(v[j]>=v[j+1])
	 		{
	 		swap(v[j+1],v[j]);
	 		//cout<<"here";
	 	}

	 }
	}
	for(int i=0;i<n;i++)
	{
	cout<<v[i]<<endl;
	}
	return 0;
}