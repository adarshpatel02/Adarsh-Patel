#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    if (a % 2 == 0) {
        a = a - 1;
    }

    for (int i = 0; i < a; i++) {
        cout << 2 * i + 1;
        if (i != a - 1) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}
