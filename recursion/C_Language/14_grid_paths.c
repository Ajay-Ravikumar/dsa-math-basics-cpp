#include <stdio.h>
long long paths(int m, int n){
if(m==1 || n==1) return 1;
return paths(m-1,n) + paths(m,n-1);
}

int main(){
int m,n; scanf("%d %d", &m, &n);
printf("%lld\n", paths(m,n));
return 0;
}
