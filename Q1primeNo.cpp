#include <iostream>
using namespace std;

bool isP(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void fF(int n) {
    for (int i = 1; i <= n; i++)
        if (n % i == 0) cout << i << " ";
}

int nP(int n) {
    int x = n + 1;
    while (!isP(x)) x++;
    return x;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (isP(n)) cout << n << " is prime. Next: " << nP(n) << endl;
    else { cout << n << " not prime. Factors: "; fF(n); }

    return 0;
}