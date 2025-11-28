#include <iostream>
using namespace std;

int main()
{
string email, p1, p2, p3;
{
cout <<"Masukkan Email:" << endl;
cin >> email;
}
{
cout <<"Masukkan Password Pertama:" << endl;
cin >> p1;
}
{
cout <<"Masukkan Password Kedua:" << endl;
cin >> p2;
}
{
cout <<"Masukkan Password Ketiga:" << endl;
cin >> p3;
}


if ((p1==p2)&&(p2==p3)) {
        cout <<"Password sudah terkonfirmasi 3 kali,akun berhasil dibuat!" << endl;
}

else {
cout <<"Konfirmasi Password gagal,Membatalkan pembuatan akun..." << endl;
}

}