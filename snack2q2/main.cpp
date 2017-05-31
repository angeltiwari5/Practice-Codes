#include <iostream>
#include <vector>
using namespace std;
void dfs( vector< vector<char> > v, vector< vector<int> > & flag, int i, int j)
{
    flag[i][j]=1;
    //if(i+1<v.size() && j+1< v[0].size() && flag[i+1][j+1]==0)
    //{
      //  dfs(v,flag,i+1,j+1);
   // }
   // if(i-1>=0 && j-1 >= 0 && flag[i-1][j-1]==0)
    //{
      //  dfs(v,flag,i-1,j-1);
    //}
    if(i+1<v.size()  && flag[i+1][j]==0 && v[i+1][j]=='#')
    {
        dfs(v,flag,i+1,j);
    }

    else if(i-1>=0  && flag[i-1][j]==0 && v[i-1][j]=='#')
    {
        dfs(v,flag,i-1,j);
    }

    else if(j+1<v[0].size()  && flag[i][j+1]==0 && v[i][j+1]=='#')
    {
        dfs(v,flag,i,j+1);
    }

    else if(j-1>= 0  && flag[i][j-1]==0 && v[i][j-1]=='#')
    {
        dfs(v,flag,i,j-1);
    }
    return;

}
int main() {
    int n;
    cin>> n;
    while( n--)
    {
    int col;
        cin>>col;
        vector< vector <char> > vec;
        vector< vector <int> > vec1(2,vector<int>(col,0));
        for( int i=0;i<2;i++)
        {   vector<char> v;
            for( int j =0;j<col;j++)
            {
                char ch;
                cin>>ch;

                v.push_back(ch);

            }
            vec.push_back(v);
        }

        for( int i=0;i<2;i++)
        { bool flag=false;
            for( int j=0;j<col;j++)
            {
              //  cout<<vec[i][j];
                if(vec[i][j]=='#')
                {
                    dfs(vec,vec1,i, j);
                    flag=true;
                    break;
                }
            }
            if(flag==true)
                break;

            //cout<<endl;
        }

       /* for(int i =0; i< 2; i++)
        {
            for( int j=0;j<col;j++)
                cout<< vec1[i][j]<<" ";
            cout << endl;
        }*/
        bool flag1=false;
        for(int i=0;i<2;i++)
        {
            for( int j=0;j<col;j++)
            {
                if(vec[i][j]=='#' && vec1[i][j]==0)
                {
                    cout<<"no"<<endl;
                    flag1=true;
                    break;
                }

            }
            if(flag1)
                break;
        }
        if(!flag1)
            cout << "yes" <<endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}