#include<iostream>
#include<vector>
using namespace std;
int count(int n, vector<int> &dp)
{
	if(n<0)
	{
		return 0;
	}
	else if(n==0)
	{
	return 1;
	}
	else if (dp[n] >-1)
	{
		 return dp[n];
	}
	else{
	dp[n]=count(n-1,dp)+count(n-2,dp)+count(n-3,dp);
	return dp[n];
	}

}
int countWays(int n)
{
	vector<int> dp(n+1,-1);
	return count(n,dp);
}


int main()
{
	int n;
	cin>>n;
	int ways=countWays(n);
	cout<<"ways="<<ways;
	return 0;
}