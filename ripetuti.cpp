#include <string>
#include <array>
#include <iostream>
using namespace std;
bool checkRipetute(string word)
{
    for (int i = 0; i < word.length() - 1; i++)
    {
        for (int y = i + 1; y < word.length(); y++)
        {
            if (word[i] == word[y])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string parola;
    cout << "Inserisci parola: ";
    cin >> parola;
    (checkRipetute(parola)) ? cout << "Ci sono ripetute.\n" : cout << "Non ci sono ripetute.\n";
}