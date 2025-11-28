#include <iostream>
using namespace std;

int main() {
    char masukin[100];
    int panjang = 0;

    cout << "Kata-kata hari ini masehhh:";
    cin.getline(masukin, 100);
    char *masuk = masukin;

    while (*masuk != '\0'){
        if (*masuk != ' '){
            panjang++;
        }
        masuk++;
    }
cout << "Panjang kata-kata maseh hari ini adalah " << panjang << " karak ter." << endl;

return 0;
}