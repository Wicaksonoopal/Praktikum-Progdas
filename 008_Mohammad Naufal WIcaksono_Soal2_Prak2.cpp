#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
 int main()
 {
    string kategori;
    
    cout <<"Masukkan Kategori Buku Yang Anda Inginkan:"<< endl;
    getline(cin, kategori);
        transform(kategori.begin(), kategori.end(), kategori.begin(),
              [](unsigned char c){ return tolower(c); });

    if (kategori == "komputer" || kategori ==  "sains" || kategori == "ilmu"){
        cout << "000 Komputer, Sains, dan Ilmu:" << endl;
        cout << "      " << endl;
        cout << "000 Sains Komputasi" << endl;
        cout << "001 Ilmu" << endl;
        cout << "002 Proses Data " << endl;
        cout << "003 Pemrograman Komputer" << endl;
        }
        else if (kategori == "ensiklopedia" ||  kategori ==  "fakta"){
        cout << "010 Ensiklopedia, dan Fakta:" << endl;
        cout << "      " << endl;
        cout << "010 Ensiklopedia Umum" << endl;
        cout << "011 Ensiklopedia Amerika" << endl;
        cout << "012 Ensiklopedia Jerman " << endl;
        cout << "013 Ensiklopedia Spanyol" << endl;
        }
        else if (kategori == "berita" ||  kategori ==  "jurnalisme"){
        cout << "020 Berita, dan Jurnalisme:" << endl;
        cout << "      " << endl;
        cout << "020 Jurnalisme" << endl;
        cout << "021 Koran Amerika" << endl;
        cout << "022 Koran British " << endl;
        cout << "023 Koran Eropa" << endl;
        cout << "024 Koran Itali" << endl;
        }
        else {
        cout << "Kategori Tidak Ditemukan" << endl;
        }

 
 }