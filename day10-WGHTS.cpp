#include <iostream>
using namespace std;

string canMeasureWeight(int W, int X, int Y, int Z) {
    // Check all combinations of weights
    if (W == X || W == Y || W == Z ||
        W == X + Y || W == X + Z || W == Y + Z ||
        W == X + Y + Z) {
        return "YES";
    }
    return "NO";
}

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z; // Read weights and object weight
        cout << canMeasureWeight(W, X, Y, Z) << endl; // Output the result
    }
    return 0;
}
