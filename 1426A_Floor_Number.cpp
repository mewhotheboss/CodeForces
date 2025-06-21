#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, x;
        cin >> n >> x;

        if (n <= 2) 
        {
            cout << 1 << endl;
        } 
        else 
        {
            int floor = 1 + (n - 2 + x - 1) / x;
            cout << floor << endl;
        }
    }

    return 0;
}
