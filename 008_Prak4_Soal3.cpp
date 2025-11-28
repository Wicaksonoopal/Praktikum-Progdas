#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    string cetak = "";

    for (int i = 0; i < input.length(); i++) {
        char karakter = input[i];
        
        bool sudah = false;

        for (int k = 0; k < cetak.length(); k++) {
            if (cetak[k] == karakter) {
                sudah = true;
                break;
            }
        }

        if (sudah == false) {
            int hitungan = 0;
            
            for (int j = 0; j < input.length(); j++) {
                if (input[j] == karakter) {
                    hitungan++;
                }
            }

            cout << karakter << " muncul " << hitungan << " kali" << endl;

            cetak += karakter;
        }
    }

    return 0;
}