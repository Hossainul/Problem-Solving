#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> find_sequence(int n, int k) {
    vector<int> sequence(n - 1, 1);
    int remaining_sum = k - (n - 1);
    
    for (int i = 0; i < n - 1; ++i) {
        if (remaining_sum <= 0) {
            break;
        }
        int max_increment = min(remaining_sum, sequence[i]);
        sequence[i] -= max_increment;
        sequence.push_back(max_increment);
        remaining_sum -= max_increment;
    }

    while (sequence.size() < n) {
        sequence.push_back(0);
    }

    return sequence;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        
        vector<int> sequence = find_sequence(n, k);
        for (int j = 0; j < sequence.size(); ++j) {
            cout << sequence[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
