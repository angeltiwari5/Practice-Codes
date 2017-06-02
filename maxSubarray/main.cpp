#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector < int > vec;
    int n;
    cin>> n;
    for( int i=0;i < n; i++)
    { int x;
        cin>> x;
        vec.push_back(x);

    }
    int k;
    cin>> k;

    int index=0;

    int sum=0;
    for( int i=0;i<k;i++)
    {
        sum= sum + vec[i];
    }
    int current = sum;
    for( int i = k;i < vec.size() ;i++)
    {
        current = current + vec[i] - vec[i-k];
        if( current >= sum )
        {
            index = i-k+1;
            sum = current;
        }

    }
    for( int i=0;i<k;i++)
    {
        cout<< vec[index] <<"," <<endl;
        index++;
    }
    return 0;
}