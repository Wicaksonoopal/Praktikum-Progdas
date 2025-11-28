#include <iostream>
using namespace std;

int main() {
    float suhu[5];
    float total = 0;
    float maxSuhu;
    int indeksMax = 0;

    cout << "Masukkan 5 buah data suhu" << endl;
    for(int i = 0; i < 5; i++) {
        cout << i + 1 << " : ";
        cin >> suhu[i];
        total += suhu[i];
        if(i == 0 || suhu[i] > maxSuhu) {
            maxSuhu = suhu[i];
            indeksMax = i;
        }
    }

    cout << "\nData suhu yang Anda masukkan:" << endl;
    for(int i = 0; i < 5; i++)
        cout << suhu[i] << endl;

    cout << "\nSuhu rata-rata: " << total / 5 << endl;
    cout << "Suhu maksimal: " << maxSuhu << endl;
    cout << "Indeks suhu maksimal: " << indeksMax << endl;

    return 0;
}