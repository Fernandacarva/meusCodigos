/*
 1- Escreva uma função para receber dois números inteiros e imprimir o produto desses valores.
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, produto;
    num1 = 0;
    num2 = 0;
    produto = 0;

    cout << "Digite um número: " << endl;
    cin >> num1;

    cout << "Digite outro número: " << endl;
    cin >> num2;

    produto = num1 * num2;
    cout << "O produto é: " << produto << endl;

    return 0;
}