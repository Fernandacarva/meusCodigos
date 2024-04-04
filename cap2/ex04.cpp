/*
    4-  Construa um algoritmo para ler 5 valores inteiros, calcular e imprimir a soma desses valores.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5 = 0;
    int soma = 0;

    cout << "Digite cinco números inteiros" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    soma = num1 + num2 + num3 + num4 + num5;
    cout << soma << endl;

    return 0;
}