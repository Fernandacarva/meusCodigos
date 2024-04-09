/*
 2- Escreva uma função para receber por parâmetro o raio de uma esfera e calcular o seu volume através da fórmula V = (4 * PI * R3) /3.
*/

#include <iostream>
#include <cmath>

using namespace std;

int parametro(double raio)
{
    double volume, pi;

    pi = 3.14;
    volume = 100;
    raio = 40;
    
    volume = (4 * pi * raio) / 3;
    return volume;
}

int main()
{
    double recebe;

    recebe = parametro(3.0);
    cout << "Volume" << " " << recebe << endl;

    return 0;
}