#include<iostream>
#include<queue>
#include<set>
#include<string>
using namespace std;

bool isadjacent(string &a,string &b)
{
	int count =0;
	int length=a.length();
	for(int i=0;i<length;i++)
	{
	if(a[i]!=b[i])
	count++;
	if(count>1)
	return false;
	}
	return count==1?true:false;
}
struct Qitem{
	string word;
	int len;
};
int string_path(string &start,string &target,set<string> &dict)
{
	queue<Qitem> Q;
	Qitem item={start,1};
	Q.push(item);
	while(!Q.empty())
	{
	Qitem current=Q.front();
	Q.pop();
	set<string>::iterator it;
	for(it=dict.begin();it!=dict.end();it++)
	{
	string temp =*it;
	if(isadjacent(current.word,temp))
	{
	item.word=temp;
	item.len=current.len+1;
	Q.push(item);
	//dict.erase(temp);
	if(temp==target)
	return item.len;
	}
	}
	}
return 0;
}
int main()
{
	set<string> dict;
	dict.insert("poon");
	dict.insert("plee");
    dict.insert("same");
    dict.insert("poie");
    dict.insert("plie");
    dict.insert("poin");
    dict.insert("plea");
    string start="toon";
    string target="plea";
    cout<<"the shortest chain is"<<" "<< string_path(start,target,dict);
return 0;
}