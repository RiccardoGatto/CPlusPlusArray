#include <array>
#include <iostream>
using namespace std;
bool ordinato(int arr[], int lung)
{
    if (lung == 1)
    {
        return true;
    }
    else
    {
        if (arr[lung] < arr[lung - 1])
        {
            return false;
        }
        else
        {
            return ordinato(arr, lung - 1);
        }
    }
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
    (ordinato(interi, lunghezza)) ? cout << "L'array e' ordinato" : cout << "L'array NON e' ordinato";
}