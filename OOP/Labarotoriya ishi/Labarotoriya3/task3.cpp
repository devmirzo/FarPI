#include <iostream>
using namespace std;

int main() {
    int son1, son2;

    cout << "Iltimos, birinchi butun sonni kiriting: ";
    cin >> son1;

    cout << "Iltimos, ikkinchi butun sonni kiriting: ";
    cin >> son2;

    cout << "\nTaqqoslash operatorlari natijalari:" << endl;

    cout << son1 << " < " << son2 << " : " 
         << ((son1 < son2) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << son1 << " > " << son2 << " : " 
         << ((son1 > son2) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << son1 << " <= " << son2 << " : " 
         << ((son1 <= son2) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << son1 << " >= " << son2 << " : " 
         << ((son1 >= son2) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << son1 << " == " << son2 << " : " 
         << ((son1 == son2) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << son1 << " != " << son2 << " : " 
         << ((son1 != son2) ? "rost (true)" : "yolg'on (false)") << endl;

    return 0;
}
