#include <array>
#include <iostream>
using namespace std;
bool presente(int num, int arr[], int lung)
{
    for (int i = 0; i < lung; i++)
    {
        if (num==arr[i])
        {
            return true;
        }
    }
    return false;
}

int comuni(int arr1[], int lung1, int arr2[], int lung2)
{
    int elementiComuni = 0;
    int min;
    if (lung1 > lung2)  // CERCO QUALE ARRAY HA IL NUMERO MINORE DI ELEMENTI
    {
        min = lung2;
    }
    else
    {
        min = lung1;
    }
    int appoggio[min];  // CREO UN ARRAY DI APPOGGIO
    for (int i = 0; i < min; i++) // RIEMPIO L'ARRAY DI APPOGGIO CON NULL
    {
        appoggio[i] = NULL;
    }
    int index = 0;
    for (int i = 0; i < lung1; i++) // INIZIO A CERCARE GLI ELEMENTI IN COMUNE
    {
        for (int y = 0; y < lung2; y++)
        {
            if (arr1[i] == arr2[y]) // TROVO DUE ELEMENTI UGUALI
            {
                if (!presente(arr1[i], appoggio, min)) // SE NON L'HO GIA' CONTROLLATO PRECEDENTEMENTE 
                {
                    elementiComuni++;
                    appoggio[i] = arr1[i];  //  AGGIUNGO L'ELEMENTO IN COMUNE NELL'ARRAY DI APPOGGIO
                    index++;
                }
            }
        }
    }
    return elementiComuni;
}
int main()
{
    int quanti1;
    cout << "Di quanti elementi? ";
    cin >> quanti1;
    cout << endl;
    int interi1[quanti1];
    for (int i = 0; i < quanti1; i++)
    {
        cout << "Ora inserisci il " << i + 1 << " numero: ";
        cin >> interi1[i];
    }
    int quanti2;
    cout << "Di quanti elementi? ";
    cin >> quanti2;
    cout << endl;
    int interi2[quanti2];
    for (int i = 0; i < quanti2; i++)
    {
        cout << "Ora inserisci il " << i + 1 << " numero: ";
        cin >> interi2[i];
    }
    cout << "\nI due array hanno " << comuni(interi1, quanti1, interi2, quanti2) << " elementi in comune.";
}