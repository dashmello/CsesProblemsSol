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
#include<stack>
using namespace std;
#define ll long long


int main(){
    int n;
    cin>>n;
    int sum;
    cin >>sum;
    vector<ll>v(n+1);
    v[0] = 0;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<ll>v1(n + 1);
    v1[0] = 0;
    for (size_t i = 1; i <= n; i++)
    {
        v1[i] = v1[i-1]+ v[i];
    }
    map<ll,int> mp;
    mp[0] ++;
    ll count = 0;
    for (size_t i = 1; i <= n; i++)
    {
        ll x = v1[i] - sum;
        count += mp[x];
        mp[v1[i]]++;
    }
    cout << count;
    
    
    
}