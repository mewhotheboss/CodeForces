#include <bits/stdc++.h>
using namespace std;

void sortString(string &str) {
    sort(str.begin(), str.end());
}

int main() {
    string s, s1, s2, s3;
    
    cin >> s >> s1 >> s2;
    
    sortString(s);
    sortString(s1);
    sortString(s2);
    
    s3 = s + s1;
    
    sortString(s3);
    
    if (s2 == s3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
