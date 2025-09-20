#include <stdio.h>
#include <string.h>
void swap(char *a, char *b){ char t=*a; *a=*b; *b=t; }
void permute(char *s, int l, int r){
if(l == r){
printf("%s\n", s);
return;
}
for(int i=l;i<=r;i++){
swap(&s[l], &s[i]);
permute(s, l+1, r);
swap(&s[l], &s[i]);
}
}

int main(){
char s[1000]; scanf("%s", s);
permute(s, 0, strlen(s)-1);
return 0;
}
