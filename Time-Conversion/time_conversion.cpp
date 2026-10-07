#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2));

    if (time.substr(8, 2) == "PM" && hour != 12)
        hour += 12;

    if (time.substr(8, 2) == "AM" && hour == 12)
        hour = 0;

    cout << (hour < 10 ? "0" : "") << hour
         << time.substr(2, 6) << endl;

    return 0;
}
