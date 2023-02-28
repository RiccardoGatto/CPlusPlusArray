#include <array>
#include <iostream>
using namespace std;
int faiSomma(int arr[], int lung)
{
    int sum = 0;
    for (int i = 0; i < lung; i++)
    {
        sum += arr[i];
    }
    return sum;
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
    int lunghezza = sizeof(interi)/sizeof(interi[0]);
    cout << "\nLa somma di tutti i numeri dell' array e' " << faiSomma(interi, lunghezza);
}