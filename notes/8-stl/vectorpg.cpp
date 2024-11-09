/*
 * File: vector.cpp
 * ----------------
 * Source: https://www.cs.jhu.edu/~langmea/resources/lecture_notes/540_vector_iter.pdf
 * Last updated: Thu Nov  7 22:38:55 CST 2024
 */

#include <iostream>
#include <vector>
#include <string>

using std::vector;  using std::string;
using std::cin;     using std::cout;
using std::endl;

int main() {
    // declare a vector
    vector<string> names;
    // add elements to vector (at the back)
    names.push_back("ztm");
    names.push_back("zxc");
    names.push_back("mql");
    
    // print number of items in vector, and first and last items
    cout << "Size = " << names.size() << endl;
    cout << "First name was " << names.front() << endl; // names.front() is like names[0]
    cout << "Last name was " << names.back() << endl;   // names.back() is like names[names.size()-1]
    
    // two ways to print all elements of a vector
    // 1. with indexing
    for (size_t i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }
    // 2. with an iterator
    for (vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
        cout << *it << endl;
    }
    
    // 3. iterate in reverse order by using T::reverse_iterator, .rbegin() and .rend() instead
    for (vector<string>::reverse_iterator it = names.rbegin(); it != names.rend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}   // names goes out of scope and memory is freed