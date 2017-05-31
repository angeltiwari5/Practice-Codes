#include <iostream>
using namespace std;
//o(n)
void mingapSol1(int n)
{
    int max=0;
    int  count =-1;
    int r=0;
    while(n>0)
    {
         r = n & 1;
        n = n>>1;
        cout<<n<<" "<<endl;
        if(r==0 && count>=0)
        {
            count++;
            cout<< count<<"ghfhgfhg";
        }
        if(r == 1 )
        {
            max = count>max?count:max;
            count=0;
            cout<< count<<"here";
        }

    }
    cout<<max;
    return;;
}
//void maxgapsol2(int n)
//{

//}
int main() {
     int n;
    cin >> n;
    int r = n & -n;
    cout<<r <<"first here";
    mingapSol1(n);
    // maxgapsol2(n);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}