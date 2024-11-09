/*
 * File: vector_iteration.cpp
 * --------------------------
 * Source: https://courses.washington.edu/css342/zander/Notes/stl
 * Last updated: Thu Nov  7 23:00:58 CST 2024
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> v;

   // store the ints 0 through 9 in the vector v
   for (int i = 0; i < 10; i++) {
      v.push_back(i);
   }

   // forward iteration
   // traverse in a forward manner and display the contents of the vector
   vector<int>::iterator f;
   for (f = v.begin(); f != v.end(); f++) {
      cout << "  " << *f;
   }
   cout << endl;

   // reverse iteration
   // traverse in a backwards manner and display the contents of the vector
   vector<int>::reverse_iterator b;
   for (b = v.rbegin(); b != v.rend(); b++) {
      cout << "  " << *b;
   }
   cout << endl;

   return 0;
}

//  Output
//  0  1  2  3  4  5  6  7  8  9
//  9  8  7  6  5  4  3  2  1  0