#include <iostream>
#include <vector>
#include <string>

#include "hangman_functions.h"
using namespace std;

// define functions
void greet()
{
    cout << "------------------\n";
    cout << "Hangman : The Game\n";
    cout << "------------------\n";
    cout << " Instructions : Save your friend from being hanged by guessing the letters in the codeword. \n";
    cout << "------------------\n";
}

void display_misses(int misses)
{
    if (misses == 0)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     " << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (misses == 1)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (misses == 2)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |     |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (misses == 3)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (misses == 4)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (misses == 5)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |    /" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (misses == 6)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl; // here we put the two back slash so that to put the one slash we have to add the escape sequence.
        cout << "  |    / \\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
}

void display_status(vector<char> incorrect, string answer)
{
    cout << "Incorrect Guesses : \n";
    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " "; // Add space between incorrect guesses
    }
    cout << "\ncodeword\n";
    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[i] << " ";
    }
}

void end_game(string answer, string codeword)
{
    if (answer == codeword)
    {
        cout << "Hooray! You saved the person from being hanged and earned a medal of honor.\n";
        cout << "Congratulations!\n";
    }
    else
    {
        cout << "Oh no! The man is hanged!\n"; // Add newline character
    }
}