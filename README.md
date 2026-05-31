# 📁 C-Projects

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Status](https://img.shields.io/badge/Status-Active-brightgreen.svg)
![Level](https://img.shields.io/badge/Level-Beginner%20Friendly-orange.svg)

A growing collection of small C programs built for **learning and practice**. Each project is self-contained, beginner-friendly, and focused on a core set of C programming concepts. The repo is designed to expand over time as new topics are explored.

---

## 📌 Table of Contents

- [Overview](#overview)
- [Projects](#projects)
- [Concepts Covered](#concepts-covered)
- [Getting Started](#getting-started)
- [How to Compile & Run](#how-to-compile--run)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)

---

## 🧭 Overview

This repository serves as a **personal C programming portfolio** — a place to practise, experiment, and document progress. Each program is written to be readable and well-structured, making it a useful reference for students and beginners picking up C for the first time.

Topics covered across the projects include:

- Console I/O and formatted output
- Loops, conditionals, and control flow
- Functions and modular design
- Random number generation
- Arrays, strings, and character manipulation
- Math library usage and terminal animations

---

## 🗂 Projects

### 1. 🧮 BMI Calculator — `BMI_Calculator.c`

Calculates a user's Body Mass Index from their weight and height, then displays a visual ASCII health meter along with a category label (Underweight, Normal, Overweight, Obese). Supports repeated calculations in a single session.

**Concepts:** arithmetic, `do-while` loop, functions, `printf` formatting  
**Compile:** `gcc BMI_Calculator.c -o bmi`  
**Run:** `./bmi`

---

### 2. 🎲 Dice Roller — `Dice.c`

Simulates rolling a standard six-sided die and prints the result. A minimal but practical demonstration of random number generation in C.

**Concepts:** `rand()`, `srand()`, seeding with `time(NULL)`  
**Compile:** `gcc Dice.c -o dice`  
**Run:** `./dice`

---

### 3. 🧬 DNA Animation — `DNA_Animation.c`

Renders a scrolling, colour-coded double-helix DNA animation directly in the terminal using sine wave math and ANSI escape codes. Runs indefinitely until interrupted.

**Concepts:** `math.h` (`sin`), ANSI colour codes, `usleep`, infinite loop  
**Compile:** `gcc DNA_Animation.c -o dna -lm`  
**Run:** `./dna`

> ⚠️ Requires `-lm` to link the math library. Press `Ctrl+C` to stop.

---

### 4. 🔢 Number Guessing Game — `Number_Guessing_Game.c`

The computer picks a secret number and the player guesses it with higher/lower feedback. Three difficulty levels adjust the number range, and a performance rating is shown at the end based on attempts used.

**Concepts:** `switch` statement, `do-while` loop, random numbers, conditional logic  
**Compile:** `gcc Number_Guessing_Game.c -o guess`  
**Run:** `./guess`

---

### 5. 🔐 Password Generator — `password_generator.c`

Generates a random password of user-specified length using a full charset of uppercase letters, lowercase letters, digits, and special characters.

**Concepts:** character arrays, `rand()` with modulo indexing, `srand` seeding  
**Compile:** `gcc password_generator.c -o passgen`  
**Run:** `./passgen`

---

### 6. ❌ Tic-Tac-Toe — `Tic-Tac-Toe.c`

A two-player terminal Tic-Tac-Toe game. Players take turns entering a position (1–9) on a 3×3 grid. The game detects wins across all rows, columns, and diagonals, and correctly handles draw conditions.

**Concepts:** 2D arrays, global state, recursive input validation, game loop  
**Compile:** `gcc Tic-Tac-Toe.c -o tictactoe`  
**Run:** `./tictactoe`

---

## 📚 Concepts Covered

| Concept | Projects |
|---|---|
| Random number generation | Dice, Number Guessing Game, Password Generator |
| Loops & control flow | BMI Calculator, Number Guessing Game, Tic-Tac-Toe |
| Functions & modular design | BMI Calculator, Tic-Tac-Toe |
| Arrays & strings | Password Generator, Tic-Tac-Toe |
| Math library (`-lm`) | DNA Animation |
| ANSI terminal output | DNA Animation |
| Structs & file I/O | *(coming soon)* |
| Dynamic memory & pointers | *(coming soon)* |

---

## 🚀 Getting Started

You will need a C compiler. [GCC](https://gcc.gnu.org/) is recommended and comes pre-installed on most Linux systems.

### Install GCC

**Ubuntu / Debian:**
```bash
sudo apt install gcc
```

**macOS (via Homebrew):**
```bash
brew install gcc
```

**Windows:**
Install [MinGW](https://www.mingw-w64.org/) or use [WSL](https://learn.microsoft.com/en-us/windows/wsl/) (Windows Subsystem for Linux).

---

## ⚙️ How to Compile & Run

Each project is a single `.c` file. The general pattern is:

```bash
gcc <filename>.c -o <outputname>
./<outputname>
```

**Example:**
```bash
gcc BMI_Calculator.c -o bmi
./bmi
```

> For `DNA_Animation.c`, add `-lm` to link the math library:
> ```bash
> gcc DNA_Animation.c -o dna -lm && ./dna
> ```

---

## 🔮 Roadmap

Projects planned for future additions:

| Project | Key Concepts |
|---|---|
| **To-Do List** | Structs, file I/O, CRUD operations |
| **Hangman** | Strings, arrays, ASCII art |
| **Caesar Cipher** | Character manipulation, basic encryption |
| **Student Grade Tracker** | Structs, sorting, averages |
| **Linked List** | Dynamic memory, pointers |
| **Binary Search Visualiser** | Algorithms, step-by-step output |
| **Calculator** | Operator parsing, operator precedence |

---

## 🤝 Contributing

This repo is primarily a personal learning space, but suggestions and improvements are welcome. Feel free to open an issue or submit a pull request if you spot a bug or have an idea for a new project.

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

---

*If you found this repo helpful, consider giving it a ⭐ on GitHub!*
