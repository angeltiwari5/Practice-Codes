#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> fourSum( vector<int>  vec, int target){
	cout << "ghfhgf";
	sort(vec.begin(), vec.end());
	vector<int> result;
	for( int i = 0; i<vec.size(); i++){
		for( int j = 1; j < vec.size(); j++){
			int low = j+1;
			int high = vec.size()-1;
			int sum = vec[i] + vec[j];
			while( low < high){
				int val = vec[low] + vec[high];
				if ( val < target - sum){
					low++;
				}
				else if ( val > target- sum)
					high--;
				else{
					//cout << vec[i] << " " << vec[j] <<" " << vec[low] << " " <<vec[high];
					result.push_back(vec[i]);
					result.push_back(vec[j]);
					result.push_back(vec[low]);
					result.push_back(vec[high]);
					return result;
					//return;
					//break;
				}
			}
		}
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	vector<int> vec;
	for( int i = 0; i < n; i++){
		int x;
		cin>>x;
		vec.push_back(x);
	}
	int target ;
	cin >> target;
	vector<int> result = fourSum(vec, target);
	for( int i = 0; i< 4; i++){
		cout << result[i]<<endl;
	}
	
	return 0;

}