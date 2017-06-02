#include <iostream>
#include <vector>
using namespace std;
int main() {
     int tests;
     cin>> tests;
    while( tests--){
        int n;
        cin>>n;
        vector <int > dp()
        vector<vector< char > > vec;
        for( int i =0;i< 2;i++)
        {   vector<char> v;
            for( int j=0;j<n;j++)
            {
            char a;
            cin>> a;
            v.push_back(a);
        }
        vec.push_back(v);
    }
       /* for( int i=0;i<2;i++)
        {
            for( int j=0;j<n;j++)
            {
                cout<< vec[i][j]<<" ";
            }
            cout<< endl;
        }*/
         int row=0;
        for( int i =0;i< vec[0].size();i++)
        {//cout<<"here"<<endl;
          if( i+1<vec[0].size() && ((vec[0][i]=='*'&& vec[0][i+1]=='*')||(vec[0][i]=='*'&& vec[1][i+1]=='*')))
              {

              row++;
          }

        }
        for( int i=0;i<n;i++)
        {
            if(vec[1][i]=='*'&&vec[0][i]=='*')
            {
                row++;
                break;
            }
        }
        cout<<row<<endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}