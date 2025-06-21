#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    char prev = 'a';
    int rotations = 0;

    for (int i = 0; i < s.size(); i++)
    {  
        char curr = s[i];
        
        int right = abs(curr - prev);
        int left = 26 - right;
        
        rotations += min(right, left);        
        
        prev = curr;
    }

    cout << rotations << endl;

    return 0;
}
