# Contributing & C++ Coding Standards

Please follow these 5 coding rules when writing or editing C++ code in this repository:

### Rule 1: Use camelCase for variable names
All variable names must start with a lowercase letter and use camelCase for multiple words. Avoid snake_case or single-letter names (except loop counters like `i`).
* **Good:** `double classAverage = 0.0;`
* **Bad:** `double class_average = 0.0;` or `double ca = 0.0;`

### Rule 2: Use meaningful and descriptive names
Variables and constants should clearly describe what data they store.
* **Good:** `int studentCount = 0;`
* **Bad:** `int x = 0;`

### Rule 3: Use 4 spaces for indentation
Indent all code blocks inside `main()`, loops (`for`, `while`), and conditional statements (`if`, `else`) by 4 spaces.
* **Good:**
```cpp
if (score >= 90) {
    cout << "A";
}
