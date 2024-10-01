#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int Count = 0;
    cin >> a;


    for (int i = 0; a[i] != '\0'; i++) {

        if (a[i] == a[i + 1]) {
            Count++;

            if (Count == 6) {
                break;
            }
        } else {

            Count = 0;
        }
    }


    if (Count >= 6) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}


