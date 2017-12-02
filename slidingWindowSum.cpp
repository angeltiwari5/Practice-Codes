#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void sumWin(vector<int> v, int k)
{	queue<int> q;
	int sum = 0;
	for(int i =0;i<v.size();i++ ){
		if(!q.empty() && q.front()==i-k){
		sum = sum - v[q.front()];
		q.pop();
		}
		sum = sum + v[i];
		//cout<< " i= "<< i<<" k-1 = "<<k-1<<endl;
		q.push(i);
		if( i>= k-1){
			cout<<" here ";
			cout<<sum<<endl;
		} 
	}
	return ;
}
int main(){
int n;
cin>> n;
vector<int> v;
for( int i =0;i<n;i++){
	int x;
	cin>> x;
	v.push_back(x);
}
int k ;
cin>> k;
sumWin(v,k);
return 0;
	
}