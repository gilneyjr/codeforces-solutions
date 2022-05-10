#include <iostream>

typedef unsigned long long int ulli;
using namespace std;

int main() {
    ulli m, n, a;
    cin >> m >> n >> a;

    cout << (m/a + (m%a > 0 ? 1 : 0)) * (n/a + (n%a > 0 ? 1 : 0)) << endl;

    return 0;
}