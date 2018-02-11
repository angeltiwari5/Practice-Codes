class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size() == 0 || duration == 0)
            return 0;
        int start = timeSeries[0], end = timeSeries[0] + duration;
        int result = 0;
        for( int i = 1; i < timeSeries.size(); i++){
            if(timeSeries[i] > end){
               result += end - start;
                start = timeSeries[i];
                
            }
            end = timeSeries[i] + duration;
        }
        result += end - start;
        return result;
    }
};