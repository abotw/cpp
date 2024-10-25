---
title: Template Classes
layout: page
parent: Notes
---

# Template Classes, 模版类

## `this`

### The importance of `this`

Q: What is **`this`**?
A: It’s a **pointer** to the current class instance

```cpp
// These are the same

int Point::getX() {
	return x;
}

int Point::getX() {
	return this->x;
}
```

```cpp
// Not the same

void Point::setX(int x) {
	x = x;
}

void Point::setX(int x) {
	this->x = x;
}
```

### What is this?

```cpp
int Point::setX(int x) {
	this->x = x;
}
```

- `this`: `Point* this`
- `->`: Mwahahaha pointer dereference

## A Hypothetical Example: IntVector

```cpp
// Implements a sequence of strings
class IntVector {
public:
	IntVector();
	~IntVector();
	size_t size();
	bool empty();
	void push_back(const int& elem);
	int& operator[](size_t index);
};
```

---

Last Updated: 