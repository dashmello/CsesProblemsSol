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
 
//int a[10000000];
//set<int, int> s[10000000];
//vector<int> number;
//vector<int> numberPos;
 
const int mxN = 2e5;
int n, ans[mxN];
array<int, 3> a[mxN];
 
int main() {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
        cin >> a[i][1] >> a[i][0];
        a[i][2] = i;
        }
        sort(a, a + n);
        set<array<int, 2>> s;
        for (int i = 0; i < n; ++i) {
            auto it = s.lower_bound({ a[i][1] });
            if (it != s.begin()) {
                --it;
                ans[a[i][2]] = (*it)[1];
                s.erase(it);
            }
            else
                ans[a[i][2]] = s.size();
            s.insert({ a[i][0], ans[a[i][2]] });
        }
            cout << s.size() << "\n";
            for(int i = 0; i < n; ++i)
                cout << ans[i] + 1<< " ";
}