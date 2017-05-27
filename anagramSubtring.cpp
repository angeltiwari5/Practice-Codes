#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
bool compare(vector<int> v1, vector<int> v2)
{	//cout<<"control coming here2";
	for(int i=0;i<256;i++)
	{
		if(v1[i] != v2[i])
		return false;
	}
	
	return true;
}
void checkAna(string s1, string s2)
{
	vector<int> vec2(256,0);
	vector<int> vec1(256,0);
	int m=s1.size();
	int n=s2.size();
	for(int i=0;i<s2.size();i++)
	{
		vec2[s2[i]]++;
		vec1[s1[i]]++;
	}
	/*for(int i=0;i<vec2.size();i++)
	{
		cout<< vec1[i] <<i<<endl;
		//vec1[s1[i]-'a']<<"here2 "<<endl;
	}*/
	for(int i=n;i<m;i++)
	{
		if(compare(vec1,vec2))
		{
		 cout<<"anagram found at "<< i-n<<endl;
		}
		vec1[s1[i]]++;
		vec1[s1[i-n]]--;
	}
	if( compare(vec1,vec2) ){
	cout<<"last anagram was found at "<<m-n<<endl;
	}
	else {
		cout<< "no anagram found";
	}
	return ;
}
int main()
{
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	checkAna(s1,s2);
	return 0;
}