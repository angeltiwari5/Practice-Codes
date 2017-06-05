#include <iostream>
#include <vector>
using namespace std;
void  print( vector <string >vec){
    for( int i=0;i<vec.size() ;i++)
        cout<<vec[i] <<" ";
    return ;
}
int main() {
    string str;
    cin >> str;
    //flip ()
    vector < string > vec;
    if( str.length() < 2) {
        print(vec);
        return 0;
    }
    for( int i =0;i < str.length()-1 ;i++)
    {
        if( str[i] !='+' || str[i+1] != '+')
            continue;
        string res = str.substr(0,i) + "--" + str.substr(i+2);
        vec.push_back(res);
    }
    print(vec);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}