#include <iostream>
using namespace std;

int main() {
    int n, k;

    
    while (cin >> n >> k) {
        int availableTime = 240 - k; 
        int timeSpent = 0, maxProblems = 0;

        
        for (int i = 1; i <= n; i++) {
            timeSpent += 5 * i; 

            
            if (timeSpent > availableTime) {
                break;
            }
            
            maxProblems++;
        }

        cout << maxProblems << endl;
    }

    return 0;
}
