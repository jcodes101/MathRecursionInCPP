# Recursive Math Functions in C++

This project demonstrates the use of recursion in C++ through basic arithmetic operations: **sum**, **product**, **subtract**, and **divide**. It allows the user to input a positive number and observe how each operation is computed recursively.

## 📌 Features

- ✅ Recursive **sum** of all numbers from `n` down to 0  
- ✅ Recursive **product** (factorial-style multiplication)  
- ✅ Recursive **subtraction** with nested calls for educational visualization  
- ✅ Recursive-style **division** that demonstrates halving logic  
- 🖥️ Mixed usage of `printf`/`scanf` (C) and `cout`/`cin` (C++) for I/O practice  

## 💻 Technologies

- C++  
- CLion (JetBrains IDE)  
- Standard Template Library (STL)

## 🚀 How to Run

1. Clone the repository or download the files.
2. Open the project in [CLion](https://www.jetbrains.com/clion/).
3. Build and run the project.
4. Enter a positive number for each operation as prompted in the terminal.

```bash
git clone https://github.com/your-username/recursive-math-cpp.git
cd recursive-math-cpp

🧠 Function Descriptions
int sum(int n)
Recursively adds all numbers from n to 0.

int product(int n)
Computes the factorial of n using recursion.

int subtract(int n)
Subtracts recursively in a nested fashion to show layered calls.

int divide(int n)
Uses a recursive halving strategy; returns final halved result.

Enter a positive number (for addition): 5
sum = 15

Enter a positive number (for multiplication): 4
Result is: 24

Enter a positive number (for subtraction): 7
Result is: 4

Enter a positive number for division: 27
Result is: 3
