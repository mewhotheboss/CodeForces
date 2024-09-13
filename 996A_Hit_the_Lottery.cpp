#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;

    int arr[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++) {
        s = s + (n / arr[i]);
        n = n % arr[i];
    }

    cout << s << endl;

    return 0;
}



