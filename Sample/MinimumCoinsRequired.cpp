#include <iostream>
#include <vector>
using namespace std;
//recursive solution
int coinChange(vector<int> vec, int target){
	if(target == 0 )
	return 0;
	 int result = INT_MAX;
	 for( int i = 0; i< vec.size(); i++){
	 	if( vec[i] <= target)
	  {int temp = coinChange(vec, target - vec[i]);
	  if( temp != INT_MAX && temp + 1 < result){
	  	result = temp + 1;
	  }
}
	 }
	 return result;
}
// dp solution
int coinDp ( vector<int> coins, int target){
	int n = coins.size();
	/*vector<int> dp(n+1, INT_MAX);
	dp[0] = 0;
	for( int i = 1;i<=target;i++){
		for( int j = 0; j<n;j++ ){
			if( vec[j] <= i)
			{int sub = dp[i-vec[j]];
			if( sub != INT_MAX && sub +1 < dp[i]){
				dp[i] = sub+1;
			}
		}
		}
	}
	return dp[n];*/
	int table[n+1];
 
    // Base case (If given value V is 0)
    table[0] = 0;
 
    // Initialize all table values as Infinite
    for (int i=1; i<=n; i++)
        table[i] = INT_MAX;
 
    // Compute minimum coins required for all
    // values from 1 to V
    for (int i=1; i<=n; i++)
    {
        // Go through all coins smaller than i
        for (int j=0; j<n; j++)
          if (coins[j] <= i)
          {
              int sub_res = table[i-coins[j]];
              if (sub_res != INT_MAX && sub_res + 1 < table[i])
                  table[i] = sub_res + 1;
          }
    }
    return table[n];
}
int main(){
	int n;
	cin >> n;
	vector<int> vec;
	for( int i = 0;i < n; i++){
		int x;
		cin >> x;
		vec.push_back(x);
	}
	int target;
	cin >> target;
	//int result  =  coinChange( vec, target);
	int result2  =  coinDp( vec, target);
	//cout << result<<" "<<result2;
	cout<< result2;

	return 0;

}