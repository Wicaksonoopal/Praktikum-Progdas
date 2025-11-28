#include <iostream>
using namespace std;
int main (){
int awal, akhir;
cout <<"Masukkan angka minimal:"<< endl;
cin >> awal;
cout <<"Masukkan jumlah perulangan"<< endl;
cin >> akhir;
for(int i = 0; i < akhir; i++){
    awal += 5;
    cout << awal << endl;
}
}