#include<string>
#include<iostream>
using namespace std;
void reversestring(string &str, int low,int r)
{
	char temp;
	if(low>=r)
	return ;
	temp=str[low];
	str[low]=str[r];
	str[r]=temp;
	reversestring(str,low+1,r-1);
}
int main()
{
	string str;
	cin>> str;
	reversestring(str,0,str.length()-1);
	cout<<str;
	return 0;
}
//check double
bool isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    if(*endptr != '\0' || endptr == str)
        return false;
    return true;
}