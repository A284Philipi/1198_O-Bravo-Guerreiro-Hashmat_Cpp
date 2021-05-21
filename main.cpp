#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int numero1, numero2, resultado, numero_troca;
    while (cin >> numero1){
        cin >> numero2;
        if (numero1 > numero2){
            numero_troca = numero1;
            numero1 = numero2;
            numero2 = numero_troca;
        }
        resultado = numero2 - numero1;
        cout << resultado <<endl;
    }
    return 0;
}
