#include <bits/stdc++.h>
using namespace std;

void reverseStr(string &s, int l, int r) {
    if (l >= r) return;
    swap(s[l], s[r]);
    reverseStr(s, l+1, r-1);
}

int main() {
    string s = "hello";
    reverseStr(s, 0, s.size()-1);
    cout << s << endl; // "olleh"
}
