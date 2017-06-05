#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string > vec;
    for( int i=0;i<4;i++)
    {
        string s;
        cin>> s;
        vec.push_back(s);
    }
    if(vec.size()==0)
    {
        cout<<"yes"<<endl;
        return 0;
    }
    for( int i =0;i< vec.size();i++)
    {
        for( int j=0;j<vec[i].size();j++)
        {
            if(j >= vec.size() || i >= vec[j].size() || vec[i][j]!=vec[j][i])
            {
                cout<<"False";
                return 0;
            }
        }
    }
    cout<<"YEs";
    std::cout << "Hello, World!" << std::endl;
    return 0;
}