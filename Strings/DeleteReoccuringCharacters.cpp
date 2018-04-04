#include <iostream>
#include <string>
#include <set>
using namespace std;
void deleteReoccuringCharacter( string input){
	set <char> characters;
	string result = "";
	for( int i = 0; i< input.length(); i++){
		if(characters.find(input[i]) == characters.end()){
			characters.insert(input[i]);
			result+=input[i];
		}
	}
	cout<< result;
}
int main(){
	string input;
	cin >> input;
	deleteReoccuringCharacter(input);
	return 0;
}