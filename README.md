# 🛠️ BP Code Sandbox & Utilities

Welcome to my repository for **Basics of Programming (BP)** code snippets, utility scripts, and foundational algorithms. This repository serves as a personal sandbox and a modular toolkit, showcasing clean coding practices, basic data structures, and structured programming paradigms in pure C.

---

## 🚀 Key Technical Focus Areas (Resume Highlights)

* **Modular System Design:** Demonstrates proper decoupling of code using custom header guards (`#ifndef`, `#define`) and dedicated implementation files to build reusable components.
* **Console I/O & UI Management:** Includes cross-platform and Windows-specific utilities (like cursor manipulation via `COORD` and terminal state routing) to handle raw console behaviors.
* **File I/O & Persistent Storage:** Contains practical examples of managing external data streams (such as writing, reading, and parsing structured plain-text configurations).
* **Data Modeling:** Features implementations of fundamental abstract types, unified coordinate systems (`struct Position`), and localized multi-matrix lookups.

---

## 📁 Repository Structure & Components

The repository is organized by functional modules to keep the codebase clean and discoverable:

### 🔑 1. Session & Auth Modules (`menu.c` / `menu.h`)
* Focuses on menu-driven console applications and basic state-machine routing (`PAGE_LOGIN`, `PAGE_SELECTMAP`, etc.).
* Implements sequential file lookup parsing (`fscanf`) to validate strings and credentials from external text assets like `users.txt`.

### 📐 2. Core Coordinates & Shared Logic (`common.h`)
* Defines highly abstracted data types such as `struct Position { int x; int y; }` used across different grid rendering programs.
* Serves as a centralized dependency to prevent type redefinition and structural bloat.

### 🎨 3. Terminal & Grid Utilities (`map.h` / Custom Scripts)
* Contains experimental setups for transitioning standard console buffers into internal Unicode modes (`_O_U16TEXT`) for specialized character drawing.

---

## 🔨 Requirements & Compilation

These snippets are primarily targeted for Windows environments due to low-level hardware abstractions (`<windows.h>`, `<conio.h>`, and `<io.h>`) used for keyboard hit detection and console styling.

### Standard Compilation Example
To compile any isolated module along with its main runner, open your terminal and run:
```bash
gcc main.c menu.c -o utility_output.exe
