#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;        
        
        int second_largest = a + b + c - max({a, b, c}) - min({a, b, c});
        cout << second_largest << endl;
    }

    return 0;

}



