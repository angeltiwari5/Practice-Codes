#include <iostream>
#include <vector>
using namespace std;


int main() {
    int tests;
    cin >> tests;
    while( tests-- )
    {
         int n,m;
        cin>>n >> m;
        vector< vector <int > > vec;
        for(int i=0; i< n;i++)
        {vector <int> v;
            for( int j=0;j<m;j++)
            {

                cin >> v[j];
            }
            vec.push_back(v);
        }
        int count =0;
        for( int i =0 ;i < n;i++)
        {
            for( int j=0;j<m;j++)
            {

            }
        }
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}