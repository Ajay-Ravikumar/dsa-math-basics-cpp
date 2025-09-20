/*  */
#include <stdio.h>
#include <string.h>
void reverseStr(char *s, int l, int r){
if(l >= r) return;
char tmp = s[l]; s[l] = s[r]; s[r] = tmp;
reverseStr(s, l+1, r-1);
}

int main(){
char s[1000]; scanf("%s", s);
reverseStr(s, 0, strlen(s)-1);
printf("%s\n", s);
return 0;
}
