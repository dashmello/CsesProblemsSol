#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin >> n;
	ll ans = 0;
	ll xx; cin >> xx;
	ll max = xx;
	for (ll i = 0; i < n - 1; i++) {
		ll x;
		cin >> x;
		max = std::max(max, x);
		ans += (max - x);
	}
	cout << ans;
}
 