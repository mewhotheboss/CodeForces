#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    for(int i = 0; i < n; i += 2) {
        for(int j = i + 2; j < n; j += 2) {
            if(s[j] < s[i]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << s;

    return 0;
}
