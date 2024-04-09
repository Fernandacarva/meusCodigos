/*
 3- Escreva uma função para receber a base e a altura de um triângulo. Esta função deve calcular e imprimir a sua área usando a equação Area = (Base * Altura) / 2.
*/

#include <iostream>

using namespace std;

int areaTriangulo(int base, int altura)
{
    int area;

    area = (base * altura) / 2;
    return area;
}


int main()
{
    int recebe = 0;

    recebe = areaTriangulo(20, 4);
    cout << "A area é: " << " " << recebe << endl;
    return 0;
}