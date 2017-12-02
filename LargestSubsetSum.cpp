#include <bits/stdc++.h>

using namespace std;

vector <long> maxSubsetSum(vector <int> k) {
    // Complete this function
     vector<long> result;
    long sum = 0;
    for( int i = 0;i<k.size();i++){
        sum = 0;
        for( int j = 1;j<=sqrt(k[i]);j++){
            if(k[i]%j==0){
                if( j == k[i]/j)
                    sum+= j;
                else 
                    sum+= (j+k[i]/j);
            }
            
                
        }
        result.push_back(sum);
    }
    return result;
}

int main() {
    int size;
    cin >> size;
    vector<int> k(size);
    for(int k_i = 0; k_i < size; k_i++){
       cin >> k[k_i];
    }
    vector <long> res = maxSubsetSum(k);
    for (ssize_t i = 0; i < res.size(); i++) {
       // cout << res[i] << (i != res.size() - 1 ? " " : "");
        cout<<res[i]<<endl;
    }
    cout << endl;


    return 0;
}
