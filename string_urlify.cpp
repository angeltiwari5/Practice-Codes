#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int truelength;
	cin>>truelength;
	int space=0;
	cout<<str.length();
	for(int i=0;i<truelength;i++)
	{
		if(str[i]==' ')
		space++;
	}
	int index= truelength+space*2;
	if(truelength<str.length())
		str[truelength]='\0';
	for(int i=truelength-1;i>=0;i--)
	{
	if(str[i]==' ')
	{
	 	str[index-1]='0';
	 	str[index-2]='2';
	 	str[index-3]='%';
	 	index=index-3;
	}
	else {
		 str[index-1]=str[i];
		 index--;
	}
	}
	for(int i=0;i<str.length();i++)
	{
		cout<<str[i];
	}
	return 0;
}