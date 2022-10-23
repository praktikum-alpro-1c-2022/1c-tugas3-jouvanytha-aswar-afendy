#include <iostream>
using namespace std;

int main (){
    float I,V,R;

    cout << "Menghitung Kuat Arus Listrik" << endl;
    cout << "Masukkan Tegangan Listrik : " << endl;
    cin >> V;

    cout << "Masukkan Hambatan Listrik : " << endl;
    cin >> R;

    I = V/R;
    cout << "Besar Kuat Arus Listrik = " << I << " A" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Menghitung Tegangan Listrik" << endl;
    cout << "Masukkan Kuat Arus Listrik : " << endl;
    cin >> I;

    cout << "Masukkan Hambatan listrik : " << endl;
    cin >> R;

    V = I*R;
    cout << "Besarnya Tegangan LIstrik = " << V << " V" <<endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Menghitung Hambatan LIstrik" << endl;
    cout << "Masukkan Tegangan Listrik : " << endl;
    cin >> V;

    cout << "Masukkan Kuat Arus Listrik : " << endl;
    cin >> I;

    R = V/I;
    cout << "Besarnya Hambatan Listrik = " << R << " Ohm" << endl;

return 0;
}
