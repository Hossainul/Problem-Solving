#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool possible = false;

    // Check if it's possible to deal exactly 'c' damage with 'a' and 'b'
    for (int i = 0; i <= c; i += a) {
        if ((c - i) % b == 0) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
