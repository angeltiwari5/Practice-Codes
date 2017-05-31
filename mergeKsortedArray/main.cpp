//need to know the time complexity
#include <iostream>
#include <queue>
using namespace std;
int index1=0;
struct comp{
    bool operator()(pair<vector<int>,int> &a, pair<vector<int>,int> &b)
    {
        return a.first[index1]>b.first[index1];
    }
};
/*struct comp{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};*/

void merge(vector<vector<int>> v)
{
    //priority_queue<vector<int>, vector<vector<int>>,comp> pq;
   //priority_queue<pair<int,int>, vector<pair<int,int>>,comp> pq;
    priority_queue<pair<vector<int>,int>, vector<pair<vector<int>,int>>,comp> pq;
    int totalsize = 0;
    for( int i=0;i<v.size();i++)
    {
        pq.push(make_pair(v[i],index1));
        totalsize=totalsize+v[i].size();
    }
  //int result1= pq.top();
   // pq.pop();
    vector<int> result;
    int index=0;
   // int indexTop=0;
    while(!pq.empty())
    {
        /*for(int i=0;i<pq.top().size();i++ )
        {
            result.push_back(pq.top()[i]);
        }*/
        //pair<int,int> pair1top=pq.top();
        result[index++]=pq.top().first[index1];
        //result.push_back(pair1top.first);
        pq.pop();
        if(index1<totalsize - 1)
            pq.push(make_pair(pq.top().first,index1+1));
    }


    for( int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

}
int main() {
    vector<vector<int>> vec;
    vector<int> temp;
    int n;
    for( int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
          cin>> n;
            temp.push_back(n);
        }
        vec.push_back(temp);
        temp.resize(0);
    }
    merge(vec);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}