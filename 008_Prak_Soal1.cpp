#include <iostream>

using namespace std;

double penjumlahan(double a, double b){
     return a + b;
}
double pengurangan(double a, double b){
    return a - b;
};
double perkalian(double a, double b){
    return a * b;
};
double pembagian(double a, double b){
    return a / b;
};

int main() {
    int pilihan;
    double siji, loro;

    cout << "=== Kalkulator Sederhana ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    do {
        cout << "Pilih Operasi (1/2/3/4): ";
        cin >> pilihan;

        if (pilihan < 1 || pilihan > 4) {
            cout << "Pilihan tidak valid. Silakan pilih antara 1, 2, 3, atau 4." << endl;
        }
    } while (pilihan < 1 || pilihan > 4);

    cout << "Masukkan Angka Pertama: ";
    cin >> siji;
    cout << "Masukkan Angka Kedua: ";
    cin >> loro;

    switch (pilihan) {
        case 1:
            cout << "Hasil Penjumlahan: " << penjumlahan(siji, loro) << endl;
            break;

        case 2:
            cout << "Hasil Pengurangan: " << pengurangan(siji, loro) << endl;
            break;

        case 3:
            cout << "Hasil Perkalian: " << perkalian(siji, loro) << endl;
            break;

        case 4:
            if (loro == 0) {
                cout << "Error! Tidak dapat dibagi dengan 0." << endl;
            } else {
                cout << "Hasil Pembagian: " << pembagian(siji, loro) << endl;
            }
            break;
    }

    return 0;
}