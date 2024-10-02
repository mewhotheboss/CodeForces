#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, max=0, min = 101, index1, index2;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == min)
        {
            index1 = i;
        }
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] == max)
        {
            index2 = i;
        }
    }

    if(index1 > index2)
    {
        cout << index2 + ((n-1)-index1) << endl;
    }
    else
    {
        cout << index2 + ((n-1)-(index1+1)) << endl;
    }

    return 0;

}


