#include <iostream>
#include <vector>
#include <string>

using namespace std;

// declare functions
void greet(string category, int word_length, int max_tries);
void display_misses(int misses);
void display_status(vector<char> incorrect, string answer);
void end_game(string answer, string codeword);