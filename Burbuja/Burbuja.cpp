#include <iostream>
#include <cstdlib>

using namespace std;
int cont, cont2, cont3, cont4, temp;
int peso[5] = {0, 0, 0, 0, 0};

int main()
{
    for (cont = 0; cont < 5; cont++)
    {
        cout << "Ingresa tu peso\n";
        cin >> peso[cont];
    }
    for (cont2 = 0; cont2 < 5; cont2++)
    {
        cout << "El peso " << cont2 + 1 << " es: " << peso[cont2] << "\n";
    }
    //Ordenamiento de burbuja
    for (cont3 = 0; cont3 < 5; cont3++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (peso[i] > peso[i + 1])
            {
                temp = peso[i];
                peso[i] = peso[i + 1];
                peso[i + 1] = temp;
            }
        }
    }
    cout<<"Array ordenado\n";
    for (cont4 = 0; cont4 < 5; cont4++)
    {
        cout << "El peso " << cont4 + 1 << " es: " << peso[cont4] << "\n";
    }

    system("read -n 1 -s -p \"Presione cualquier tecla para continuar. .\"");
}
