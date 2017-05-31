#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--)
    {
        int len;
        cin>> len;
        int noq;
        cin>> noq;
        vector<int> vec;
        for( int i =0;i< len;i++)
        {
            int x;
            cin>> x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        while(noq--){
             int query;
            cin>>query;
            int count =0;
            //int diff =0;
            int j=0;
            for(int i=vec.size()-1;i>=j;i--)
            {
                if(vec[i]>=query)
                {
                    count++;
                    continue;
                }
                else {
                    int diff = query - vec[i];

                    j=j+diff;
                    if(j<i)
                    {
                        count++;
                    }

                }
            }
            cout<<count<<endl;
        }

    }
   // std::cout << "Hello, World!" << std::endl;
    return 0;
}