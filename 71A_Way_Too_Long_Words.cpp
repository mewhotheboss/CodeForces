#include <iostream>
using namespace std;

int main()
{
    int num;
    string str;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> str;

        int length = str.length();

        if(length > 10)
        {
            cout << str[0] << length - 2 << str[length - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}
