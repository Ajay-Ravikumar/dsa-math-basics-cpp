#include <bits/stdc++.h>
using namespace std;

int fibNaive(int n) {
    if (n <= 1) return n;
    return fibNaive(n - 1) + fibNaive(n - 2);
}

int fibMemo(int n, vector<int>& dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibMemo(n - 1, dp) + fibMemo(n - 2, dp);
}

int main() {
    cout << fibNaive(5) << endl; // 5
    vector<int> dp(50, -1);
    cout << fibMemo(40, dp) << endl; // Efficient
}
