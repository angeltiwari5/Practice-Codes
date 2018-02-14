/*class Solution {
    public int intersectionSizeTwo(int[][] intervals) {
        Arrays.sort(intervals, (a, b) ->
                    a[0] != b[0] ? a[0]-b[0] : b[1]-a[1]);
        int[] todo = new int[intervals.length];
        Arrays.fill(todo, 2);
        int ans = 0, t = intervals.length;
        while (--t >= 0) {
            int s = intervals[t][0];
            int e = intervals[t][1];
            int m = todo[t];
            for (int p = s; p < s+m; ++p) {
                for (int i = 0; i <= t; ++i)
                    if (todo[i] > 0 && p <= intervals[i][1])
                        todo[i]--;
                ans++;
            }
        }
        return ans;
    }
}*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    static bool comp( pair<int, int> & a, pair<int,int> & b){
        return a.first != b.first ? a.first < b.first : a.second > b.second;
    }
    public:
        int interSectionSize( vector< int > a, vector <int> b){
            int n = a.size();
            vector< pair<int,int> > intervals;
            vector<int> vec(a.size(),2);
            for( int i = 0;i<a.size();i++){
                intervals.push_back( make_pair ( a[i], b[i]));
            }
            int result = 0;
            sort( intervals.begin(), intervals.end(), comp);
             while ( --n >= 0 ){
                int start = intervals[n].first;
                int end = intervals[n].second;
                int m = vec[n];
                for ( int i = start; i < start + m; ++ i){
                    for( int j = 0;j <= n; j++){
                        if(vec[j] > 0 && i <= intervals[j].second)
                            vec[j]--  ;                      
                            
                            }
                            result++;

                    
                }
             }
             return result;
        }
};
int main(){
    int n ;
     cin>>n;
     vector<int> start;
     vector<int> end;
     for( int i = 0;i<n;i++){
        int a,b;
        cin >> a;
        cin >> b;
        start.push_back(a);
        end.push_back(b);
     }
     Solution obj;
     int res = obj.interSectionSize(start, end);
     cout << res;
     return 0;
}