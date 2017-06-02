#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string a;
	
getline( cin , a);
	string b;
	getline ( cin, b);
	for( int i=0;i< a.length();i++)
	{
		cout<< a[i];
	}
        for(int i = 0 ;i< b.length();i++)
	{
		int index = b.(" ");
		string str = b.substr(i,index);
		map<char, int > mp;
		for( int j = 0; j< str.length();j++)
		{
			mp[str[j]]++;
		}
		for( int k =0;k< a.length();k++)
		{
		int index1 = a.find(" ");
		string stra = a.substr(k,index1);
		map<char, int > mp1;
			for( int x = 0;x<stra.length();x++)
			{
			mp1[stra[x]]++;	
			}
			for(map<char,int> it

		}

	}	

	return 0;
}
