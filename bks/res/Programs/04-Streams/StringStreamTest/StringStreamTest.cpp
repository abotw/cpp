/*
 * File: StringStreamTest.cpp
 * --------------------------
 * Tests numeric conversion using string streams.
 */

#include <iostream>
#include <sstream>
#include "error.h"
using namespace std;

/* Function prototypes */

int StringToInteger(string str);
string IntegerToString(int value);

/* Main program */

int main() {
   cout << "StringToInteger(\"42\") -> " << StringToInteger("42") << endl;
   cout << "IntegerToString(17) -> \"" << IntegerToString(17) << "\"" << endl;
   return 0;
}

int StringToInteger(string str) {
   istringstream stream(str);
   int value;
   stream >> value;
   if (stream.fail() || !stream.eof()) error("Illegal integer conversion");
   return value;
}

string IntegerToString(int value) {
   ostringstream stream;
   stream << value;
   return stream.str();
}
