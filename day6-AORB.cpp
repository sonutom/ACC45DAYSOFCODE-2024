#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int score1 = 1500 - 6 * X - 4 * Y;
        int score2 = 1500 - 6 * Y - 2 * X;
        int maxScore = max(score1, score2);
        
        cout << maxScore << endl;
    }

    return 0;
}
