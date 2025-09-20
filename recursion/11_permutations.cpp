#include <bits/stdc++.h>
using namespace std;
void permute(string &s, int l){
if(l == s.size()-1){
cout << s << "\n";
return;
}
for(int i=l;i<s.size();i++){
swap(s[l], s[i]);
permute(s, l+1);
swap(s[l], s[i]);
}
}

int main(){
string s; cin >> s;
permute(s, 0);
}
