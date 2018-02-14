class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> lastOccur(26,0);
        for( int i = 0; i < S.length(); i++){
            lastOccur[S[i]-'a'] = i;
        }
        int start = 0, end = 0;
        vector<int> result;
        for( int i = 0; i < S.length(); i++){
            end = max ( end, lastOccur[S[i] - 'a']);
            if ( i == end){
                result.push_back( i - start + 1);
                start = i+1;
            }
        }
        return result;
        
    }
};