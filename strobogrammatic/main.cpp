#include <iostream>
#include <map>
using namespace std;
int main() {
   string num;
    cin>> num;
    map < char, char> mp;
    mp['0']='0';
    mp['1']='1';
    mp['6']='9';
    mp['8']='8';
    mp['9']='6';
    int right = num.length()-1;
    for( int i =0;i<=right;i++,right-- )
    {
        if(mp.find(num[i])==mp.end() || mp.find(num[right])==mp.end() || mp[num[i]]!=num[right])
        {
            cout << "No"<< endl;
            return 0;
        }

    }
    cout <<"yes "<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}