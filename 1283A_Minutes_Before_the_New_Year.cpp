#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
// ......................................
    int t;
    cin >> t;

    while (t--) 
    {        
        int x,y;
        cin>>x>>y;

        cout<<((23-x)*60) + (60-y)<<endl;
    }

    return 0;
}
