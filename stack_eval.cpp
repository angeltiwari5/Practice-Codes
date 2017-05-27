#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	stack<int> st;
	string op="+-*/";
	for ( int i=0;i<str.length();i++)
	{
		cout << "hello";
	if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
	{
	int a=st.top();
	st.pop();
	int b=st.top();
	st.pop();
	int index=op.find(str[i]);
	cout<<index;
	switch(index)
	{
	case '0' : st.push(a+b);
	break;
	case '1' : st.push(b-a);
	break;
	case '2' : st.push(a*b);
	break;
	case '3' : st.push(b/a);
	break;
	}
	}
	else {
		cout<<"WORLD";
	int n;
	istringstream(str[i])>>n;
	cout<<n;
	st.push(n);
	}
	}
	if(st.size())
	{
	int ne=st.top();
	while(st.size())
	{
	st.pop();
	}
	cout<< ne <<" ";
	}
	return 0;
}