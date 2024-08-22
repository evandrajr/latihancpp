#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a = 45, b = 4, c = 2;
    float ipangkat, iakar, isin, icos, itan;

   
    iakar = sqrt(b);
    cout << "Akar dari " << b << " adalah " << iakar << endl;

   
    ipangkat = pow(b, c);
    cout << b << " pangkat " << c << " adalah " << ipangkat << endl;

    
    float rad = a * M_PI / 180;

    
    isin = sin(rad);
    cout << "sin sudut " << a << " derajat adalah " << isin << endl;

    icos = cos(rad);
    cout << "cos sudut " << a << " derajat adalah " << icos << endl;

    itan = tan(rad);
    cout << "tan sudut " << a << " derajat adalah " << itan << endl;

    return 0;
}