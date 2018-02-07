class Solution {
public:
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<pair<string, string>> pairs) {
        if( words1.size() != words2.size())
            return false;
       // map<string, string> mp;
        //mapping of 1 with 2;
        set<string> mp;
        for( int i = 0;i<pairs.size();i++){
            mp.insert(pairs[i].first+"#"+pairs[i].second);
            //mp[pairs[i].first] = pairs[i].second;
         }
        for( int i = 0;i<words1.size(); i++){
            if((words1[i]!= words2[i]) && mp.find(words1[i]+"#"+words2[i])== mp.end() && mp.find(words2[i]+"#"+words1[i])== mp.end())
                return false;
        }
        return true;
        
        
    }
};