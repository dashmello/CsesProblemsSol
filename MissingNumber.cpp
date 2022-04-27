#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
 
int main() {
	long long n;
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n - 1; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	cout << (n + 1)*n / 2 - sum;
}