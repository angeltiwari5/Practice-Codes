#include<iostream>
#include<string>
#include<vector>
using namespace std;
void computeLps( string pat, vector<int> v)
{
	int len=0;
	int i=1;
	v[0]=0;
	while(i<pat.size())
	{
		 if(pat[i]==pat[len])
		 {
		 	len++;
		 	v[i]=len;
		 	i++;
		 	
		 }
		 else{
		 if(len!=0)
		 {
		 len=v[len-1];

		 }
		 else{
		 v[i]=0;
		 i++;
		 }
		 }
	}
}
void search(string text,string pat)
{
	string temp = pat + "#" + text;
	vector<int> v(pat.length(),0);
	computeLps(pat,v);
	int i=0;
	int j=0;
	while(i<text.size())
	{
		if(text[i]==pat[j])
		{
		i++;
		j++;
		}
		if(j==pat.size())
		{
		cout<<"pattern found at "<<i-j<<endl;
		j=v[j-1];
		}
		else if(i<text.size()&&text[i]!=pat[j]){
		if(j!=0)
		j=v[j-1];
		else i++;
		}
		
	}

}

int main()
{
	string text;
	cin>>text;
	string pat;
	cin>>pat;
	search(text,pat);
	return 0;
}