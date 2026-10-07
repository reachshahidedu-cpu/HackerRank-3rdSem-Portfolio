#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; i++)
        cin >> strings[i];

    int q;
    cin >> q;

    while (q--) {
        string query;
        cin >> query;

        int count = 0;
        for (const string &s : strings) {
            if (s == query)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
