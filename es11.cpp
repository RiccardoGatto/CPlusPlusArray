#include <array>
#include <iostream>
using namespace std;

void riempi(int arr[], int lung)
{
    for (int i = 0; i < lung; i++) // RIEMPIO L'ARRAY
    {
        cout << "Ora inserisci il " << i + 1 << " numero: ";
        cin >> arr[i];
    }
}

void mostra(int arr[], int lung)
{
    for (int i = 0; i < lung; i++)
    {
        cout << i + 1 << " elemento: " << arr[i] << endl;
    }
}

int *concatena(int arr1[], int l1, int arr2[], int l2)
{
    int lRis = l1 + l2;
    int risultato[lRis];
    for (int i = 0; i < l1; i++)
    {
        risultato[i] = arr1[i];
    }
    for (int i = l1; i < lRis; i++)
    {
        risultato[i] = arr2[i - l1];
    }
    mostra(risultato, lRis);
    return risultato;
}

int main()
{
    int quanti1;
    cout << "Di quanti elementi? ";
    cin >> quanti1;
    cout << endl;
    int interi1[quanti1];
    riempi(interi1, quanti1);
    int quanti2;
    cout << "Di quanti elementi? ";
    cin >> quanti2;
    cout << endl;
    int interi2[quanti2];
    riempi(interi2, quanti2);
    int *arrayConcatenato = concatena(interi1, quanti1, interi2, quanti2);
}
