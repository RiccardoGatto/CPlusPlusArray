#include <array>
#include <iostream>
using namespace std;
int contaPari(int arr[], int lung)
{
    int totPari = 0;
    for (int i = 0; i < lung; i++)
    {
        if (arr[i] % 2 == 0)
        {
            totPari++;
        }
    }
    return totPari;
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
    // cout << contaPari(interi, lunghezza);
    int lunghezzaOutput = contaPari(interi, lunghezza);
    int pari[lunghezzaOutput];
    int index = 0;
    for (int i = 0; i < lunghezza; i++)
    {
        if (interi[i] % 2 == 0)
        {
            pari[index] = interi[i];
            index++;
        }
    }
    for (int i = 0; i < lunghezzaOutput; i++)
    {
        cout << pari[i] << "__" << endl;
    }
}