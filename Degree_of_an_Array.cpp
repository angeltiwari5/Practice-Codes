#include <bits/stdc++.h>

using namespace std;
int fun(vector<int> a,int key)
{
    int n = a.size();
          int start = -1;
     
        for (int i=0; i<n; i++)
              {
                        if (a[i] == key)
                                  {
                                                start = i;
                                                            break;
                                                                    }
                            }
         
            if (start == -1)
                      return -1;

                int end = start;
                    for (int i=n-1; i>=start; i--)
                          {
                                    if (a[i] == key)
                                              {
                                                            end = i;
                                                                        break;
                                                                                }
                                        }
                        if (start == end)
                              return 1;
                            else
                                  {
                                            return end-start+1;
                                                }
}

int degreeOfArray(vector <int> arr) {
    // Complete this function
     if (arr.size() == 0)
    return 0;

  int ans = 1000000;
  map < int, int> m;

  for (int i =0; i<arr.size(); i++){
    if (m.find(arr[i]) != m.end()){
      m[arr[i]]++;
    }else {
      m[arr[i]] = 1;
    }
  }

   map <int, int> :: iterator itr;
  
   vector < pair <int, int> > val;
  for (itr = m.begin(); itr != m.end(); ++itr){
    val.push_back( make_pair(itr->second,itr->first) );
  }
  
  sort(val.begin(), val.end());
  int k = val[val.size()-1].first;
  vector <int> vec;

  for (int i =0; i< val.size(); i++){
    if(val[i].first == k){
      vec.push_back(val[i].second);
    }
  }
  int ans1;
  for(int i=0; i< vec.size(); i++){
    ans1 = fun(arr, vec[i]);
    if (ans1 < ans){
      ans = ans1;
    }
  }

  return ans;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int arr_i = 0; arr_i < size; arr_i++){
       cin >> arr[arr_i];
    }
    int res = degreeOfArray(arr);
    cout <<res <<endl;
    return 0;
}
