#include <iostream>
#include <string>

using namespace std;

int main() {
    string username, password, email;
    cout <<"Masukkan Username:"<< endl;
    cin >> username;

    bool hurufbesar = false;
    for (int i = 0; i < username.length(); i++) {
        if (username[i] >= 'A' && username[i] <= 'Z') {
            hurufbesar = true;
            break; 
        }
    }

    if (hurufbesar == true) {
        cout << "USERNAME MEMILIKI HURUF BESAR!!" << endl;
    } else {
        cout << "Masukkan Password:" << endl;
        cin >> password;
        cout << "Masukkan Email:" << endl;
        cin >> email;
        
        cout << "Akun berhasil dibuat!" << endl;
    }

    return 0;
}