#include <array>
#include <iostream>
using namespace std;
int checkMax(int arr[], int lung)
{
    int max = arr[0];
    for (int i = 1; i < lung; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    cout << "\nIl piu' grande di tutti i numeri inseriti nell'array e' " << checkMax(interi, lunghezza);
}