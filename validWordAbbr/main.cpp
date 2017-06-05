#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin>> word;
    string abr;
    cin >> abr;
    int i =word.size();
    int j = abr.size();
    int m =0;
    int n=0;
    while(m < i && n < j)
    {
        if(abr[n]>='0'&&abr[n]<='9')
        {
            if(abr[n]=='0')
            {
                cout<<"false";
                return 0;
            }
             int val=0;
            while(n<j && abr[n]>='0'&&abr[n]<='9' ){
                val = val*10 + abr[n]-'0';
                n++;
            }
            m = m+val;

        }
        else {
            if(word[m++] !=abr[n++])
            {
                cout<<"false";
                return 0;
            }
        }
    }
    cout << (m==i && n==j);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}