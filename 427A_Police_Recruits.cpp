#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, police=0, cases = 0;
    cin>>t;

    int arr[t];

    for(int i = 0; i < t; i++)
    {
        cin>>arr[i];

        if(arr[i] != -1)
        {
            police = police + arr[i];
        }

        else if(arr[i] == -1)
        {
            if(police == 0)
            {
                cases++;
            }
            else
            {
                police--;
            }
        }
    }

    cout<<cases;

    return 0;

}


