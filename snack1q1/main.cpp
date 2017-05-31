#include <iostream>
#include <vector>

using namespace std;
int main() {
    int tests;
    cin >> tests;
    while(tests--){
    int n;
    int m;
    cin>> n;
    cin >>m;
        vector< pair<int,int> > vec;
        while(m--){
            pair<int, int> teams;
            cin>> teams.first;
            cin >> teams. second;
            vec.push_back(teams);
        }
        if(n%2==0)
        {
            cout << "yes"<<endl;
        }
        else
            cout << "no" << endl;

    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}