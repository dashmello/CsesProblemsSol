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
    string s;
    cin >> s;
    map<char, int> mp; 
    int max = 1;
    char d = '$';
    int c = 1;
    for(char x : s){
        if(d != x){
            mp[x] = 0;
        }
        mp[x]++;
        d = x;
        max = std :: max(max, mp[x]);

    }
    cout << max;
    
}