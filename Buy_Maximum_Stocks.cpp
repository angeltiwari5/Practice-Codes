#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


static bool mycomp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.first==b.first?a.second>b.second:a.first<b.first;
    }
int main() {
    
    int days;
    cin >> days;
    
    vector<int> prices;
    for( int i =0;i<days;i++){
        int x;
        cin>> x;
        prices.push_back(x);
    }
    long long int k;
    cin>>k;
   vector<pair<int,int>> price_day;
    for( int i =0;i<days;i++){
        price_day.push_back(make_pair(prices[i],i+1));
    }
    sort(price_day.begin(),price_day.end(),mycomp);
    long long int count = 0;
    for( int i =0;i<days && k>0;i++){
        //cout<<price_day[i].first<<" "<<price_day[i].second<<endl;
        if(price_day[i].first* price_day[i].second<=k){
            count+= price_day[i].second;
           k = k -  price_day[i].first* price_day[i].second;
        }
        else {
            count+= k/price_day[i].first;
           // k = k - ((k/price_day[i].first)*price_day[i].first);
          //  cout<<"k = "<< k;
            break;
        }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}