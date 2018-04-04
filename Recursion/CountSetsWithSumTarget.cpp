#include <iostream>
#include <vector>
//recurrence method
// assuming sorted array
using namespace std;
int recur( vector<int> input, int target, int i){
	// base case
	if( target == 0)
		return 1;
	else if ( target < 0)
		return 0;
	else if ( i < 0)
		return 0;
	else if ( target < input[i])
		return recur( input, target, i-1);
		// 2 cases- take this number or not
	else return recur( input, target - input[i], i-1) + recur ( input, target, i-1);
}
int countSets( vector<int> input, int target){
	return recur( input, target, input.size()-1);
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