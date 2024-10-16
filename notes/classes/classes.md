---
title: Classes
layout: home
parent: Notes
---

# Classes

## Comparing `struct` and `class`

![](./attachments/struct+class-2.png)

![](struct+class-1.png)

> structures which are classes **without access restrictions**;

![](./attachments/struct+class-3.png)

## `struct`s

```cpp
struct StudentID {
	std::string name; // these are fields!
	std::string sunet;
	int idNumber;
};

Student s;
s.name = "Fabio Ibanez";
s.sunet = "fabioi";
// s.idNumber = 01243425;
s.idNumber = -123451234512345; // ?
```

- All these fields are **public**, i.e. can be changed by the user
- There are no **direct access controls** while using structs

## `class`es

![](./attachments/class.png)

```cpp
class ClassName {
private:

public:

};
```

- Classes have **public** and **private** sections!
- A user can access the **public** stuff
- But is **restricted** from accessing the private stuff

## a StanfordID class

```cpp
struct StanfordID {
	string name;        // These are called fields
	string sunet;       // Each has a name and type
	int idNumber;
};

StanfordID id;          // Access fields with `.`
id.name = "Jacob Roberts-Baca";
id.sunet = "jtrb";
id.idNumber = 6504417;
```

## Header File (.h) vs Source Files (.cpp)

|          | Header File (.h)                                                             | Source File (.cpp)                        |
| -------- | ---------------------------------------------------------------------------- | ----------------------------------------- |
| Purpose  | Defines the interface                                                        | Implements class functions                |
| Contains | Function prototypes, class declarations, type definitions, macros, constants | Function implementations, executable code |
| Access   | This is shared across source files                                           | Is compiled into an object file           |
| Example  | `void someFunction();`                                                       | `void someFunction() {...};`              |

## Class design

1. A constructor
2. Private member functions/variables
3. Public member functions (interface for a user)
4. Destructor

### Constructor

- The constructor initializes the state of newly created objects
- For our **StudentID** class what do our objects need?
	- `s.name = “Fabio Ibanez”;`
	- `s.sunet = “fabioi”;`
	- `s.idNumber = 01243425;`

**.h file**

```cpp
class StudentID {
private:
	std::string name;
	std::string sunet;
	int idNumber;
public:
	// constructor for our student
	StudentID(std::string name, std::string sunet, int idNumber);
	// method to get name, sunet, and idNumber, respectively
	std::string getName();
	std::string getSunet();
	int getID();
}
```

- The syntax for the constructor is just the name of the class

### Parameterized Constructor

**.cpp file (implementation)**

```cpp
#include "StudentID.h"
#include <string>

StudentID::StudentID(std::string name, std::string sunet, int idNumber) {
	name = name;
	sunet = sunet;
	// We can now also enforce checks on the values that we initialize or modify our members to!
	if ( idNumber > 0 ) idNumber = idNumber;
}
```

- Remember namespaces, like `std::`
- In our **.cpp** file we need to use our class as our namespace when defining our member functions

### Use the this keyword

```cpp
#include "StudentID.h"
#include <string>

StudentID::StudentID(std::string name, std::string sunet, int idNumber) {
	this->name = name;
	this->state = state;
	this->age = age;
}
```

- Use this **`this`** keyword to **disambiguate** which `name` you’re referring to.

### List initialization constructor (C++11)

```cpp
#include "StudentID.h"
#include <string>

// list initialization constructor
StudentID::StudentID(std::string name, std::string sunet, int idNumber): name{name}, sunet{sunet}, idNumber{idNumber} {};
```

- Recall, uniform initialization, this is similar but not quite!

### Default constructor

```cpp
#include "StudentID.h"
#include <string>

// default constructor
StudentID::StudentID() {
	name = “John Appleseed”;
	sunet = “jappleseed”;
	idNumber = 00000001;
}
```

- If we call our constructor without parameters we can set default ones!

### Constructor Overload

