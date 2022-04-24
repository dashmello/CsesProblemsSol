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
    int n,a,b;
    cin>>n >> a >>b;
    vector<ll>v(n+1);
    for (size_t i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (size_t i = 1; i <= n; i++)
    {
       v[i] += v[i-1];
    }
    set<pair<ll,int>>s;
    for (int i = a; i <= b; i++)
    {
        s.insert({v[i],i});
    }
    ll max = -1e18;
    for (int i = 1; i <= n-a+1; i++)
    {
        max = std::max(max, s.rbegin()->first - v[i-1]);
        s.erase({v[i+a-1],i+a-1});
        if(i+b<=n){
            s.insert({v[i+b],i+b});
        }

    }
    cout << max;
    
    
    
}