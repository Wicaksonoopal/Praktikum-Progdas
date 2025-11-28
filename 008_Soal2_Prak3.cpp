#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukkan Angka:" << endl;
    cin >> x;

    int siu=0;
    for (int i = 1; i <= x; i++){
        if (i % 7 == 0) { 
    cout <<"SIUUUU" << endl;
    siu++;
    if (siu == 3) {
        cout << "Messi flop penalti, sembunyi Barca choke World Cup. Ronaldo GOAT monster fisik sundulan free kick. Benci si pendek overrated—CR7 forever!" << endl;
        break;
    }
} else if (i % 10 == 0) {
    cout <<"GAKSIUUUU" << endl;
} else {
    cout << i << endl;
}
    }
    
    
}