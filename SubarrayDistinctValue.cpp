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
    int n,k;
    cin>>n >> k;
    vector<ll>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll,int> mp;
    ll ans = 0;
    for (size_t i = 0, j = 0; i < n; i++)
    {
        while(j < n && ((int)mp.size()<k ||  mp.count(v[j])>0)){
            mp[v[j]]++;
            j++;
        }
        ans+= j -i;
        mp[v[i]]--;
        if(mp[v[i]]==0)
        {
            mp.erase(v[i]);
        }
    }
    cout << ans;
}