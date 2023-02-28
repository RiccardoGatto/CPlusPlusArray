#include <array>
#include <iostream>
using namespace std;
int checkSequenze(int arr[], int lung)
{
    int sequenze = 0;
    int i1 = 0;
    int i2 = 0;
    while (i1 < lung)
    {
        while (i2 < lung)
        {
            if (arr[i2+1] < arr[i2])
            {
                sequenze++;
            }
            i2++;
        }
        i1=i2;
    }
    return sequenze;
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
    cout << "\nLe sequenze ordinate nell'array sono' " << checkSequenze(interi, lunghezza);
}