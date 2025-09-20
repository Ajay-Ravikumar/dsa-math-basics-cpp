#include <stdio.h>
#include <string.h>
void subsets(char *s, char *cur, int i, int len){
if(i == len){
printf("%s\n", cur);
return;
}
subsets(s, cur, i+1, len);
int l = strlen(cur);
cur[l] = s[i]; cur[l+1] = '\0';
subsets(s, cur, i+1, len);
cur[l] = '\0';
}

int main(){
char s[1000], cur[1000]="";
scanf("%s", s);
subsets(s, cur, 0, strlen(s));
return 0;
}
