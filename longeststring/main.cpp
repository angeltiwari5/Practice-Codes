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
    int init_pos = 0;
    string s;
   
   
    vector <int > value_a ;
    for( int i = 0; i <= A.length(); i++)
    {
        if(A[i] == ' '|| i == A.length())
        {
            end = i-init_pos;
            
            s = A.substr(init_pos , end);
            init_pos = i+1;
            
        }
        else {
            continue;
        }
        vector< int > vector1(26,0);
        for( int j = 0; j<s.length(); j++)
        {
            vector1[s[j]-'a']++;
        }

        for(int j = 0; j < vector1.size(); j++)
        {
            if(vector1[j] != 0)
            {
                value_a.push_back(vector1[j]);
                break;
            }
        }

    }
   
    int init1 = 0;
    int end1 = 0;
    vector< int > result;
    for( int i = 0; i <= B.length(); i++)
    {
        if(B[i] == ' '|| i == B.length())
        {
            end1 = i - init1;
            s = B.substr(init1,end1);
            init1 = i+1;
            
        }
        else {
            continue;
        }
        vector< int > vector1(26,0);
        for( int j = 0; j < s.length(); j++ )
        {
            vector1[s[j]-'a']++;
        }

         int ind=0;
        int count=0;
        for(int j=0;j<vector1.size();j++)
        {
            if(vector1[j]!=0)
            {
                ind= j;
                break;
            }
        }
        for( int j = 0; j < value_a.size(); j++)
        {
            if( value_a[j] < vector1[ind] )
                count++;
        }
       
        result.push_back(count);
    }
    return result;

    return 0;
}