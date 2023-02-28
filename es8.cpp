#include <array>
#include <iostream>
using namespace std;
int indexMax(int arr[], int lung)
{
    int max = arr[0];
    int indice=0;
    for (int i = 1; i < lung; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            indice=i;
        }
    }
    return indice;
}
int main()
{
    int quanti;
    cout << "Di quanti elementi? ";
    cin >> quanti;
    cout << endl;
    int interi[quanti];
    for (int i = 0; i < quanti; i++)
    {
        cout << "Ora inserisci il " << i + 1 << " numero: ";
        cin >> interi[i];
    }
    int lunghezza = sizeof(interi) / sizeof(interi[0]);
    cout << "Il primo numero piu' grande si trova in posizione " << indexMax(interi, lunghezza);
}