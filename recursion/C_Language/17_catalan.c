#include <stdio.h>

long long dp[1000];

long long catalan(int n) {
    if (n <= 1) return 1;
    if (dp[n] != -1) return dp[n];
    long long res = 0;
    for (int i=0;i<n;i++)
        res += catalan(i) * catalan(n-1-i);
    return dp[n] = res;
}

int main() {
    for(int i=0;i<1000;i++) dp[i] = -1;
    int n; scanf("%d", &n);
    printf("%lld\n\", catalan(n));
    return 0;
}
