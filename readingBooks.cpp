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
    vector<ll> v(n);
    ll sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    cout << max(sum, v[n-1]*2);
    
    
}