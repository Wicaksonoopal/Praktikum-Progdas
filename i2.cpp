#include <iostream>
using namespace std;

int main(){
    int hitunganLuar = 0;
    int hitunganDalam, i, o;
    cin >> i;
    cin >> o;

    while (hitunganLuar < i) { //loop Luar
        hitunganDalam = 0;
        while (hitunganDalam < o) { //loop Dalam
            cout << "* ";
            hitunganDalam++;
        }
        cout << endl;
        hitunganLuar++;
    }

    return 0;
}