#include<iostream>
#include<vector>
using namespace std;
int findCeil(vector<int>v,int first,int index,int size)
{	int min_large=index;
	for(int i=index;i<=size;i++)
	{
		if(v[i]>first && v[i]<v[min_large])
			min_large=i;
	}
	return min_large;
}
void swap(int &a,int&b)
{
	int t=a;
	a=b;
	b=t;
	return ;
}
vector<vector<int> > permute(vector<int>& nums)
{
	sort(nums.begin(),nums.end());
	vector<vector<int> > res;
	//vector<int>v;
	bool complete=false;
	while(!complete)
	{	
		res.push_back(nums);
		int i;
		for(i=nums.size()-2;i>=0;i--)
		{
			if(nums[i]<nums[i+1])
			break;

		}
		if(i==-1)
		{
		complete=true;
		}
		else{
		int ceiling=findCeil(nums,nums[i],i+1,nums.size()-1);
		swap(nums[i],nums[ceiling]);
		sort(nums.begin()+i+1,nums.end());
		}
	}
	return res;
}

int main()
{
	vector<int> vect;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int c;
	cin>>c;
	vect.push_back(c);
	}
	vector<vector<int> > result;
	result=permute(vect);
	for(int i=0;i<result.size();i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<< result[i][j]<<" ";
		}
		cout<<endl;
	}
}