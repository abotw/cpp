---
title: Pointers & Memory, 指针 & 内存
layout: page
parent: Notes
---

# Pointers & Memory, 指针 & 内存

- An **iterator** points to a **container element**
- A **pointer** points to **any object**

## Memory

![](attachments/Slide66.jpg)

![](attachments/Slide67.jpg)

- Every variable lives somewhere in memory
- All the places something could live from the address space
	- **OS Shared**
	- **Variables** (Stack)
	- **Variables** (Heap)
	- **Global Variables**
	- **Text** (Instructions)

![](attachments/Slide68.jpg)

- Memory is usually byte-addressable, with each byte numbered from 0
- 1 byte = 8 bits

![](attachments/Slide69.jpg)

- The **address** of an object is the location of its lowest byte
- For example an integer always uses 32 bits = 4 bytes

```cpp
int x = 106; // 32 bits = 4 bytes
```

---

- **Q: How do we get the address of a variable in C++?**
- **A: Pointers!**

---

## Pointer

![](attachments/Slide72.jpg)

- A pointer is the **address** of a variable
- `int*` means px is a pointer to an int
- `&` is the address of operator

![](attachments/Slide73.jpg)

![](attachments/Slide75.jpg)

- A pointer is just a number

![](attachments/Slide76.jpg)

![](attachments/Slide77.jpg)

### TBD

![](attachments/Slide78.jpg)

![](attachments/Slide79.jpg)
```cpp
std::vector<int> v {1,2,3,4,5};

int* arr = &v[0];   std::cout << *arr << " ";
arr += 1;           std::cout << *arr << " ";
++arr;              std::cout << *arr << " ";
arr += 2;           std::cout << *arr << " ";
if (arr == &v[4])   std::cout << "At last index";
```

```cpp
std::vector<int> v {1,2,3,4,5};

int* arr = &v[0];   // Copy constrcution
arr += 1;           // Random access
++arr;              // Move pointer forward
arr += 2;           // Random access
if (arr == &v[4])   // Pointer comparison
```

![](attachments/Slide81.jpg)

- **Iterators** have a similar interface to **pointers**

![](attachments/Slide83.jpg)

---

Last Updated: Fri Oct 25 13:54:33 CST 2024

