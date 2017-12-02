#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(vector<int>prices) {
        int  profit = 0;
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] > prices[i - 1]) profit += prices[i] - prices[i - 1];
        return profit;
    }
int main() {
    int q ;
    cin>>q;
    while(q>0){
        vector<int> price;
        int k;
        cin >> k;
        int n;
        cin>>n;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            price.push_back(x);
        }
       // if(k >= n/2) cout<< solve(price)<<endl;
        vector<vector<int>> dp(k+1,vector<int>(n,0));
        for (int i = 1; i <= k; i++) {
            int tmpMax =  -price[0];
            for (int j = 1; j < n; j++) {
                dp[i][j] = max(dp[i][j - 1], price[j] + tmpMax);
                tmpMax =  max(tmpMax, dp[i - 1][j - 1] - price[j]);
            }
        }
        cout<< dp[k][n - 1]<<endl;
        q--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
