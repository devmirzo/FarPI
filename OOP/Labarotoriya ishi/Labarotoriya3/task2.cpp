#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "n (n < 10) sonini kiriting: ";
    cin >> n;

    if (n < 1 || n >= 10) {
        cout << "Iltimos, n < 10 bo'lgan natural son kiriting!" << endl;
        return 1;
    }

    int b[10]; 

    for (int i = 0; i < n; i++) {
        b[i] = i * i;
    }

    cout << "Massiv elementlari (i^2): ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
    return 0;
}
