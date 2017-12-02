#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


float maximum(float k,float ded ){
    if(k>=ded)
        return k;
    else return ded;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    while(q>0){
        int n , k,d;
        int x;
        cin >> n;
        cin>>k;
        cin>>x;
        cin>>d;
        //cout<<"n= " <<n<<" k= "<<k<<" x= "<<x<<" d= "<<d<<endl;
        float deducted = 0.0;
        //int tot=0;
        for( int i =0;i<n;i++){
            int amt;
            cin >> amt;
           // tot = tot + amt;
           float ded = (x * amt)/100.0;
           // cout <<" deduction this time " <<ded<<" ";
            deducted = deducted +   maximum(k,ded);
            //cout<<deducted<<" ";
        }
        if( deducted <= d)
            cout<< "fee"<<endl;
        else cout<< "upfront"<<endl;
        q--;
    }
   
  
    return 0;
}
