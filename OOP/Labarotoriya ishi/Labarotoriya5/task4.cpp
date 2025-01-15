#include <iostream>
using namespace std;

int main() {
    long int n;
    cout << "Son kiritiring: ";
    cin >> n;
    unsigned char n4 = n;
    cout << "n4 (unsigned char): " << n4 << " (ASCII: " << int(n4) << ")" << endl;
    return 0;
}
