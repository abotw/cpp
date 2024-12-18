/*
 * File: TwoLetterWords.cpp
 * ------------------------
 * This program generates a list of the two-letter words.
 */

#include <iostream>
#include "lexicon.h"
using namespace std;

int main() {
   Lexicon english("EnglishWords.dat");
   foreach (string word in english) {
      if (word.length() == 2) {
         cout << word << endl;
      }
   }
   return 0;
}
