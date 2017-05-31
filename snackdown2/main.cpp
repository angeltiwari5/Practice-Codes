#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s;
    cin>>s;
    while(s--)
    {
        int parts;
        cin >> parts;
        bool flag = true;

        vector<int> v;
        for(int i =0;i<parts;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(parts%2==0) {
            cout << "no" << endl;
            //continue;
        }
        else if(v[0]==1 && v[v.size()-1]==1)
        {
            int low = 1;
            int high = v.size()-2;
            while(low<high)
            {
                //flag = false;
                if(v[low]==v[low-1]+1 && v[high] == v[high-1]-1 && v[low]==v[high])
                {
                   //flag = true;
                    //continue;
                    low++;
                    high--;
                }
                else{
                    //cout<< "no"<<endl;
                    flag=false;
                    break;
                }

            }

            if(flag == true && v[low]==v[low-1]+1)
            {
                cout<<"yes"<<endl;

            }
            else{
                cout<<"no"<<endl;
            }



        }
        else {
            cout <<"no"<<endl;
        }

    }

    return 0;
}