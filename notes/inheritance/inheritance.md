---
title: Inheritance, 继承
layout: home
parent: Notes
---

# Inheritance, 继承
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## Readings

- Slide: <https://web.stanford.edu/class/cs106l/lectures/F2407_Classes.pdf>

---

- Inheritance allows us to design powerful and versatile abstractions that can help us model complex relationships in code.

## (Class) Inheritance

- Base Class
	- Sub Class 1
	- Sub Class 2

![](https://upload.cppreference.com/mwiki/images/0/06/std-io-complete-inheritance.svg)
src: https://en.cppreference.com/w/File:std-io-complete-inheritance.svg

- **Dynamic Polymorphism**: Different types of objects may need the same interface
- **Extensibility**: Inheritance allows you to extend a class by creating a subclass with specific properties

## Inheritance in practice

![](./attachments/Pasted%20image%2020241016170319.png)

- What if we had a shape class, what do we think we would include?
- Shapes have
	- Area
	- Radius? Or height? Or Width?
	- Anything else?

## Shape class definition

```cpp
class Shape {
public:
	virtual double area() const = 0;
};
```

- **Pure virtual function**: it is instantiated in the base class but overwritten in the subclass. **(Dynamic Polymorphism)**

## Circle Class Definition

```cpp
class Shape {
public:
	virtual double area() const = 0;
};

class Circle : public Shape {
public:
	// constructor
	Circle(double radius): _radius{radius} {};
	double area() const {
		return 3.14 * _radius * _radius;
	}
private:
	double _radius;
};
```

- This is a virtual function we declare in our base class, **Shape**
- Here we declare the **Circle** class which inherits from the **Shape** class
- constructor using list initialization construction
- Here we are overwriting the base class function **`area()`** for a circle
- Another pro of inheritance is the **encapsulation** of class variables.

## Rectangle class definition

```cpp
class Shape {
public;
	virtual double area() const = 0;
};

// ......

class Rectangle : public Shape {
public:
	// constructor
	Rectangle(double height, double width): _height(height), _width(width) {};
	double area const {
		return _width * _height;
	}
private: double _width, _height;
};
```

## Types of inheritance

| Type              | public                          | protected                       | private                         |
| ----------------- | ------------------------------- | ------------------------------- | ------------------------------- |
| Example           | `class B: public A {...}`       | `class B: protected A {...}`    | `class B: private A {...}`      |
| Public Members    | Are public in the derived class | Protected in the derived class  | Private in the derived class    |
| Protected menbers | Protected in the derived class  | Protected in the derived class  | Private in the derived class    |
| Private Members   | Not accessible in derived class | Not accessible in derived class | Not accessible in derived class |
|                   | 大家都能用                           | 家里可以用                           | 只能自己用                           |

## Person class

```cpp
class Person {
protected:
	std::string name;

public:
	Person(const std::string& name): name(name) {}
	std::string getName();
}
```

## Student class

```cpp
class Student : public Person {
protected:
	std::string idNumber;
	std::string major;
	std::string advisor;
	uint16_t year;
public:
	Student(const std::string& name, ...);
	std:string getIdNumber() const;
	std::string getMajor() const;
	uint16_t getYear() const;
	void setYear(unit16_t year);
	void setMajor(const std::string& major);
	std::string getAdvisor() const;
	void srtAdvisor(const std::string& advisor);
};
```

- The constructor has all of the protected members. For the sake of space I’ve omitted them here.

## Employee class

```cpp
class Employee : public Person {
protected:
	double salary;
public:
	Employee(const std::string& name);
	virtual std::string getRole const = 0;
	virtual double getSalary() const = 0;
	virtual void setSalary() const = 0;
	virtual ~Employee() = default;
};
```

## SectionLeader class

```cpp
class SectionLeader : public Person, public Employee {
protected:
	std::string section;
	std::string course;
	std::vector students;
public:
	Student(const std::string& name, …);
	std::string getSection() const;
	std::string getCourse() const;
	void addStudent(const std::string& student);
	void removeStudent(const std::string& student);
	std::vector getStudents() const;
	std::string getRole() const override;
	double getSalary() const override;
	void setSalary(double salary) override;
};
```

- And the destructor `~SectionLeader()`

## Inheritance Diagram

![](./attachments/Pasted%20image%2020241016173051.png)
- Since both **Student** and **Employee** inherit from **Person**, they each call the constructor of **Person**.
- **SectionLeader** ends up with two copies of **Person**. One from **Student** another from **Employee**
- The way to fix this is to make Employee and Student inherit from Person in a **virtual way**.
- Virtual inheritance means that a derived class, in this case SectionLeader, should only have a single instance of base classes, in this case Person.

**Student Class**

![](./attachments/Pasted%20image%2020241016173343.png)

**Employee Class**

![](./attachments/Pasted%20image%2020241016173402.png)

- **This requires the derived class to initialize the base class!**

---

Last Updated: Wed Oct 16 16:56:44 CST 2024
