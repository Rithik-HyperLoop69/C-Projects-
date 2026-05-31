# 🖥️ C-Projects

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Projects](https://img.shields.io/badge/Projects-6-orange.svg)
![Level](https://img.shields.io/badge/Level-Beginner-yellow.svg)

A personal collection of C programs — built from scratch to practise core programming concepts. Each project is small, self-contained, and focused on a specific idea. The repo grows as new things get learned and built.

---

## 📌 Table of Contents

- [Projects at a Glance](#projects-at-a-glance)
- [Project Details](#project-details)
- [Getting Started](#getting-started)
- [Roadmap](#roadmap)
- [License](#license)

---

## 🗃️ Projects at a Glance

| # | Project | Description | Key Concept |
|---|---|---|---|
| 1 | 🧮 BMI Calculator | Calculates BMI with an ASCII health meter | Functions, loops |
| 2 | 🎲 Dice Roller | Rolls a six-sided die | Random numbers |
| 3 | 🧬 DNA Animation | Scrolling double-helix in the terminal | Math, ANSI colours |
| 4 | 🔢 Number Guessing Game | Guess the number with difficulty levels | Conditionals, loops |
| 5 | 🔐 Password Generator | Generates random passwords from a charset | Arrays, strings |
| 6 | ❌ Tic-Tac-Toe | Two-player terminal game | 2D arrays, game logic |

---

## 📂 Project Details

### 🧮 BMI Calculator
> `BMI_Calculator.c`

Enter your weight and height to get your BMI score, a category (Underweight → Obese), and a visual `[####------]` health meter. Loops until the user chooses to exit.

```
=================================
      BMI HEALTH CALCULATOR
=================================
Enter Weight (kg): 70
Enter Height (m): 1.75

Health Meter
[####################----------]
BMI: 22.86
Category: Normal Weight
```

**What you'll learn:** arithmetic, `do-while`, user-defined functions, formatted output

---

### 🎲 Dice Roller
> `Dice.c`

The simplest project in the repo — rolls a six-sided die and prints the result. A clean starting point for understanding randomness in C.

```
You rolled: 4
```

**What you'll learn:** `rand()`, `srand()`, seeding with `time(NULL)`

---

### 🧬 DNA Animation
> `DNA_Animation.c`

Uses `sin()` to calculate two strand positions and renders a colour-coded scrolling helix in the terminal with ANSI escape codes. Runs infinitely — press `Ctrl+C` to stop.

**What you'll learn:** `math.h`, ANSI terminal colours, `usleep()`, infinite loops

> ⚠️ Must link the math library at compile time: `gcc DNA_Animation.c -o dna -lm`

---

### 🔢 Number Guessing Game
> `Number_Guessing_Game.c`

Pick a difficulty (Easy / Medium / Hard), then guess the secret number. After each guess you get a *Too High* or *Too Low* hint. A rating (Genius → Keep Practicing) is shown based on how many attempts it took.

```
Select Difficulty:
1. Easy   (1 - 50)
2. Medium (1 - 100)
3. Hard   (1 - 500)

Enter your guess: 42
Too Low!

Enter your guess: 71
Correct!

You guessed in 2 attempt(s).
Rating: Genius!
```

**What you'll learn:** `switch`, `do-while`, random numbers, difficulty scaling

---

### 🔐 Password Generator
> `password_generator.c`

Enter a desired length and get a randomly generated password pulled from a charset of uppercase, lowercase, digits, and special characters.

```
Enter password length: 16
Generated Password: gT#4kLz!9Wq@mRxP
```

**What you'll learn:** character arrays, `rand()` with indexing, string building

---

### ❌ Tic-Tac-Toe
> `Tic-Tac-Toe.c`

Two players take turns entering a position (1–9) on a 3×3 grid. The board is displayed after each move, and the game checks for a win or draw after every turn.

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player X, enter position (1-9): 5
```

**What you'll learn:** 2D arrays, global state, win detection, game loops

---

## 🚀 Getting Started

### Prerequisites

You need GCC installed on your machine.

| OS | Command |
|---|---|
| Ubuntu / Debian | `sudo apt install gcc` |
| macOS | `brew install gcc` |
| Windows | Install [MinGW](https://www.mingw-w64.org/) or use [WSL](https://learn.microsoft.com/en-us/windows/wsl/) |

### Compile & Run

```bash
# General pattern
gcc <filename>.c -o <name>
./<name>

# Example
gcc Number_Guessing_Game.c -o guess
./guess

# DNA Animation needs the math library
gcc DNA_Animation.c -o dna -lm
./dna
```

---

## 🔮 Roadmap

- [ ] To-Do List — file I/O, structs, CRUD
- [ ] Hangman — strings, ASCII art
- [ ] Caesar Cipher — character encryption
- [ ] Student Grade Tracker — structs, sorting
- [ ] Linked List — dynamic memory, pointers
- [ ] Binary Search Visualiser — algorithms

---

## 📄 License

Open source under the [MIT License](LICENSE). Fork it, learn from it, build on it.

---

*Found this useful? Drop a ⭐ on GitHub!*
