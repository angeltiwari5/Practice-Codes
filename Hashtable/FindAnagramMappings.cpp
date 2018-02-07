class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> vec(A.size(),0);
        //cout<< vec.size()<<endl;
        map<int,int> mp;
        for( int i = 0;i<B.size(); i++){
            mp[B[i]] = i;
            
        }
        for(int i = 0; i < A.size(); i++){
            if(mp.find(A[i]) != mp.end()){
                //cout<< mp[B[i]]<<" "<<i<<endl;
                //int index = mp[B[i]];
                //vec.insert(vec.begin() + index,i);
                vec[i] = mp[A[i]];
            }
        }
        return vec;
        
    }
};