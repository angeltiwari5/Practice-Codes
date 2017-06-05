#include <iostream>
#include <map>
using  namespace std;
int main() {
    string str;
    cin>> str;
    map < char, int > m;
    for( int i =0;i< str.length();i++)
    {
        if(m.find(str[i])!=m.end())
            m[str[i]]++;
        else {
            m.insert(pair<char,int>(str[i],1));
        }
    }
     int odd =0;
    for(map<char,int> ::iterator it=m.begin();it!=m.end();it++)
    {
        if(it->second %2 )
        {
            odd++;
        }
    }
    if(odd>1)
        cout <<"false";
    else
        cout<<"true";
    std::cout << "Hello, World!" << std::endl;
    return 0;
}