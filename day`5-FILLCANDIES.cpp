#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N, K, M;
        cin >> N >> K >> M; // Read N, K, M for each test case
        
        // Calculate the total capacity of one bag
        int total_capacity = K * M;
        
        // Calculate the number of bags needed
        int bags_needed = (N + total_capacity - 1) / total_capacity;

        // Output the result for the current test case
        cout << bags_needed << endl;
    }

    return 0;
}
