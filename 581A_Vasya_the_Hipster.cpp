#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, minVal, extra;
    cin >> a >> b;

    
    minVal = min(a, b);
    extra = abs(a - b) / 2;

    cout << minVal << " " << extra << endl;

    return 0;

}


