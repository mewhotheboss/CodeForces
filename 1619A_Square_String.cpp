#include <iostream>
using namespace std;

int main() 
{    
    long t;
    cin >> t;

    while (t--) 
    {        
        string s;
        cin >> s;
        
        if (s.size() % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        // Split the string into two halves
        long half = s.size() / 2;
        string firstHalf = s.substr(0, half);
        string secondHalf = s.substr(half);

        if (firstHalf == secondHalf) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
