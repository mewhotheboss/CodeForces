#include<bits/stdc++.h>
using namespace std;

int main()
{    
    int a, b, c, max_val, min_val, mid_val, sum;
    cin >> a >> b >> c;
    
    max_val = max({a, b, c});
    min_val = min({a, b, c});
    
    mid_val = a + b + c - (max_val + min_val);
    
    sum = (max_val - mid_val) + (mid_val - min_val);

    cout << sum << endl;
    
    return 0;
}


