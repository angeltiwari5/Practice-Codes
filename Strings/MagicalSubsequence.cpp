#include<string>
#include<iostream>
#include <vector>
using namespace std;
string vowel = "aeiou";

int vpos(char c)
{
    for (int i = 0; i < 5; ++i)
        if (c == vowel[i])
            return i;
    return -1;
}

int magical(string s)
{
    int l = s.length();
    int previndex[5] = {-1, -1, -1, -1, -1};    
    vector<int> len (l, 0);
    int i = 0, maxlen = 0;

    // finding first 'a'
    while (s[i] != 'a')
    {
        ++i;
        if (i == l)
            return 0;
    }

    previndex[0] = i;      
    len[i] = 1;

    for ( ++i; i < l; ++i)
    {
        if (vpos(s[i]) >= 0)    
        {
            
            if (previndex[vpos(s[i])] >= 0)
                len[i] = 1+len[previndex[vpos(s[i])]];

            previndex[vpos(s[i])] = i;

            if (s[i] != 'a')
            {
                if (previndex[vpos(s[i])-1] >= 0)
                    len[i] = max(len[i], 1+len[previndex[vpos(s[i])-1]]);
            }

            maxlen = max(maxlen, len[i]);
        }
    }
    return maxlen;
}

int main()
{
    string s = "aeiouaaeeiioouu";
    cout << magical(s);
    return 0;
}