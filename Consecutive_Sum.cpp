#include <bits/stdc++.h>

using namespace std;

int consecutive(long num) {
    // Complete this function
     int count = 0;
        for (long L = 1; L * (L + 1) < 2 * num; L++)
        {
            double a = (double) ((1.0 * num-(L * (L + 1)) / 2) / (L + 1));
            if (a-(long)a == 0.0) 
                count++;        
        }
        return count;
}

int main() {
    long num;
    cin >> num;
    int res = consecutive(num);
    cout << res << endl;
    return 0;
}
