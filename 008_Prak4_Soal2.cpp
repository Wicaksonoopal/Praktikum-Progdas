#include <iostream>
using namespace std;

int main() {
    int angka[7];
    
    for (int i = 0; i < 7; i++) {
        cout << "Masukkan Angka Ke " << i + 1 << ":" << endl;
        cin >> angka [i];
    }

cout << "Urutan Asli: ";
for (int i = 0; i < 7; i++) {
    cout << angka [i];

    if (i < 6) {
        cout << " ";
    }
}
cout << "" << endl;

cout << "Urutan Terbalik: ";
for (int i = 6; i >= 0; i--) {
    cout << angka[i];

    if (i > 0) {
        cout << " ";
    }
}
cout << "" << endl;
    return 0;
}