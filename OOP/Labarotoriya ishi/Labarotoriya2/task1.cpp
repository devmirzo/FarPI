#include <iostream>
using namespace std;

int main() {
    int son1, son2;

    cout << "Iltimos, birinchi butun sonni kiriting: ";
    cin >> son1;

    cout << "Iltimos, ikkinchi butun sonni kiriting: ";
    cin >> son2;

    cout << "\nArifmetik amallar natijalari:" << endl;
    cout << son1 << " + " << son2 << " = " << (son1 + son2) << endl;
    cout << son1 << " - " << son2 << " = " << (son1 - son2) << endl;
    cout << son1 << " * " << son2 << " = " << (son1 * son2) << endl;
    cout << son1 << " / " << son2 << " = " << (son1 / son2) << endl;
    cout << son1 << " % " << son2 << " = " << (son1 % son2) << endl;
 
    return 0;
}
