#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int eligibleCount = 0;

    for (int i = 0; i < n; i++) {
        int availableTime;
        cin >> availableTime;

        
        if (availableTime + k <= 5) {
            eligibleCount++;
        }
    }
    
    int maxTeams = eligibleCount / 3;

    cout << maxTeams << endl;
    return 0;
}
