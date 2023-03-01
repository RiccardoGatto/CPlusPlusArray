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

int checkSequenze(int arr[], int lung)
{
    int sequenze = 0;
    for (int i = 0; i < lung; i++)
    {
        if ((arr[i] < arr[i + 1]) and (i < lung - 1))
        {
            while (arr[i] < arr[i + 1])
            {
                i++;
            }
            sequenze++;
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
    riempi(interi, quanti);
    cout << "\nLe sequenze ordinate nell'array sono' " << checkSequenze(interi, quanti);
}