#include <iostream>

using namespace std;

int main()
{
    int matriz[2][3];

    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << "Digite um valor: ";
            cin >> matriz[linha][coluna];
        }
    }

    cout << "Matriz:" << endl;

    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }

        cout << endl;
    }

    return 0;
}