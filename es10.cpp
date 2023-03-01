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

int findLargestSumSubarray(int arr[], int lung)
{
    int max = arr[0];
    int max_attuale = arr[0];
    for (int i = 1; i < lung; i++)
    {
        if ((max_attuale + arr[i]) > max)
        {
            max = max_attuale + arr[i];
            max_attuale = max;
        }
        else
        {
            max_attuale = 0;
        }
    }
    return max;
}

int main()
{
    /*int quanti;
    cout << "Di quanti elementi? ";
    cin >> quanti;
    int numeri[quanti];*/
    int numeri[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int quanti = sizeof(numeri) / sizeof(numeri[0]);
    cout << findLargestSumSubarray(numeri, quanti);
}