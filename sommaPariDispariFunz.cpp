#include <string>
#include <array>
#include <iostream>
using namespace std;
void faiSomme(int num[], int lung)
{
    int pari = 0;
    int dispari = 0;
    /*   CICLI SEPARATI
    for (int i = 0; i < lung; i++)
    {
        if (num[i] % 2 == 0)
        {
            pari += num[i];
        }
    }
    for (int i = 0; i < lung; i++)
    {
        if (num[i] % 2 != 0)
        {
            dispari += num[i];
        }
    }
    */
    // CICLO UNICO
    for (int i = 0; i < lung; i++)
    {
        if (num[i] % 2 == 0)
        {
            pari += num[i];
        }
        else
        {
            dispari += num[i];
        }
    }
    cout << "La somma dei pari dell'array e' " << pari << endl;
    cout << "La somma dei dispari dell'array e' " << dispari << endl;
}
int main()
{
    int quanti;
    cout << "Di quanti elementi? ";
    cin >> quanti;
    int numeri[quanti];
    for (int i = 0; i < quanti; i++)
    {
        cout << "Ora inserisci il " << i + 1 << " numero: ";
        cin >> numeri[i];
    }
    faiSomme(numeri, quanti);
}