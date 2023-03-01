#include <array>
#include <iostream>
using namespace std;
int checkSequenze(int arr[], int lung)
{
    int sequenze = 0;
    bool check[lung-1];
    int ind=0;
    for (int i = 0; i < lung-1; i++)
    {
        if (arr[i]<arr[i+1])
        {
            check[i]=true;
        }
        else
        {
            check[i]=false;
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
    cout << "\nLe sequenze ordinate nell'array sono' " << checkSequenze(interi, quanti);
}