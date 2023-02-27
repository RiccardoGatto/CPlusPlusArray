#include <string>
#include <array>
#include <iostream>
using namespace std;

int main()
{
    int quanti;
    int pari = 0;
    int dispari = 0;
    cout << "Di quanti elementi? ";
    cin >> quanti;
    int numeri[quanti];
    for (int i = 0; i < quanti; i++)
    {
        cout << "Ora inserisci il " << i+1 << " numero: ";
        cin >> numeri[i];
    }
    for (int i = 0; i < quanti; i++)
    {
        if (numeri[i] % 2 == 0)
        {
            pari += numeri[i];
        }
    }
    for (int i = 0; i < quanti; i++)
    {
        if (numeri[i] % 2 != 0)
        {
            dispari += numeri[i];
        }
    }
    cout << "La somma dei pari e': " << pari << endl;
    cout << "La somma dei dispari e': " << dispari << endl;
}