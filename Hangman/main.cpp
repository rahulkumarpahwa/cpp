#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "hangman_functions.h"
using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // List of programming languages
    string words[] = {"python", "java", "javascript", "ruby", "swift", "kotlin", "typescript", "go", "rust", "php", "perl", "haskell", "scala", "elixir", "clojure", "dart", "objectivec", "cplusplus", "csharp", "r"};

    // Randomly select a word from the list
    string codeword = words[rand() % 20];
    string category = "Programming Languages";
    int word_length = codeword.length();
    int max_tries = 7;

    greet(category, word_length, max_tries);

    string answer(word_length, '_'); // Initialize answer with underscores based on the length of codeword
    int misses = 0;                  // initially zero

    vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < max_tries)
    {
        display_misses(misses);
        display_status(incorrect, answer);

        cout << "\n\nPlease enter your guess: ";
        cin >> letter;
        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            cout << "\nCorrect!\n";
        }
        else
        {
            cout << "\nIncorrect! Another portion of the person has been drawn. \n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }

    end_game(answer, codeword);

    return 0;
}