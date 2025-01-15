#include <iostream>
using namespace std;

// Faktoriyal hisoblash uchun funksiya
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

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
        b[i] = factorial(i); 
    }

    cout << "Massiv elementlari (i!): ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
    return 0;
}
