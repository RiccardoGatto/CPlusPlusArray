#include <array>
#include <iostream>
using namespace std;

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
    int lungRis = quanti1 + quanti2;
    int arrayRisultato[lungRis];
    int indiceRis = 0;
    for (int i = 0; i < quanti1; i++)
    {
        arrayRisultato[indiceRis]=interi1[i];
        indiceRis++;
    }
    for (int i=0; i< quanti2; i++)
    {
        arrayRisultato[indiceRis]=interi2[i];
        indiceRis++;
    }
    for (int i=0; i<lungRis; i++)
    {
        cout << arrayRisultato[i] << endl;
    }
}
