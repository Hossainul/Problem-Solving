#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N; // Read the value of N from the user
    std::string sequence;

    for(int i = 0; i < N; ++i) {
        // Add 'a' twice, then 'b' twice, in a repeating pattern
        if((i / 2) % 2 == 0) {
            sequence += 'a';
        } else {
            sequence += 'b';
        }
    }

    std::cout << sequence << std::endl; // Output the sequence
    return 0;
}
