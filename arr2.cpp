#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int jumlahMatkul;
    float jumlahNilai = 0;
    float rataRata;
    cout <<"Masukkan Jumlah Matkul:"<< endl;
    cin >> jumlahMatkul;
    int matkul[jumlahMatkul];
    for (int i = 0; i < jumlahMatkul; i++) {
        cout <<"Masukkan Nilai Matkul Ke "<< i+1<< ":"<< endl;
        cin >> matkul[i];
        jumlahNilai += matkul[i];
    }
    rataRata = jumlahNilai / jumlahMatkul;
    cout << fixed << setprecision(2)<< rataRata << endl;
    return 0;
}