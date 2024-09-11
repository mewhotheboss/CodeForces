
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,no;
    cin>>n>>x;

    set<int>arr;

    for (int i = 0; i < x; ++i)
    {
        cin>>no;
        arr.insert(no);
    }

    int y;
    cin>>y;

    for (int i = 0; i < y; ++i)
    {
        cin>>no;
        arr.insert(no);
    }

    // for (auto it = arr.begin(); it != arr.end(); ++it)
    // {
    //     cout << *it << endl;
    // }

    if(n==arr.size())
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }

    return 0;
}


