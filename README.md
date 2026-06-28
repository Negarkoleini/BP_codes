# 🎓 Basics of Programming (BP) - Foundational Concepts in C

This repository serves as a comprehensive academic portfolio showcasing core programming paradigms and computer science building blocks implemented in pure C. The codebase directly demonstrates the practical application of fundamental concepts taught in the **Basics of Programming (BP)** curriculum.

---

## 🚀 Covered BP Concepts & Programming Pillars

### 1. Control Flow & Conditional Logic
* **Decision Making:** Comprehensive use of `if`, `else if`, and `else` blocks to handle complex runtime branching and game state decisions.
* **Logical Expressions:** Combining relational and logical operators (`&&`, `||`, `!`) to design robust validation systems (e.g., checking boundary limits and non-overlapping coordinates).

### 2. User-Defined Data Types & Structures (`struct`)
* **Data Abstraction:** Implementing structures (`struct`) like `struct Position` to bind related variables into a single logical entity, forming the backbone of entity tracking.
* **Data Modeling:** Using nested components and structural records to cleanly pass complex game data between modules without relying heavily on unorganized global scalars.

### 3. Recursive Patterns & Algorithmic Thinking
* **Recursion:** Design and implementation of self-referential functions that solve complex calculations by dividing them into base cases and recursive steps.
* **Mathematical Scaling:** Utilizing deterministic formulas and structural algorithms to compute logical progression curves (e.g., dynamic scaling functions).

### 4. Advanced Data Structures & Memory Concepts
* **Dynamic Chaining (Linked Lists / Node Tracking):** Theoretical and practical layouts of sequentially linked nodes to track real-time dynamic body segments (such as positional tracking buffers).
* **Grid Representations (2D Arrays):** Mastering lookups, coordinate mapping, and boundary detection via fixed and dynamic matrix allocations (`map[HEIGHT][WIDTH]`).

### 5. Modular File Management & Scoping
* **Translation Units:** Separating monolithic logic into distinct modules via `.c` implementations and `.h` interface layers.
* **Header Guards:** Using preprocessor directives (`#ifndef`, `#define`, `#endif`) to secure safe compilation trees across interconnected files.

---

## 📁 Repository Organization

The repository isolates individual academic concepts into clean files:
* **`common.h`**: Structures, type definitions, and central configuration guards.
* **`menu.c` / `menu.h`**: Practical applications of control flow, loops, and conditional file parsing.
* **Algorithmic Utilities**: Isolated scripts demonstrating recursive patterns, sequential parsing, and structural data arrangements.

---

## 🔨 How to Compile

These scripts can be compiled using any standard C compiler (e.g., GCC). 

```bash
gcc main.c menu.c -o bp_concepts.exe
