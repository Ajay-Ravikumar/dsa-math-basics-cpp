#include <stdio.h>
void genPar(int n, int open, int close, char *cur, int pos){
if(pos == 2*n){
cur[pos] = '\0';
printf("%s\n", cur);
return;
}
if(open < n){
cur[pos] = '(';
genPar(n, open+1, close, cur, pos+1);
}
if(close < open){
cur[pos] = ')';
genPar(n, open, close+1, cur, pos+1);
}
}

int main(){
int n; scanf("%d", &n);
char cur[1000];
genPar(n,0,0,cur,0);
return 0;
}
