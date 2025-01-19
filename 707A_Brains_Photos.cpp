#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, y;
    cin >> x >> y;
    
    bool isColor = false;
    
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            char pixel;
            cin >> pixel;            
            
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y')
            {
                isColor = true;
            }
        }
    }
    
    if (isColor)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }

    return 0;
}
