#include <bits/stdc++.h>
using namespace std;
void genPar(int n, int open, int close, string cur){
if(cur.size() == 2*n){
cout << cur << "\n";
return;
}
if(open < n) genPar(n, open+1, close, cur+"(");
if(close < open) genPar(n, open, close+1, cur+")");
}

int main(){
int n; cin >> n;
genPar(n,0,0,"");
}
