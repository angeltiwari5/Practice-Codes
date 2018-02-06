class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for ( int k = 1; k <= n; k++){
            for( int i = 0; i < n-k+1; i++){
                if(ispalin(s.substr(i,k))){
                    count++;
                }
            }
        }
        return count;
    }
    bool ispalin( string str){
        //cout << str<<endl;
        int l =0;
        int h = str.length()-1;
        while(l<h){
            if(str[l] != str[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
};