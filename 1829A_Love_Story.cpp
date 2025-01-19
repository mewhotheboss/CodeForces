#include <iostream>
using namespace std;

int main() 
{    
    int t,count=0;
    cin >> t;

    string ss = "codeforces";

    while (t--) 
    {
        string s;
        cin>>s;

        for (int i = 0; i < 10; ++i)
        {
            if(s[i]!=ss[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
        count = 0;
    }

    return 0;
}
