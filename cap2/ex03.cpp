/*
 3- Construa um algoritmo que faça a leitura de uma temperatura em graus Celsius e a apresente convertida em Fahrenheit. A fórmula de conversão: F = (9*C+160)/5.
*/

#include <iostream>

using namespace std;

int main()
{
    double grausC;
    double conversao = 0;

    cout << "Digite a temperatura: " << endl;
    cin >> grausC;

    conversao = (9 * grausC + 160) / 5;
    cout << conversao << " " << "Fº" << endl;

    return 0;

}
