#include <bits/stdc++.h>
using namespace std;

int main() {
    // String stores character in itself ''
    string s = "Tanishq";
    int len = s.size();
    s[len - 1] = 'k';
    cout << s[len - 1];
    return 0;
}