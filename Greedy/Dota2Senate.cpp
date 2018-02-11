class Solution {
public:
    string predictPartyVictory(string senate) {
       // if (senate.length() <= 1)
          //  return senate;
        queue<int> q;
        vector<int> parties(2,0);
        vector<int> banned(2,0);
        for( int i = 0;i < senate.length(); i++){
            int val = senate[i] == 'R'?1:0;
            parties[val]++;
            q.push(val);
        }
        while( parties[0] > 0 && parties[1] > 0 ){
            int x = q.front();
            q.pop();
            if(banned[x] > 0 ){
                banned[x]--;
                parties[x]--;
                
            }
            else {
                banned[x^1]++;
                q.push(x);
                
            }
        }
        return parties[1]>0 ? "Radiant" : "Dire";
    }
};