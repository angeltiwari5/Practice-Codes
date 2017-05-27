#include<iostream>
#include<map>
#include<climits>
#include<vector>
using namespace std;
void countPairsWithDiffK(vector<int> arr, int k)
{
    int count = 0;  // Initialize count
 
    // Initialize empty hashmap.
    //bool hashmap[MAX] = {false};
    unordered_map<int,int> m;
    // Insert array elements to hashmap
    for (int i = 0; i < arr.size(); i++)
       { //hashmap[arr[i]] = true;
            m[arr[i]]=i;
       }
 
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        if (x - k >= 0 && m.find(x-k)!=m.end())
         { 
         cout<<x<<"and"<<  m.find(x-k)->first<<endl;
         count++;
         }
        if (x + k <INT_MAX&& m.find(x+k)!=m.end())
         { 
         cout<<x<<"and"<<  m.find(x+k)->first<<endl;
         count++;
         }
         m.erase(x);
    }
    
}
int main(){
    vector<int> vec(5,0);
    for(int i=0;i<5;i++)
    {
    cin>>vec[i];
    }
    int k;
    cin>>k;

    countPairsWithDiffK(vec,k);
    return 0;
}