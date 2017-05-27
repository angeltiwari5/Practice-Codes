#include<iostream>
#include<map>
using namespace std;
void sumup(map<string,int> m,string str)
{	int l=str.length();
int sum=0;
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
	{
		string temp=it->first;
		if(temp.substr(0,l)==str){
		sum+=it->second;
		}

	}
	cout<<sum;
}
int main(){
	map<string, int> m;
	string str="ap";
	m.insert(std::pair<string,int>("apple",3));
		m.insert(std::pair<string,int>("apricot",8));
		m.insert(std::pair<string,int>("pear",7));
		//m["apple"]=3;
		//m["apricot"]=8;
		//m["pear"]=7;
		sumup(m,str);
		return 0;
	
}