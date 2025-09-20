#include <stdio.h>
#include <string.h>
long long dp[1000];
long long fib(int n){
if(n <= 1) return n;
if(dp[n] != -1) return dp[n];
return dp[n] = fib(n-1) + fib(n-2);
}

int main(){
int n; scanf("%d", &n);
memset(dp, -1, sizeof(dp));
printf("%lld\n", fib(n));
return 0;
}
