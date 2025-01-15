#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n (n > 0) sonini kiriting: ";
    cin >> n;

    if (n <= 0) {
        cout << "Iltimos, ijobiy son kiriting!" << endl;
        return 1;
    }

    double a[n];
    double sum = 0; 

    cout << "Massiv elementlarini kiriting: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

 
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            break; 
        }
        sum += a[i]; 
    }

    cout << "Birinci manfiy elementgacha bo‘lgan elementlarning yig'indisi: " << sum << endl;

    return 0;
}
