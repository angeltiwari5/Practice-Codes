#include <iostream>
#include <vector>
using namespace std;
// O(n)
vector<int> findIndices( vector<int> input){
	//cout << "ere";
	int n = input.size();

	vector<int> result;
	if( n == 0)
		{
			result.push_back(-1);
			return result;
		}
	vector<int> preSum(n,0);
	vector<int> index(n);
	preSum[0] = input[0];
	for( int i = 1; i < n; i++)
	{
		preSum[i] = preSum[i-1] + input[i]; 
	}
	int count = 0;
	int start = 0;
	int SubarrraySum = preSum[n-1]/3;
	for( int i = 0;i < n ; i++ ){
		if( preSum[i] % SubarrraySum == 0 ){
			count++;
			index[start++] = i;
		}

	}
	if( count >= 3){
		result.push_back(index[0]);
		result.push_back(index[1]);
	}
	else 
		result.push_back(-1);
	return result;
}
int main() {
	int n;
	cin >> n;
	vector<int> input;
	for( int i = 0 ;i < n; i++){
		int x;
		cin >> x;
		input.push_back(x);
	}
	vector<int> result;
	result = findIndices( input);
	for( int i = 0;i<result.size();i++)
	cout<< result[i]<<endl;
	return 0;
}