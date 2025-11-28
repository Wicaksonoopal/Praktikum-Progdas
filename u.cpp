#include <iostream>
using namespace std;

int main(){
    int u,o;
    cin >> u;
    cin >> o;
    for (int i = u; i <= o; i++){
        if (i % 2 != 0) {
            continue; //skip nomor ganjil
        }
        cout << i << " ";
    }
}
//modif