// https://www.codechef.com/problems/JDELAY?tab=statement

// input
// 1
// 5
// 1 3
// 4 4
// 4 10
// 1 11
// 2 7 

#include <iostream>
using namespace std;

int main() {
    int T;
    cout << "Enter number of test cases: ";  // Add this to know the program is reaching here
    cin >> T;

    while (T--) {
        int N;
        cout << "Enter number of submissions: ";  // Debugging
        cin >> N;
        int delayed_count = 0;

        for (int i = 0; i < N; ++i) {
            int S, J;
            cout << "Enter submission and judging time: ";  // Debugging
            cin >> S >> J;
            if (J - S > 5) {
                delayed_count++;
            }
        }

        cout << "Delayed count for this test case: " << delayed_count << endl;  // Output result
    }
    
    return 0;
}
