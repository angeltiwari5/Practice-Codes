#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int min(int a, int b)
{
	return (a<=b)?a:b;
}
int main()
{
	int n;
	cin>>n;
	vector<int> numbers(n,0);
	for(int i=0;i<n;i++)
	{
	cin>>numbers[i];
	}
	if(n==0||numbers[0]==0)
	{
		return INT_MAX;
	}
	vector<int> steps(n,INT_MAX);
	steps[0]=0;
	//int i=1;
	for(int j=1;j<n;j++)
	{//int i=0;
	for(int i=0;i<j;i++)
	{
		if(j<=i+numbers[i]&&steps[i]!=INT_MAX)
		{
		//cout<<"here"<<endl;
		steps[j]=min(steps[i]+1,steps[j]);
		break;
		//cout<<steps[j]<<" ";
		}
		
	}
	}
	cout<<steps[n-1];
	return 0;
}