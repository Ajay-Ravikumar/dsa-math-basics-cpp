#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>, long long> dp;
long long paths(int m, int n){
if(m==1 || n==1) return 1;
if(dp[{m,n}]) return dp[{m,n}];
return dp[{m,n}] = paths(m-1,n) + paths(m,n-1);
}

int main(){
int m,n; cin >> m >> n;
cout << paths(m,n) << "\n";
}
