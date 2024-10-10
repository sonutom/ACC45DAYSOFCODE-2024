#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    vector<string> results; // Vector to store results

    for (int i = 0; i < T; i++) {
        int X, Y;
        cin >> X >> Y; // Read X (submitted) and Y (approved)

        // Check if at least 50% of problems are approved
        if (Y * 2 >= X) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    // Output results
    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
