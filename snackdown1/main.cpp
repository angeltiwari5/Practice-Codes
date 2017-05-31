#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){
        int k;
        cin >> k;
        string s;
        string ans = "Valid";
        cin >> s;
        char start = '.';
        char start_char = 'T';
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'T'){
                if((start != '.' || start != 'H') && start_char != 'H'){
                    ans = "Invalid";
                    break;
                }
            }
            if(s[i] == 'H'){
                if((start != '.' || start != 'T') && start_char != 'T' ){
                    ans = "Invalid";
                    break;
                }
            }
            start = s[i];
            if (s[i] == 'H' || s[i] == 'T'){
                start_char = s[i];
            }
        }

        if( start_char == 'H'){
            ans = "Invalid";
        }

        cout << ans << endl;
    }
    return 0;
}
