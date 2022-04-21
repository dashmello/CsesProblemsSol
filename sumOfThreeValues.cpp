
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


int main(){
    int n;
    cin>>n;
    int sum;
    cin >> sum;
    vector<pair<int,int>> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());
    for (size_t i = 0; i < n; i++)
    {
        ll t = sum-v[i].first;
        for (size_t j = i+1, k = n-1; j < n; j++)
        {
            while(j<k && (v[j].first+v[k].first)>t)
                k--;
            if(j<k && (v[i].first+v[j].first+v[k].first)==sum){
                cout << v[i].second <<" " << v[j].second << " " << v[k].second;
                return 0;
            }
        }
        
    }
    
    cout <<"IMPOSSIBLE";
    

    
    
}