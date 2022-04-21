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
 

ll ans = 2e18;
bool check(vector<ll> v,ll val, ll t) {
	ll sum = 0;
	for (ll i = 0; i < (ll)v.size(); i++) {
		sum += min(val / v[i], (ll)1e9);
	}
	if (sum < t) {
		return false;
	}
	return true;
}
void mybs(vector<ll> v, ll l, ll r, ll t) {
	
	while (l <= r) {
		ll m = (l + r) / 2;
		if (!check(v, m, t)) {
			l = m + 1;
			
		}
		else {
			ans = min(ans, m);
			r = m - 1;
		}
	}
	cout << ans;
}
 
int main() {
	ll n, t;
	cin >> n >> t;
	vector<ll > v(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	mybs(v, 0, 2e18, t);
 
 
 
}