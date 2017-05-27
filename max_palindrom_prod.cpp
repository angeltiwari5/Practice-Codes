#include <iostream>
#include <string>
using namespace std;
int max(int a, int b)
{
	return (a>=b)?a:b ;
}
int main()
{
	int table[3210][3210];
	string str;
	cin>> str;
	int n=str.length();
	for(int i = 0; i < n; i++)
	{
		table[i][i]=1;
	}
	for(int i= n-2;i>=0;i--)
	{
		for(int j=i+1; j<n; j++)
		{
			if(str[i]==str[j])
			{
				table[i][j]= 2 + table[i+1][j-1];
			}
			else{
				table[i][j]=max(table[i+1]n[j],table[i][j+1]);
			}
		}
	}
	int product=0;
	for(int i=0;i<n;i++)
	{
	 int temp=table[0][i-1]*table[i][n-1];
	 if(temp>=product)
	 	product=temp;
	}
	cout<<product;
}
