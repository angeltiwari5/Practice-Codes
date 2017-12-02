#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void reverseString(string &s, int start, int end){
	while(start<=end)
	{
		swap(s[start],s[end]);
		start++;
		end--;
	}
	return ;
}
int main(){
	string s;
	//cin>> s;
	getline(cin,s);
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	int start =0;
	for( int i =0;i<s.length();i++){
		if(s[i]==' '){
			reverseString(s,start,i-1);
			start = i+1;
		}
		else continue;

	}
	reverseString(s,start,s.length()-1);
	cout<<s;
	return 0;
}