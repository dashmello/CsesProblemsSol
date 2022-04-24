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
    int mod = 1e9+7;
    cin >>n;
    vector<ll>v(n+1);
    v[0] =1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= min(i,6); j++)
        {
            v[i] =(v[i]+v[i-j])%mod;
        }
        
    }
    cout << v[n];
    
    
    
}