#include<iostream>
#include<vector>
#include<stack>
#include <string>
using namespace std;
void binary(int n, stack<int> & s)
{int rem;
	while(n>=1)
	{
		rem=n%2;
		n=n/2;
		cout<<n<<endl;
		s.push(rem);
	}
}
void check_palin(string str)
{
	string s=str;
	reverse(str.begin(),str.end());
	if(str==s)
		cout<<"Plaindrom";
	else
		cout<<"not palindrom";
	return ;
}
int main()
{
	int n;
	cin>>n;
	stack<int> vec;
	binary(n,vec);
	cout<<vec.size()<<"stack size"<<endl;
	int size=vec.size();
	string str="";
	for(int i=0;i<size;i++)
	{
		cout<<vec.top();
		str.push_back(vec.top());
		vec.pop();
	}
	check_palin(str);
	return 0;
}