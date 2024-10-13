#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Weight of the pulp in kg
        cin >> N;
        
        // Calculate the number of notebooks
        int notebooks = 10 * N; // Each kg of pulp can create 10 notebooks
        
        // Output the result
        cout << notebooks << endl;
    }

    return 0;
}
