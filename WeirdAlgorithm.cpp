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
    ll n;
    cin >> n;
    while(n>=1){
        
        cout << n << " ";
        if(n==1) break;
        if(n%2){
            n = n*3 + 1;
        }
        else{
            n/=2;
        }
        
    }
    
}