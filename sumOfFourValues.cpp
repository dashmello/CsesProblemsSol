#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<algorithm>
#include<iterator>
#include<stdlib.h>
#include<math.h>
#include<numeric>
#include<set>
#include<array>
#include<map>
#include<queue>
using namespace std;
#define ll long long
 

 
int main() {
       int n, k;
       cin >> n>>k;
       vector<int> v(n);
       for (size_t i = 0; i < n; i++)
       {
            cin >> v[i];
       }
       map<int, pair<int,int>> mp;
       for(int i = 0; i < n;i++){
           for (size_t j = i+1; j < n; j++)
           {
               if(mp.count(k-v[i] - v[j])){
                   cout << i+1 << " " << j+1<<" " << mp[k-v[i] - v[j]].first + 1 << " " << mp[k-v[i] - v[j]].second + 1;
                   return 0;
               }
           }
           for (size_t j = 0; j < i; j++)
           {
               mp[v[i] + v[j]] = {i,j};
           }
           
           
       }
       cout << "IMPOSSIBLE";

       
}