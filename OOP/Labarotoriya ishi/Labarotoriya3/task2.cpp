#include <iostream>
using namespace std;

int main() {
    int son1, son2;

    cout << "Iltimos, birinchi butun sonni kiriting: ";
    cin >> son1;

    cout << "Iltimos, ikkinchi butun sonni kiriting: ";
    cin >> son2;

    cout << "Mantiqiy shartlar natijalari:" << endl;

    cout << "1. " << son1 << " > 0 && " << son2 << " > 0 : " 
         << ((son1 > 0 && son2 > 0) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << "2. " << son1 << " > 0 || " << son2 << " > 0 : " 
         << ((son1 > 0 || son2 > 0) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << "3. !" << son1 << " > 0 : " 
         << (!(son1 > 0) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << "4. " << son1 << " == " << son2 << " : " 
         << ((son1 == son2) ? "rost (true)" : "yolg'on (false)") << endl;

    cout << "5. " << son1 << " != " << son2 << " : " 
         << ((son1 != son2) ? "rost (true)" : "yolg'on (false)") << endl;

    return 0;
}
