#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

    int main() {
    string fakultas;

    cout <<"Masukkan Nama Lengkap Fakultas Anda" << endl;
    cout <<"(Contoh:Teknik,Matematika & Ipa,Ekonomi & Bisnis)" << endl;
    cout <<": ";
    getline(cin, fakultas);
    
       transform(fakultas.begin(), fakultas.end(), fakultas.begin(),
              [](unsigned char c){ return tolower(c); });

 if (fakultas == "ilmu sosial & politik" || fakultas == "ekonomi & bisnis" ||
        fakultas == "vokasi" || fakultas == "hukum" ||
        fakultas == "matematika & ipa" || fakultas == "teknik")
    {
        cout << "Fakultas " << fakultas << " di Unesa Ketintang" << endl;
    }
    else if (fakultas == "ilmu pendidikan" || fakultas == "kedokteran" ||
             fakultas == "psikologi" || fakultas == "ilmu keolahragaan dan kesehatan" ||
             fakultas == "bahasa dan seni")
    {
        cout << "Fakultas " << fakultas << " di Unesa Lidah Wetan" << endl;
    }
    else if (fakultas == "ketahanan pangan")
    {
        cout << "Fakultas " << fakultas << " di Unesa Moestopo" << endl;
    }
    else
    {
        cout << "Fakultas tidak ditemukan." << endl;
    }

    return 0;
}
