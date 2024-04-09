/*
 4- Escreva uma função para receber a altura de um homem, calcular e imprimir o seu peso ideal com a fórmula pesoIdeal = (72.7 * altura - 58).
*/

#include <iostream>

using namespace std;


int alturaQualquer(double altura)
{
    double pesoIdeal;
    pesoIdeal = (72.7 * altura) - 58;
    return pesoIdeal;
}


int main()
{
    double suaAltura = 0;
    double recebe = 0;

    cout << "Digite sua altura: " << endl;
    cin >> suaAltura;

    recebe = alturaQualquer(suaAltura);
    cout << "Seu peso ideal é: " << recebe << " " << "kg" << endl;

    return 0;
}