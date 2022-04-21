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
    vector<pair<int, int>> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    ll reward = 0;
    ll time = 0;
    for (size_t i = 0; i < n; i++)
    {
        time += v[i].first;
        reward+=v[i].second - time;
    }
    cout << reward;
    return 0;

    
}