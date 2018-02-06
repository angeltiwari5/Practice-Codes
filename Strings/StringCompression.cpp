class Solution {
public:
    int compress(vector<char>& chars) {
        if( chars.size() == 0 || chars.size() == 1)
            return chars.size();
        int count = 1;
        int j =0;
        for( int i = 0;i<chars.size(); i++){
            
                chars[j++] = chars[i];
                count = 1;
                while(i+1 < chars.size() && chars[i] == chars[i+1])
                {
                     count++;
                    i++;
                }  
                if( count > 1){
                    if(count >=10){
                        string str = to_string(count);
                        for( int k = 0;k<str.length();k++){
                            chars[j++] = str[k];
                        }
                    }
                    else chars[j++] = count +'0';
                }
            
        }
        return j;
    }
};