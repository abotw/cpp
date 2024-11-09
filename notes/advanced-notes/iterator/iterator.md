---
title: Iterators, 迭代器
layout: page
parent: Notes
---

# Iterators, 迭代器

![](cs106l/2024Autumn-06-Iterators/Slide13.jpg)

## Iterator Basics

Q: How do we iterate?

```cpp
std::vector<int> v {1, 2, 3, 4};
for (size_t i = 0; i < v.size(); i++) {
	const auto& elem = v[i];
}

for (var-init; condition; increment) {
	const auto& elem = /* grab element */;
}

std::set<int> s {1,2,3,4};
for (uhhh; ummm; what?) {
	const auto& elem = /* haeelp :( :( */;
}
```

- `for (auto e : s)` is not allowed ... for now

- We need something to track **where we are** in a container… sort of like an index
- Introducing **iterators**
- **C++ iterators are like a “claw” in a claw machine**

![](cs106l/2024Autumn-06-Iterators/Slide21.jpg)

![](cs106l/2024Autumn-06-Iterators/Slide22.jpg)

- Containers and iterators **work together** to allow iteration

![](cs106l/2024Autumn-06-Iterators/Slide24.jpg)

![](cs106l/2024Autumn-06-Iterators/Slide25.jpg)

![](cs106l/2024Autumn-06-Iterators/Slide26.jpg)

![](cs106l/2024Autumn-06-Iterators/Slide27.jpg)

```cpp
// Copy constrcution
auto it = c.begin();
// Increment iterator forward
++it;
// Dereference iterator -- undefined if `it == end`
```

---

Last Updated: 