```cpp
#include "StudentID.h"
#include <string>

// default constructor
StudentID::StudentID() {
	name = “John Appleseed”;
	sunet = “jappleseed”;
	idNumber = 00000001;
}

// parameterized constructor
StudentID::StudentID(std::string name, std::string sunet, int idNumber) {
	this->name = name;
	this->state = state;
	this->age = age;
}
```

- Our compilers will know which one we want to use based on the inputs!

### Implemented members

```cpp
#include "StudentID.h"
#include <string>

std::string StudentID::getName() {

}

std::string StudentID::getSunet() {

}

int StudentID::getID() {

}
```

```cpp
#include "StudentID.h"
#include <string>

std::string StudentID::getName() {
	return this->name;
}

std::string StudentID::getSunet() {
	return this->sunet;
}

int StudentID::getID() {
	return this->idNumber;
}
```

### Implemented members (setter functions)

```cpp
#include "StudentID.h"
#include <string>

void StudentID::setName(std::string name) {
	this->name = name;
}

void StudentID::setSunset(std::string sunet) {
	this->sunet = sunet;
}

void StudentID::setID(int idNumber) {
	if (idNumber >= 0) {
		this->idNumber = idNumber;
	}
}
```

### The destructor

```cpp
#include "StudentID.h"
#include <string>

StudentID::~StudentID() {
	// free/deallocate any data here
	delete [] my_array; /// for illustration
}
```

- In our **StudentID** class we are not dynamically allocating any data by using the **`new`** keyword
- Nonetheless destructors are an important part of an object’s lifecycle.
- The destructor is not explicitly called, it is automatically called when an object goes out of scope

### Type aliasing

- **Type aliasing** - allows you to create synonymous identifiers for types

```cpp
template <typename T>
class vector {
	using iterator = T*;

	// Implementation details...
};
```

## Other stuff (TODO)

```cpp
/*
 * Class: Point
 * ------------
 * This class represents an x-y coordinate point on a two-dimensional
 * integer grid.
 */

using namespace std;

class Point {

public:
	// Constructors
	Point() {
		x = 0;
		y = 0;
	}
	Point(int xc, int yc) {
		x = xc;
		y = yc;
	}
	// Getter methods
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	string toString() {
		return "(" + x + "," + y + ")";
	}

private:
	// Instance variables
	int x;
	int y;

}
```

```cpp
#include <iostream>
#include <string>

using namespace std;

// Definition of the Student class
class Student {

public:
    // Public method to simulate the student studying
    // This method prints a message indicating that the student is studying C++
    void study() {
        cout << "Learning C++" << endl;
    }
    
    // Public method to simulate the student taking an exam
    // This method prints a message indicating the student achieved 100 points in a C++ exam
    void exam() {
        cout << "C++ exam score: 100 points" << endl;
    }

private:
    // Private member variable to store the student's name
    string _name;
    
    // Private member variable to store the student's age
    int _age;

};
```

```cpp
#include <iostream>
#include <string>

using namespace std;

// Definition of the Student class
// This class represents a student with basic functionalities
// such as studying and taking exams. It also contains private
// attributes for the student's name and age.
class Student {

public:
    // Declaration of the study method
    // This method will print a message indicating the student is studying C++
    void study();

    // Declaration of the exam method
    // This method will print a message indicating the student has achieved a score of 100 in the C++ exam
    void exam();

private:
    // Private member variable to store the student's name
    // This variable is not directly accessible from outside the class
    string _name;
    
    // Private member variable to store the student's age
    // This variable is also private, ensuring encapsulation
    int _age;

};

// Definition of the study method outside the class
// This method prints a message indicating that the student is studying C++
void Student::study() {
    cout << "Learning C++" << endl;
}

// Definition of the exam method outside the class
// This method prints a message indicating the student received a score of 100 in the C++ exam
void Student::exam() {
    cout << "C++ exam score: 100 points" << endl;
}
```

### Permission Keywords

- `private`
- `public`
- `protected`

---

Last Updated: Wed Oct 16 16:53:37 CST 2024
