/*
 7- Calcule e apresente o volume de uma lata de óleo, utilizando a fórmula volume = 3.14159 * raio * raio * altura.
*/

#include <iostream>

using namespace std;

int main()
{
    double volume, raio, altura = 0;

    cout << "Digite o raio e altura da lata " << endl;
    cin >> raio >> altura;

    volume = 3.14159 * raio * raio * altura;
    cout << "Volume da lata: " << volume << endl;

    return 0;
}