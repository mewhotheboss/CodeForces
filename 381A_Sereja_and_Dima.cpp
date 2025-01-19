#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    int sscore = 0, dscore = 0;

    for (int i = 0; i < n; i++) {
        if (arr[left] >= arr[right]) {
            if (i % 2 == 0) {
                sscore += arr[left];
            } else {
                dscore += arr[left];
            }
            left++;
        } else {
            if (i % 2 == 0) {
                sscore += arr[right];
            } else {
                dscore += arr[right];
            }
            right--;
        }
    }

    cout << sscore << " " << dscore << endl;
    return 0;
}
