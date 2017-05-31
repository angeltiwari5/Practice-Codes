#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    char charS[256] = { 0 };
    char charT[256] = { 0 };
    int i = 0;
    for( int i=0; i< s.length();i++)
    {

        if (charS[s[i]] == 0 && charT[t[i]] == 0)
        {
            charS[s[i]] = t[i];
            charT[t[i]] = s[i];
        }
        else
        if (charS[s[i]] != t[i] || charT[t[i]] != s[i])
            return 0;
        i++;
    }
cout<< "1" ;
    return 0;
    cout << "Hello, World!" << endl;
    return 0;
}