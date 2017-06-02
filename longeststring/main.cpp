#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  string str;
    getline( cin,str);


    string str1;

    getline( cin,str1);
    //for sring a
    int end = 0;
    int init_pos=0;
    string s;
    cout<<"first string"<<endl;
    for( int i =0;i< str.length();i++)
    {
        cout<<str[i];
    }
    cout<<endl<<"first string"<<endl;
    for( int i =0;i< str1.length();i++)
    {
        cout<<str1[i];
    }
    vector <int > value_a ;
    for( int i = 0; i <= str.length(); i++)
    {
        if(str[i] == ' '|| i == str.length())
        {
            end= i-init_pos;
            //cout<< end <<" endpos ";
            s = str.substr(init_pos,end);
            init_pos = i+1;
            //cout<< init_pos<<" inti pos ";
           // cout<<s <<" substr ";
        }
        else {
            continue;
        }
        vector< int > vector1(26,0);
        for( int j = 0;j<s.length();j++)
        {
            vector1[s[j]-'a']++;
        }

        for(int j=0;j<vector1.size();j++)
        {
            if(vector1[j]!=0)
            {
                value_a.push_back(vector1[j]);
                break;
            }
        }

    }
    for(int i = 0;i<value_a.size();i++)
    {
        cout << value_a[i]<<" "<<endl;
    }
    int init1=0;
    int end1=0;
    for( int i =0;i<= str1.length();i++)
    {
        if(str1[i] == ' '|| i == str1.length())
        {
            end1 = i - init1;
            s = str1.substr(init1,end1);
            init1 = i+1;
            cout<<s <<" substr ";
        }
        else {
            continue;
        }
        vector< int > vector1(26,0);
        for( int j = 0;j<s.length();j++)
        {
            vector1[s[j]-'a']++;
        }

         int ind;
        int count=0;
        for(int j=0;j<vector1.size();j++)
        {
            if(vector1[j]!=0)
            {
                ind= j;
                break;
            }
        }
        for(int j=0;j<value_a.size();j++)
        {
            if(value_a[j]<vector1[ind])
                count++;
        }
        cout<< count << endl;

    }

    return 0;
}