/*
 5- Construa um algoritmo para ler 6 valores reais, calcular e imprimir a média desses valores.
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5, num6, media = 0;

    cout << "Digite números inteiros: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

    media = (num1 + num2 + num3 + num4 + num5 + num6) / 6;
    cout << "A média é: " << media << endl;

    return 0;
}