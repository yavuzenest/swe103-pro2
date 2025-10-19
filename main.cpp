
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    long long fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }

    cout << "Factorial of " << n << " is " << fact << endl;
    cout << "Here you go!" << endl;

    return 0;
}
