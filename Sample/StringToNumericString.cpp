#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	string result="";
	if(str.find_first_not_of("abcdefghijklmnopqrstuvwxyz")!=std::string::npos)
	{
		cout<<"none";
		return 0;
	}	
	for( int i = 0; i < str.size(); i++){

		result += to_string(str[i]-'a');
	}
	cout << result;
	return 0;
}