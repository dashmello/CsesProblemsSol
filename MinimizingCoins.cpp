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
int n, x;
ll arr[101];
ll ar[1000001] ;

int main(){
    
    cin >> n >> x;
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    ar[0]=0;
    
    for (size_t i = 1; i <= x; i++)
    {
        ar[i] = 1e9;
        for (size_t j = 0; j < n; j++)
        {
           if(i >= arr[j] ){
               ar[i] = std::min(ar[i], ar[i-arr[j]] + 1);
           }
        }
    }
    cout << (ar[x] == 1e9 ? -1 : ar[x]);
    
    
}