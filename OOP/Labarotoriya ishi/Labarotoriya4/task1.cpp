#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n (1 <= n < 10) sonini kiriting: ";
    cin >> n;

    if (n < 1 || n >= 10) {
        cout << "Iltimos, 1 <= n < 10 bo'lgan son kiriting!" << endl;
        return 1;
    }

    cout << "b ketma-ketligi (i qiymatlari): ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
