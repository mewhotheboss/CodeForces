
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, y, z;

    cin >> x >> y;

    int size = x.size();

    for(int i = 0; i < size; i++)
    {
        if(x[i] == y[i])
        {
            z = z + '0';
        }
        else
        {
            z = z + '1';
        }
    }

    cout << z << endl;

    return 0;
}


