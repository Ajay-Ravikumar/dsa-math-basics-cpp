#include <bits/stdc++.h>
using namespace std;

vector<long long> dp;

long long catalan(int n) {
    if (n <= 1) return 1;
    if (dp[n] != -1) return dp[n];
    long long res = 0;
    for (int i = 0; i < n; i++)
        res += catalan(i) * catalan(n - 1 - i);
    return dp[n] = res;
}

int main() {
    int n; cin >> n;
    dp.assign(n+1, -1);
    cout << catalan(n) << "\n";
    return 0;
}
