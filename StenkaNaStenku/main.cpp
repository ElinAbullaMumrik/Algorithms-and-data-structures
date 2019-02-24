#include <iostream>

using namespace std;

int main() {
    int tests, n, k, m, x, sum;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        cin >> n >> k;
        x = n % k;
        m = (n - x) / k;
        sum = (k / 2 * m + x) * (k - 1) * m + x * (x - 1) / 2;
        cout << sum << endl;
    }
    return 0;
}