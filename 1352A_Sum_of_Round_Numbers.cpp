#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int num;
        cin >> num;
        vector<int> components;        
        
        int factor = 1;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0) {
                components.push_back(digit * factor);
            }
            num /= 10;
            factor *= 10;
        }        
        
        cout << components.size() << endl;
        for (int comp : components) {
            cout << comp << " ";
        }
        cout << endl;
    }

    return 0;

}


