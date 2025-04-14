#include <iostream>
using namespace std;

int main() {
    int a, num = 1;
    cout << "Enter a: ";
    cin >> a;

    for (int i = 1; i <= a * 2; i++) {
        if (i % 2 != 0) {
            cout << i;
            num++;
            if (num <= a) cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
