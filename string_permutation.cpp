#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void check(string str,string str2)
{
	if(str2.length()!=str.length())
		cout<<"FALSE";
map<char,int> mymap;
map<char,int> :: iterator it;
int count =0;
for ( int i = 0;i < str.length(); i++)
{

	mymap[str[i]]++;

}
for( int i=0;i< str.length();i++)
{
	mymap[str2[i]]--;
}
int flag=0;
for(it = mymap.begin();it!=mymap.end();it++)
{
	if(it->second!=0)
		flag=1;

}
if(flag==1)
cout<<"false";
else cout<<"true";
return;
}
int main()
{
	string str;
	cin >> str;
	
	string str2;
	cin >> str2;
	/*if(str2.length()!=str.length())
		cout<<"FALSE";
	sort(str.begin(),str.end());
	sort(str2.begin(),str2.end());
	if(str.compare(str2)==0)
	cout << "TRUE";
	else
	cout <<"FALSE";*/
		check(str,str2);
return 0;

}