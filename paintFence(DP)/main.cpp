#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >>k;
    int dp[] = {0,k,k*k,0};
    if(n<=2){
        cout << dp[n];
        return 0;
    }
    for( int i =3;i<=n ;i++)
    {
        dp[3]= (k-1)*(dp[1]+dp[2]);
        dp[1] = dp[2];
        dp[2] = dp[3];
    }
    cout <<dp[3];
    std::cout << "Hello, World!" << std::endl;
    return 0;
}