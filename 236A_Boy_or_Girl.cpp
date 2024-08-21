#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    sort(s.begin(),s.end());
    int count = 1;
    for(int i = 0; i < len-1; i++)
    {
        if(s[i] != s[i+1])count++;
    }
    if(count%2 == 0)cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
