#include <array>
#include <iostream>
using namespace std;
int checkSequenze(int arr[], int lung)
{
    int sequenze = 0;
    for (int i = 0; i < lung-1; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            
        }
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