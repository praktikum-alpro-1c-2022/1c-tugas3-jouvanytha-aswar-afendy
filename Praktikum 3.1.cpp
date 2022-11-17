#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //c^(2)=a^(2)+b^(2)
    float alas = 8, tinggi = 10;
    float sisiMiring;

    cout << "Menghitung Sisi Miring menggunakan Rumus Pythagoras" << endl;
    cout << "Alas = 8" << endl;
    cout << "Tinggi = 10" << endl;

    sisiMiring = sqrt( pow(alas,2) + pow(tinggi,2));
    cout << "Sisi Miring = "<< sisiMiring;

return 0;
}
