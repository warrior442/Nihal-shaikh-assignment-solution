#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false; 
    }
    return true;
}
int main() {
    int n, count = 0, number = 2;
    cin >> n;

    while (count < n) {
        if (isPrime(number)) {
            cout << number << " ";
            count++;
        }
        number++;
    }
    cout << endl;

    return 0;
}
