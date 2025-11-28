#include <iostream>
using namespace std;

int main(){
    int hitunganLuar = 0;
    int hitunganDalam;

    while (hitunganLuar < 5) { //loop Luar
        hitunganDalam = 0;
        while (hitunganDalam < 5) { //loop Dalam
            cout << "* ";
            hitunganDalam++;
        }
        cout << endl;
        hitunganLuar++;
    }

    return 0;
}