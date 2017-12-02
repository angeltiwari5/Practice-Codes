#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool isSquare(int n) {
    if (n < 0)
        return false;
    int root(round(sqrt(n)));
    return n == root * root;
}
int main(){
	int n;
	vector<int> vec;
	 cin>> n;
	  for( int i =0;i<n;i++){
	  int x;
	  cin>>x;
	  vec.push_back(x);
	  }
	  int count =0;
	  for( int i =0;i<numberList.size();i++){
	   for( int j =i+1;j<numberList.size();j++){
	   if(isSsquare(numberList[i]+numberList[j]))
	   	count++;
	   }
	  }
	  cout << count;
	  return 0;
}
