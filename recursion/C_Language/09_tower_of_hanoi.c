#include <stdio.h>
void TOH(int n, char from, char to, char aux){
if(n == 0) return;
TOH(n-1, from, aux, to);
printf("Move disk %d from %c to %c\n", n, from, to);
TOH(n-1, aux, to, from);
}

int main(){
int n; scanf("%d", &n);
TOH(n,'A','C','B');
return 0;
}
