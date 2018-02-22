#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*void naivePatternMatch(string str){
	int len = str.length();
	int k = 0;
	for(k = 1;k <= str.length() ;k++){
		for( int i = 0; i<= len - k ;i++){
			int j = 1;
			string substring = str.substr(i,k);
			for( ;j<k;j++){
				if(str[i+j]!= substring[j])
					break;

			}
			if( j == k)
				{
					cout<< k;
					return ;
				}
		}
	}
	cout << len<< "  not repeated ";
	return ;
}*/
/*void naivePatternMatch(string str){
	int len = str.length();
	int minLen = len;
	for( int k = 1;k<=str.length();k++){
		string sub = str.substr()
	}
}*/
/*int  prefix_function(string pattern)
{	int psize = pattern.length();
     int pi[psize];
    pi[0] = 0;
    for(int i = 1; i < psize; i ++ ) {
         
        int j = pi[i-1];
         
        while (j > 0 && pattern[j] != pattern[i] ) {
             
            j  = pi[j-1];
        }
        if( pattern[i] == pattern[j ] ) ++ j;
        pi[i ] = j ;
    }
     
    return pi[psize - 1];
}*/
void lps(string str){
	int len = 0;
	int stringLen = str.length();
	cout << stringLen <<" kjjkh "<<endl;
	vector<int>lp(stringLen , 0);
	int i = 1;
	while( i < stringLen){
		if(str[len] == str[i]){
			len++;
			lp[i] = len;
			i++;
		}
		else {
			if(len != 0){
				len = lp[len-1];
			}
			else {
				lp[i] = 0;
				i++;
			}
		}
	}

	lp[stringLen-1] == 0? cout << stringLen : cout << (stringLen - lp[stringLen-1]);
	return ;
}
int main(){
	string str;
	 cin >> str;
	 //naivePatternMatch(str);
	 lps(str);
	 //int result = prefix_function(str);
	 //cout << result;
	 return 0;
}