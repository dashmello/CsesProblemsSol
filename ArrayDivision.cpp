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
    int n,k;
    cin>>n >> k;
    vector<int>v(n);
    int max = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
        max = std::max(max,v[i]);
    }
    ll low = max;
    ll high = 1e18;
    while(low<high){
        ll mid = (high +low )/2;
        int block =1 ;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(sum+v[i] > mid){
           sum = 0;
           block++;
            }
        
        sum+=v[i];
        }
        if(block > k){
           low = mid + 1; 
        }
        else{
            
            high = mid;
            
        }
        

    }
    cout << low;
}