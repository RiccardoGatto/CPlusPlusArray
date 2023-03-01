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
    for (int i = 0; i < quanti; i++) //RIEMPIO L'ARRAY
    {
        cout << "Ora inserisci il " << i + 1 << " numero: ";
        cin >> interi[i];
    }
    int lunghezzaOutput = contaPari(interi, quanti); // CONTO QUANTI PARI CI SONO NELL'ARRAY CHE HO RIEMPITO
    int pari[lunghezzaOutput]; // DEFINISCO UN ARRAY DI LUNGHEZZA QUANTO IL NUMERO DI PARI PRIMA DEFINITO
    int index = 0; // INIZIALIZZO UN INDICE CHE MI SCORRE L'ARRAY DEI RISULTATI
    for (int i = 0; i < quanti; i++) // SCORRO L'ARRAY ALLA RICERCA DEGLI ELEMENTI PARI
    {
        if (interi[i] % 2 == 0)
        {
            pari[index] = interi[i]; // SE E' PARI LO AGGIUNGO ALL'ARRAY DEI RISULTATI
            index++; // INCREMENTO L'INDICE DELL'ARRAY RISULTATI
        }
    }
    cout << "\n________________________________________________________\n\n";
    for (int i = 0; i < lunghezzaOutput; i++) // SCORRO E VISUALIZZO L'ARRAY DEI RISULTATI
    {
        cout << i+1 << " elemento: " << pari[i] << endl;
    }
}