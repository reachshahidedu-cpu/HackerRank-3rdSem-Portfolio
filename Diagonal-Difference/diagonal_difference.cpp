#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++) {
        primary += a[i][i];
        secondary += a[i][n - 1 - i];
    }

    cout << abs(primary - secondary) << endl;

    return 0;
}
