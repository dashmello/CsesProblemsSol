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
ll ar[200000];
int main(){
    int n;
    cin >> n;
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll m = ar[0];
    ll c = 0;
    for (size_t i = 1; i < n; i++)
    {
        m = std::max(m,ar[i]);
        c += m-ar[i];
    }
    cout << c;
    
    
}