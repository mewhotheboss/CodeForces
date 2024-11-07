#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int shovels = 1;
    int total_cost = k;

    while (total_cost % 10 != 0 && total_cost % 10 != r) {
        shovels++;
        total_cost = k * shovels;
    }

    cout << shovels << endl;

    return 0;

}


