#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    string s;
    getline(cin,s);
    //cout<<s;
    cout<<"length"<<" "<<s.length()<<endl;
    string str="";
    map<char,int> m;
    char ch='a';
    for(int i=0;i<26;i++)
        {
        m[ch]=i;
        ch++;
        //cout<<ch;
        }
    for(int i=0;i<s.size();i++)
        {

            if(m.find(s[i])!=m.end())
            {
                //cout<<m.find(s[i])->second;
                //cout<<"hello";
            if(m.find(s[i])->second > 9)
                {
               str+=to_string(m.find(s[i])->second)+"#"; 
            }
            else
                str+=to_string(m.find(s[i])->second);
                //cout<<str;
            }

            else if(s[i]==' ')
            {
            str+=" ";
        }
          else if(s[i]=='.')
            {
            str+=".";
        }
         
        
        
    }
    cout<<str;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
