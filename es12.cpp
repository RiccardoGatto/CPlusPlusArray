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

void mostra(int arr[], int lung) // STAMPA OGNI SINGOLO ELEMENTO DELL'ARRAY IN INPUT
{
    for (int i = 0; i < lung; i++)
    {
        cout << i + 1 << " elemento: " << arr[i] << endl;
    }
}

bool presente(int num, int arr[], int lung) // CERCA SE UN NTERO E' PRESENTE NELL'ARRAY IN INPUT
{
    for (int i = 0; i < lung; i++)
    {
        if (num == arr[i])
        {
            return true;
        }
    }
    return false;
}

int *comuni(int arr1[], int lung1, int arr2[], int lung2)
{
    int elementiComuni = 0;
    int minimo = min(lung1, lung2);  // CERCO QUALE ARRAY HA IL NUMERO MINORE DI ELEMENTI
    int appoggio[minimo];            // CREO UN ARRAY DI APPOGGIO
    for (int i = 0; i < minimo; i++) // INIZIALIZZO L'ARRAY DI APPOGGIO CON NULL
    {
        appoggio[i] = (int)NULL;
    }

    for (int i = 0; i < lung1; i++) // INIZIO A CERCARE GLI ELEMENTI IN COMUNE
    {
        for (int y = 0; y < lung2; y++)
        {
            if ((arr1[i] == arr2[y]) and (!presente(arr1[i], appoggio, minimo))) // TROVO DUE ELEMENTI UGUALI E NON L'HO GIA' CONTROLLATO PRECEDENTEMENTE
            {
                appoggio[elementiComuni] = arr1[i]; //  AGGIUNGO L'ELEMENTO IN COMUNE NELL'ARRAY DI APPOGGIO
                elementiComuni++;                   // AGGIORNO IL NUMERO DI ELEMENTI COMUNI
            }
        }
    }
    int arrayComuni[elementiComuni]; // CREO UN ARRAY DELLE DIMENSIONI CORRETTE
    for (int i = 0; i < elementiComuni; i++)
    {
        arrayComuni[i] = appoggio[i]; // RIEMPIO IL NUOVO ARRAY A PARTIRE DALL'APPOGGIO
    }
    mostra(arrayComuni, elementiComuni); // STAMPO GLI ELEMENTI DELL'ARRAY
    return arrayComuni;
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
    int *risultato = comuni(interi1, quanti1, interi2, quanti2);
}