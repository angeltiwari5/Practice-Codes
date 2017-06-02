#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Movingavg{
private:
    queue <int> q;
    double sum;
    int winsize;
public:
    Movingavg(int size):winsize(size),sum(0){}
    double value( int val)
    {
        sum = sum+val;
        q.push(val);
        if(q.size()<=winsize){
            return sum/q.size();
        }
        else{
            sum = sum - q.front();
            q.pop();
            return  sum/q.size();
        }
    }
};
int main() {
    vector <int> v;
    for (int j = 0; j < 7; ++j) {
        int val;
        cin>>val;
        v.push_back(val);
    }

      int k;
      cin >> k;
    Movingavg mv(k);
    for( int i =0;i<7;i++)
    cout<<mv.value(v[i])<<" ";

    std::cout << "Hello, World!" << std::endl;
    return 0;
}