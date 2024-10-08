#include <iostream>
#include <vector>
#include <cstdlib> // for abs

using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    vector<int> results; // To store the results for each test case

    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;

        // Calculate the minimum time taken for the policeman to catch the thief
        int timeTaken = abs(X - Y); // Time is equal to the distance since speed difference is 1
        results.push_back(timeTaken);
    }

    // Output results
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
