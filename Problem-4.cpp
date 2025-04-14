#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " numbers separated by space: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    map<int, int> countMultiples;

    for (int i = 1; i <= 9; i++) {
        countMultiples[i] = 0;
    }

    for (int i = 1; i <= 9; i++) {
        for (int num : numbers) {
            if (num % i == 0) {
                countMultiples[i]++;
            }
        }
    }

    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << countMultiples[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

