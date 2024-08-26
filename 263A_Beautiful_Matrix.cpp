#include<iostream>

using namespace std;

int main()
{
    int arr[5][5];
    int in1 = 0, in2 = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                in1 = i;
                in2 = j;
            }
        }
    }

    cout << abs(3-(in1+1))+abs(3-(in2+1)) << endl;

    return 0;
}
