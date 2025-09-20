#include <bits/stdc++.h>
using namespace std;

void subsets(string &s, string cur, int i){
if(i == s.size()){
cout << cur << "\n";
return;
}
subsets(s, cur, i+1);
subsets(s, cur + s[i], i+1);
}

int main(){
string s; cin >> s;
subsets(s, "", 0);
}
