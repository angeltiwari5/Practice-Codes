#include<iostream>
#include<vector>
using namespace std;
int search(char s,vector<pair<char,int> > vec)
{
	for(int i=0;i<vec.size();i++)
	{
		if(vec[i].first==s)
		return i;

	}
	return -1;
}
bool mycomp(const pair<char,int > &a,const pair<char,int > &b)
{
	return a.second>b.second||(a.second==b.second && a.first<b.first);
}
void sort_frequency(string str, vector<pair<char,int> > & vec)
{
	for(int i=0;i<str.size();i++)
	{
		if(search(str[i],vec)==-1)
		{
			vec.push_back(make_pair(str[i],1));
		}
		else{
		int x= search(str[i],vec);
		vec[x].second++;
		}
	}
	sort(vec.begin(),vec.end(),mycomp);
	for(int i=0;i<vec.size();i++)
	{
		while(vec[i].second!=0)
	{cout<<vec[i].first;
		vec[i].second--;
	}
	}
}
int main()
{
	string str="qwssssseerttty";
	vector<pair<char,int> > vec;
	sort_frequency(str,vec);
	return 0;

}