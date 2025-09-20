#include <stdio.h>
void printNums(int n){
if(n == 0) return;
printNums(n-1);
printf("%d ", n);
}

int main(){
int n; scanf("%d", &n);
printNums(n);
printf("\n");
return 0;
}
