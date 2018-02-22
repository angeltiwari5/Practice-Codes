#include <iostream>
#include <vector>
using namespace std;
int JollyJumper(vector<int> input){
	int n = input.size();
	vector<bool> check(n,false);
	for( int i = 0; i < n-1; i++){
		int difference = abs(input[i]-input[i+1]);
		if(difference == 0 || difference > n-1 || check[difference])
		 return 0;
		check[difference] = true;
	}
	return 1;
}
int main() {
	int n;
	cin >> n;
	vector<int> vec;
	 for( int i = 0;i<n ;i++){
	 int x;
	  cin>> x;
	  vec.push_back(x);
	 }
	 int result = JollyJumper(vec);
	 cout << result<<endl;
	 int abc = 'a' - 'a';
	 cout<< abc;
	 return 0;
}