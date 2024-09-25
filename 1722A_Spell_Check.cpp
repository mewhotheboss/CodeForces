#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string a;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> a;
        sort(a.begin(),a.end());
        if(a == "Timru")
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;

}


