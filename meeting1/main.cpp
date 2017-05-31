#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct Interval{
int start;
int end;

Interval() : start(0), end(0) {}
   Interval(int s, int e) : start(s), end(e) {}
};
struct comp1{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

bool meetings(vector<Interval>& intervals)
{
    auto comp = [](const Interval& i1, const Interval& i2){ return i1.start < i2.start; };
    sort(intervals.begin(),intervals.end(),comp);
    for( int i =0; i<intervals.size();i++)
    {
        if(intervals[i].end>intervals[i+1].start)
            return false;
    }
    return true;
}
int minMeetingRoom(vector<Interval>& intervals){
    auto comp = [](const Interval& i1, const Interval& i2){ return i1.start < i2.start; };
   // auto comp1 = [](int& i1, int& i2){ return i1 > i2; };
    sort(intervals.begin(),intervals.end(),comp);
    priority_queue<int, vector<int>,comp1> q;
    q.push(intervals[0].end);
     int count =1;
    for( int i =1;i< intervals.size();i++ )
    {
        if(intervals[i].start<q.top())
            count++;
        else
            q.pop();
        q.push(intervals[i].end);
    }
    return count;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}