#include <iostream>

int main() {
    using std::cin;
    using std::cout;

    int a, b, d;
cout << "vvodi a1, an, d: ";
    if (!(cin >> a >> b >> d) || d == 0) {
        return 1;
    }
cout << "kratnie 3: ";

    if (d > 0) {
        for (int i = a; i <= b; i += d) {
            if (i % 3 == 0) cout << i << " ";
        }
    } else {
        for (int i = a; i >= b; i += d) {
            if (i % 3 == 0) cout << i << " ";
        }
    }
    cout << "\n";

    return 0;}