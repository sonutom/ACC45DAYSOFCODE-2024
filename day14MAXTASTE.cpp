#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Read the tastiness values

        // Calculate the maximum tastiness
        int max_tastiness = max({a + c, a + d, b + c, b + d});

        // Output the result
        cout << max_tastiness << endl;
    }

    return 0;
}
