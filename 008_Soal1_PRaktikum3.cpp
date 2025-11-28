#include <iostream>
#include <string>

using namespace std;

int main() {
    int skorm = 0;
    int skors = 0;

    string inm, ins;

    while (skorm < 2 && skors < 2) {
        cout <<" "<< endl;
        cout <<"Input kertas,batu, atau gunting"<< endl;
        cout <<"Input Om Martin:"<< endl;
        cin >> inm;
        cout <<"Input Sore:"<< endl;
        cin >> ins;

        if ((inm == "gunting" && ins == "kertas") ||
            (inm == "batu" && ins == "gunting") ||
            (inm == "kertas" && ins == "batu")) {
            
            skorm++;
            cout << "Om Martin menang!!" << endl;

        } else if (inm == ins) {
        
        } else {
            skors++;
            cout << "Sore Menang!!" << endl;
        }

        cout << "Om Martin: " << skorm << endl;
        cout << "Sore: " << skors << endl;
    }

    cout << "Game selesai....." << endl;

    return 0;
}