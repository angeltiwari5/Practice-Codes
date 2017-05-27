#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool inDictionery(string str)
{	string dictionary[] = {"mobile","samsung","sam","sung","man","mango",
                           "icecream","and","go","i","like","ice","cream"};
     int size = sizeof(dictionary)/sizeof(dictionary[0]);
     cout<<str<<" ";
	for(int i=0;i<size;i++)
	{
	if(dictionary[i].compare(str)==0)
	{//cout<<"here2"<<endl;
	return true;
	}
}
	 return false;
	
}
int main()
{
	string str;
	cin>>str;
	int length=str.length();
	//vector<vector<bool> > vec(l,vector<bool>(l,false));
	vector<bool> vec(length+1,false);
	cout<<"length="<<length<<endl;
	for(int i=1;i<=length;i++)
	{
		if(vec[i]==false && inDictionery(str.substr(0,i))){
			cout<<"here1"<<endl;
		vec[i]=true;
		}
		if(vec[i]==true)
		{cout<<"here3"<<endl;
		if(i==length)
		{	
			cout<<"true"<<endl;
			return 0;
		}
		
		for(int j=i+1;j<=length;j++)
		{//cout<<"here4"<<endl;
			if(vec[j]==false && inDictionery(str.substr(i,j-i))){
				cout<<"here5"<<endl;
				cout<<j<<" ";
		vec[j]=true;
		}
		if(j==length&&vec[j]==true)
		{cout<<"here6"<<endl;
		cout<<"true"<<endl;
			return 0;
		}
		}
	}
}
cout<<"false"; 
	return 0;
}