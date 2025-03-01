// 7. Program to count vowels, consonants, digits, and special characters
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                ++vowels;
            }
            else
            {
                ++consonants;
            }
        }
        else if (isdigit(ch))
        {
            ++digits;
        }
        else
        {
            ++specialChars;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << specialChars << endl;

    return 0;
}