#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    int n, m;
    cin >> n >> m;

    // Find the next prime after n
    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    // Check if m is the next prime
    if (m == nextPrime) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
