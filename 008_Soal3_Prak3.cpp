#include <iostream>

using namespace std;

int main() {
    int lapis;
    cout <<"Masukkan Lapis Benteng:"<< endl;
    cin >> lapis;

    for (int i = 1; i <= lapis; i++) {
        for (int j = 1; j <= lapis - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}