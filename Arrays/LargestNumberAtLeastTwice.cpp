class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = 0;
        for( int i =0; i< nums.size();i++){
            if( nums[index] < nums[i])
                index = i;
        }
        for( int i = 0; i< nums.size(); i++){
            if( i != index && nums[index] < 2*nums[i])
                return -1;
        }
        return index;
        
    }
};