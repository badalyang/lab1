#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int smaller = (a < b) ? a : b;
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            max = i;
        }
    }

    cout << "GCD is: " << max << endl;
    return 0;
}
