#include <iostream>
#include <map>
using namespace std;

void logger( string s, int t, map<string,int> & m){

    if(m.find(s)==m.end())
    {
        m.insert(pair<string, int>(s,t));
        cout <<"yes" <<endl;
    }
    else if(t - m[s] >= 10)
        {
            m[s] =t;
            cout << "yes" <<endl;
        }

    else cout << "no" <<endl;
}

int main() {
    int n;
    cin>>n;
    map<string,int > m;
    while(n--)
    {
        string str;
        cin>>str;

        int time;
        cin>>time;
        logger(str,time,m);

    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}