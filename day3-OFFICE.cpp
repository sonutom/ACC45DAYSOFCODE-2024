#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y; // Working hours from Monday to Thursday (X) and on Friday (Y)
        cin >> X >> Y;

        // Calculate total working hours in a week
        int total_hours = (4 * X) + Y;

        // Output the result
        cout << total_hours << endl;
    }

    return 0;
}
