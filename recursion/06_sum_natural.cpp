#include <bits/stdc++.h>
using namespace std;
long long sumN(int n){
if(n == 0) return 0;
return n + sumN(n-1);
}

int main(){
int n; cin >> n;
cout << sumN(n) << "\n";
}
