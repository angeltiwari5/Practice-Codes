class Solution {
public:
    string boldWords(vector<string>& words, string S) {
        vector<bool> check(S.size(),false);
        for( int i =0;i<S.length();i++){
            for(int j = 0; j < words.size(); j++){
                int k =0;
                for( k =0; k<words[j].length(); k++){
                    if(i+k > S.length()|| words[j][k] != S[i+k])
                        break;
                }
                if( k == words[j].length()){
                    for( int l = i; l < i+words[j].length() ; l++ ){
                        check[l] = true;
                    }
                }
            }
        }
        string result = "";
        for ( int i =0;i<S.length(); i++){
            if( check[i] && (i==0 || !check[i-1]))
                result += "<b>";
            result += S[i];
            if( check[i] && (i==S.length()-1 || !check[i+1]))
                result += "</b>";
        }
        return result;
    }
};