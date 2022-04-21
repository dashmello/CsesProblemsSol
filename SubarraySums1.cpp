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
    int k;
    cin >>k;
    vector<int>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i,j ;
    i= 0;
    j=0;
    int sum = 0;
    int count = 0;
    while(i<=n){
        sum+=v[i];
        while(sum>=k){
           if(sum==k){
                count++;
           }
           sum-=v[j];
           j++;
            
        }

        i++;
        
    }
    cout << count;
}