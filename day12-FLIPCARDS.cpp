#include <iostream>
#include <algorithm> // For std::min

int main() {
    int T;
    std::cin >> T; // Read number of test cases

    while (T--) {
        int N, X;
        std::cin >> N >> X; // Read N and X
        // Calculate the minimum flips required
        int min_flips = std::min(X, N - X);
        std::cout << min_flips << std::endl; // Output the result
    }

    return 0;
}
