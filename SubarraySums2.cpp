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
    vector<ll>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll,int> mp;
    mp[0] ++;
    ll count = 0;
    ll t = 0;
    for (size_t i = 0; i < n; i++)
    {
        t+= v[i];
        count+=mp[t - sum];
        mp[t]++;
        
    }
    cout << count;
    
    
    
}