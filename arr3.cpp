#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MAKS = 1000;
    int data[n];
    int frekuensi[MAKS + 1] = {0};

    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        frekuensi[data[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        int angka = data[i];
        if (frekuensi[angka] > 0) {
            cout << angka << " muncul " << frekuensi[angka] << " kali" << endl;
            frekuensi[angka] = 0;
        }
    }

    return 0;
}