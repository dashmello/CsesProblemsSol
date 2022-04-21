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
    stack<pair<int,int>> s;
    for (size_t i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while(!s.empty() && x <= s.top().first){
            s.pop();
        }
        if(!s.empty())
            cout << s.top().second << " ";
        else{
            cout << 0 <<" ";
        }
        s.push({x, i});
    }

}