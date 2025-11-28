#include <iostream>
using namespace std;

int main(){
    int angka[] = {3,4,7,2,8};

    for (int i = 0; i < 5; i++){
        if (angka[i] > 5){
            cout << "Ditemukan: " << angka[i] << endl;
            break; //keluar loop ketika kondisi yang diinginkan sudah ketemu
        }
    }
}