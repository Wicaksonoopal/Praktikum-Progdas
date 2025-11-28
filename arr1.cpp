#include <iostream>
using namespace std;

int main (){
int a[5];

for(int i = 0; i < 5; i++){
cin >> a[i]; //input array
}

for(int i = 0; i < 5; i++){
cout << "Bilangan ke-" << i + 1 << " adalah " << a[i]
<<endl;
//output array
}
}