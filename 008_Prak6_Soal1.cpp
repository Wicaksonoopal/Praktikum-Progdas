#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct penghuni {
    string nama;
    string tglmasuk;
};

const string file_utama = "aselii.txt";
const string file_backup = "fekk.txt";

bool cekk(string cari) {
    ifstream file(file_utama);
    string baris;
    
    if (file.is_open()) {
        while (getline(file, baris)) {
            if (baris == cari) {
                file.close();
                return true; 
            }
        }
        file.close();       
    }
    return false; 
}

void simpan(penghuni p) {
    ofstream file1(file_utama, ios::app);
    if (file1.is_open()) {
        file1 << p.nama << endl;
        file1 << p.tglmasuk << endl;
        file1.close();
    }

    ofstream file2(file_backup, ios::app);
    if (file2.is_open()) {
        file2 << p.nama << endl;
        file2 << p.tglmasuk << endl;
        file2.close();
    }
}

int main() {
    int n;
    
    cout << "Masukkan Jumlah Data Yang Ingin Dimasukkan:";
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        penghuni data;
        
        cout << "Nama Penghuni: ";
        getline(cin, data.nama);
        
        cout << "Tanggal Mulai Tinggal: ";
        getline(cin, data.tglmasuk);

        if (cekk(data.nama)) {
            cout << data.nama << " sudah terdaftar didalam Log Book!! Masukkan penghuni lainnya" << endl;
        } else {
            simpan(data);
            cout << data.nama << " berhasil dicatat kedalam Log Book" << endl;
        }
    }

    return 0;
}