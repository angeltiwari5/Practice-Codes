#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <set>
using namespace std;
void tokenize (const string & input, vector <string> & vec){
	stringstream ss (input);
	string temp;
	while (  getline(ss,temp,' ')){
		vec.push_back(temp);
		//cout << "hgjhg";
	}
	//cout << vec.size();
	return ;
}
void print (vector <string> vec) {
	for( int i = 0;i < vec.size(); i++){
		cout << vec[i] <<endl;
	}
	return ;
}
void convert(map<string,int> mp, set<string> splitter, vector<string> vec){
	int result = 0;
	int partial = 0;
	for( int i = 0;i < vec.size(); i++){
		if( splitter.find(vec[i]) != splitter.end()){
			if( partial == 0)
				partial = 1;
			partial *= mp[vec[i]];
			result += partial;
			partial = 0;
		}
		else {
			if( vec[i] =="hundred"){
				if( partial == 0)
					partial = 1;
				partial *= mp[vec[i]];
			}
			else {
				partial += mp[vec[i]];
			}
		}
	}
	result += partial;
	cout << result;
	return ;
}
int main() {
	string input;
	//cin >> inpu
	getline(cin ,input);
	//cout << input ;
	vector<string> tokens;
	tokenize(input, tokens);
	map<string,int> mp;
	mp.insert(pair <string, int> ("one" ,1));
	mp.insert(pair <string, int> ("two" ,2));
	mp.insert(pair <string, int> ("three" ,3));
	mp.insert(pair <string, int> ("four" ,4));
	mp.insert(pair <string, int> ("five" ,5));
	mp.insert(pair <string, int> ("six" ,6));
	mp.insert(pair <string, int> ("seven" ,7));
	mp.insert(pair <string, int> ("eight" ,8));
	mp.insert(pair <string, int> ("nine" ,9));
	mp.insert(pair <string, int> ("ten" ,10));
	mp.insert(pair <string, int> ("eleven" ,11));
	mp.insert(pair <string, int> ("twelve" ,12));
	mp.insert(pair <string, int> ("thirteen" ,13));
	mp.insert(pair <string, int> ("fourteen" ,14));
	mp.insert(pair <string, int> ("fifteen" ,15));
	mp.insert(pair <string, int> ("sixteen" ,16));
	mp.insert(pair <string, int> ("seventeen" ,17));
	mp.insert(pair <string, int> ("eighteen" ,18));
	mp.insert(pair <string, int> ("nineteen" ,19));
	mp.insert(pair <string, int> ("twenty" ,20));
	mp.insert(pair <string, int> ("thirty" ,30));
	mp.insert(pair <string, int> ("forty" ,40));
	mp.insert(pair <string, int> ("fifty" ,50));
	mp.insert(pair <string, int> ("sixty" ,60));
	mp.insert(pair <string, int> ("seventy" ,70));
	mp.insert(pair <string, int> ("eighty" ,80));
	mp.insert(pair <string, int> ("ninety" ,90));
	mp.insert(pair <string, int> ("hundred" ,100));
	mp.insert(pair <string, int> ("thousand" ,1000));
	mp.insert(pair <string, int> ("million" ,1000000));
	mp.insert(pair <string, int> ("billion" ,1000000000));
       set<string> splitter;
       splitter.insert("thousand");
       splitter.insert("million");
       splitter.insert("billion");
      convert(mp, splitter, tokens);
    
	//print(tokens);
	return 0;
	
}