#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int X, Y;
        cin >> X >> Y; // Read the time taken by bike (X) and car (Y)

        // Compare the travel times and determine the faster option
        if (X < Y) {
            cout << "BIKE" << endl; // Bike is faster
        } else if (X > Y) {
            cout << "CAR" << endl; // Car is faster
        } else {
            cout << "SAME" << endl; // Both take the same time
        }
    }

    return 0;
}
