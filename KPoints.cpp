#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
double getDist(pair<int,int> a, pair<int,int> b){
	return sqrt(((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second)));
}
int main(){
	int n;
	cin>>n;
	int x,y;
	cin>>x;
	cin>>y;
	pair<int,int> pt;
	pt = make_pair(x,y);
	vector<pair<int,int>> vec;
	for( int i =0;i<n;i++){
	int a,b;
	cin>> a>>b;
	vec.push_back(make_pair(a,b));
	}
	//vector<double> dist;
	map<double,pair<int,int>> mp;
	for( int i =0;i<n;i++){
		double val = getDist(vec[i],pt);
		//dist.push_back(val);
		mp[val]=vec[i];
	}
	priority_queue<pair<int,int>> pq;
	for( int i =0;i<n;i++){
	if(pq.size()<k)
	pq.push(dist[i]);
	else if(dist[i]<pq.top()){
	pq.push(dist[i]);

	pq.pop();
	}
	}
	vector<pair<int,int>> result;
	for( int i =0;i<pq.size();i++){
		result.push_back(mp[pq.top()]);
		pq.pop();
	}
}