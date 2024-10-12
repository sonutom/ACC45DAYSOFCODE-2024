#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;
        
        // Calculate total capacity of one bag
        int capacity = K * M;
        
        // Calculate the minimum number of bags required
        int bagsNeeded = (N + capacity - 1) / capacity;
        
        cout << bagsNeeded << endl;
    }
    
    return 0;
}
