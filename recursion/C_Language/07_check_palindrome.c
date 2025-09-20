#include <stdio.h>
#include <string.h>
int isPal(const char *s, int l, int r){
if(l >= r) return 1;
if(s[l] != s[r]) return 0;
return isPal(s, l+1, r-1);
}

int main(){
char s[1000]; scanf("%s", s);
printf("%s\n", isPal(s, 0, strlen(s)-1) ? "YES" : "NO");
return 0;
}
