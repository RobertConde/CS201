# Abstract Data Types in C++

* Abstract data types are implemented as _structures_ in C and _classes_ in C++.
* The Standard Template Library (STL) is officially part of C++.
* STL continues a natural progression from structures (data only) to classes (data plus operations on that data) to a
  library of trusted classes that implement often-needed data/method containers.
* STL is largely data-type agnostic, as they use templates (very useful).

## Intermediate C++

* Introduces the concept of Object-Oriented Programming (OOP), the fundamental concept of the creation of objects.
* Objects can be thought of as independent self-contained programs that each have their own name, data, logic, and
  interact with one another to form an application.
* 3 Pillars of OOP:
    * Encapsulation
    * Inheritance
    * Polymorphism

## Classes and Objects

* A class is a user defined abstract data type that expands upon the concept of a structure but instead of containing
  just data, it also includes functions (referred to as methods when they are in a class).
* Encapsulation refers enclosing data and functions together within a single entity.
* The only difference between a `structure` (public by default) and a `class` (private by default) is visibility.
* Do not mix the two.
* Use `structure` for plain old data (POD) and `class` for objects.

* Class:
    * Identity: name for the class
    * Attributes: data members
    * Methods: function members
* A class is akin to a blueprint of a plan of how to make an object.

* A class is declared by:
    * use of the keyword `class`,
    * followed by the user defined identity name for the class (akin to a primitive data type, e.g. `int`)
    * followed by the class members enclosed within a set of `{` curly braces `}`
    * _followed by optional object identifiers_
    * followed by a semi-colon `;`

```c++
class identity {
public:
members;
private:
members;
protected:
members;
} objects;
```

* `public`, `private`, and `protected` are known as the access specifiers.

* Simple Class:

```c++
#include <iostream>
using namespace std;

class Triangle {
public:
	float width;
	float height;
	
	float area() {
		return ((width * height) / 2); 
	}
};

int main() {
	Triangle myTriangle;    // Instantiation
	
	myTriangle.width = 5;   // Member access using the .dot operator
	myTriangle.height = 6;
	
	cout << "Triangle Area: " << myTriangle.area() << endl;
	
	return 0;
}
```


## Encapsulation

...