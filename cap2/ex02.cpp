/*
    2-  Faça um algoritmo para imprimir o valor 2.346728 com 1, 2, 3 e 5 casas decimais.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float numero = 2.346728;
    cout << fixed;
    cout << "1 casa: " << setprecision(1) << numero << endl;
    cout << "2 casas: " << setprecision(2) << numero << endl;
    cout << "3 casas: " << setprecision(3) << numero << endl;
    cout << "5 casas: " << setprecision(5) << numero << endl;

    return 0;
}