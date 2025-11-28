#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toVaporwave(string input) {
    string hasil = "";
    string up = "";

    for (char c : input) {
        up += toupper(c);
    }

    for (int i = 0; i < up.length(); i++) {
        char c = up[i];

        if (c == ' ') {
            hasil += "  ";
        }
        else {
            hasil += c;
            if (i < up.length() - 1 && up[i + 1] != ' ') {
                hasil += " ";
            }
        }
    }

    return hasil;
}

int main() {
    string masukin;
     cout << "Masukkan masukin: ";
    getline(cin, masukin);

    cout << toVaporwave(masukin) << endl;

    return 0;
}