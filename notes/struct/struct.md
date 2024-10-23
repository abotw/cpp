---
title: Struct, 结构体
layout: page
parent: Notes
---

# Struct, 结构体

- type -> struct -> class

## A fundamental problem

```cpp
____ issueNewID() {
	// How can we return all three things?
	// What should our return type be?

	// Python:
	// return "Jacob Roberts-Baca", "jtrb", 6504417
}
```

- Q: How do we return more than one value?
- A: Introducing ... structs!

## Structs bundle data together

```cpp
struct StanfordID {
	string name; // These are called fields
	string sunet; // Each has a name and type
	int idNumebr;
};

StanfordID id;
id.name = "Jacob Roberts-Baca";
id.sunet = "jtrb";
id.idNumber = 6504417;
```



---

Last Updated: Wed Oct 23 18:10:14 CST 2024
