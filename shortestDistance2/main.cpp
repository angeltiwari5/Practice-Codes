#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
void mapping(vector<string> v, map<string,vector<int>> & mymap )
{
    for( int i=0;i<v.size();i++)
    {
        if(mymap.find(v[i])!=mymap.end())
        {
            mymap[v[i]].push_back(i);
        }
        else{
            vector<int> vec;
            vec.push_back(i);
            mymap.insert(pair<string,vector<int>>(v[i],vec));
        }
    }
}
int shortDistance(string s1, string s2, map<string,vector<int>>  mymap )
{
    int i=0;
    int j=0;
    int result = INT_MAX;
    while( i< mymap[s1].size()&& j< mymap[s2].size())
    {
     result = min(result,abs(mymap[s1][i]-mymap[s2][j]) );
        if(mymap[s1][i]< mymap[s2][j])
            i++;
        else j++;
 }
    return result;
}
int main() {
    vector<string> vec;
    int n;
    cin>>n;
    string str;
    for( int i=0;i<n;i++)
    {
        cin>>str;
        vec.push_back(str);
    }
    string word1;
    string word2;
    cin>> word1;
    cin>>word2;
    map<string, vector<int>> mymap;
    mapping(vec, mymap);
    int result = shortDistance(word1,word2,mymap);

    std::cout << result << std::endl;
    return 0;
}