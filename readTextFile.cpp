#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include<map>
using namespace std;
// int main(){
// 	ifstream inFile;
// 	inFile.open("sample.txt");
// 	if(!inFile)
// 	{
// 	cout<<"unable to open"<<endl;
// 	exit(1);
// 	}
// 	//cout << inFile;
// 	int sum = 0;
// 	int x;
// 	// while(inFile>>x){
// 	// sum+= x;
// 	// }
// 	string str;
// 	while(getline(inFile,str,'\n')){
// 		// stringstream s(str);
// 		// int x =0;
// 		// str>>x;
// 		//sum+=x;
// 		 //stoistr;
// 		x= stoi(str);
// 		cout<<str<<endl;
// 		sum+= x;
// 	}
// 	inFile.close();
// 	// cout<<sum;
// 	return 0;
// }
string trim(string const& str)
{
    string word;
    stringstream stream(str);
    stream >> word;
    cout<< word<<endl;
    return word;
}
int main(){
	ifstream inFile;
	inFile.open("sample.txt");
	if(!inFile)
	{
		cout<< "unable to open";
		exit(1);
	}
	string str;
	vector<string> vec;
	vector<string>innerVec;
	while( getline(inFile,str,'\n')){
		vec.push_back(str);
	}

	inFile.close();
	// for( int i =0;i<vec.size();i++){
	// 	stringstream ss(vec[i]);
	// 	string temp;
	// 	while(getline(ss,temp,':'))
	// 		innerVec.push_back(temp);
	// 	//cout<<vec[i]<<endl;
	// }
	// string t = "   the";
	// size_t index = t.find_first_not_of(" ");
	//cout<<index<<endl;
	map<string,int> mp;
	for( int i =0;i<vec.size();i++){
		if(vec[i][0]=='{')
			continue;
		cout<<vec[i]<<endl;
		size_t index = vec[i].find_first_not_of(" ");
		cout<<index<<vec[i][index]<<endl;
		
			cout<<"here1";
			for( int j = index;j<vec[i].size();j++){
				if(vec[i][j]=='"'){
					cout<<"here";
					string temp="";
					j++;
					while(vec[i][j]!='"'){
						temp += innerVec[i][j];
						j++;
					}
					cout<<temp<<endl;
					mp[temp]++;
				}
			
		}

		//string s = trim(vec[i]);
	//	cout << innerVec[i]<<endl;
	}
	int freq = 0;
		for( map<string,int>:: iterator it = mp.begin();it!=mp.end();it++){
			freq = max( freq, it->second);
		}
		vector<string> result;
		for(map<string,int>:: iterator it = mp.begin();it!=mp.end();it++ )
		{
			if(it->second == freq)
				result.push_back(it->first);
		}
		for( int i =0;i<result.size();i++){
			cout<<result[i]<<endl;
		}
	return 0;
}