#include <iostream>
#include <vector>
//dynamic programming method
// assuming sorted array
using namespace std;
int countSets(vector<int> input, int target){
	vector< vector<int> > dp(input.size()+1,vector<int>(target+1,0));
	//dp[0] = 1;
	for( int i = 0 ; i <= input.size(); i++){
		dp[i][0] = 1;
	}
	for( int i = 1 ; i <= target ; i++ ){
		dp[0][i] = 0;
	}
	for ( int i = 1; i <= input.size(); i++  ){
		for( int j = 1 ;  j <= target; j++){
			if( j < input[i])
				dp[i][j] = dp[i-1][j];
			else 	
				dp[i][j] = dp[i-1][j] + dp[i-1][j - input[i]];
		}
	}
	return dp[input.size()][target];
}
int main(){
 	vector<int> input;
 	int n ;
 	cin >> n;
 	for ( int i = 0; i< n; i++){
 		int x ;
 		cin >> x;
 		 input.push_back(x);
 	}
 	 int target;
 	 cin>> target;
 	int result = countSets( input, target);
 	cout << result;
 	return 0;
 }