#include <iostream>
#include <string>
#include <algorithm>
#include <climits> 
#include <vector>
using namespace std;
int main() {
    int price;
    int wrapper;
    int friends;
    cin >> price;
    cin >> wrapper;
    cin >> friends;
    vector <int> money(friends,0);
    vector <int> choco(friends,0);
    int n;
    for( int i = 0; i < friends; i++ )
    {
    	cin >> n;
    	money[i] = n;
    }
    
    for( int i = 0; i < friends ; i++ )
    {
    	if( price <= money[i] )
    	{
    		choco[i] = money[i]/price;
    		int tot_wrappers = choco[i];
    		while( tot_wrappers >= wrapper )
    		{

    			choco[i] = choco[i]+( tot_wrappers )/wrapper;
    			tot_wrappers = tot_wrappers/wrapper + tot_wrappers%wrapper;
    		}
    	}
    	else
    		choco[i] = 0;
    }
    for( int i=0; i<friends; i++ )
    {
    	cout << choco[i] << endl;
    }
    return 0;
}
