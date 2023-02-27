#include <string>
#include <array>
#include <iostream>
using namespace std;
bool checkRipetute(string word)
{
    bool rip = false;
    for (int i = 0; i < word.length() - 1; i++)
    {
        if (!rip)
        {
            for (int y = i + 1; y < word.length(); y++)
            {
                if (word[i] == word[y])
                {
                    rip = true;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    return rip;
}
int main()
{
    string parola;
    cout << "Inserisci parola: ";
    cin >> parola;
    (checkRipetute(parola)) ? cout << "Ci sono ripetute.\n" : cout << "Non ci sono ripetute.\n";
}