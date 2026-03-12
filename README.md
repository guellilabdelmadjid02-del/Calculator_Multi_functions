# CLI Calculator in C

A simple **Command Line Calculator** written in C.  
This program allows users to perform basic arithmetic operations and solve quadratic equations directly from the terminal.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Solve quadratic equations
- Simple interactive CLI menu
- Input validation for operation selection

## How It Works

When you run the program, a menu appears allowing you to choose an operation:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Solve a quadratic equation
6. Exit

The user selects an option, enters the required numbers, and the program prints the result.

## Project Structure

```
CliCalculator/
│
├── main.c # Main program and menu logic
├── equation.c # Quadratic equation solver implementation
├── equation.h # Function declarations
```

## Compilation

Compile the program using GCC:

```bash
gcc main.c equation.c -o calculator
```

## Run

```bash
./calculator
```

On Windows:

```bash
calculator.exe
```


## Screen Shots

<img width="642" height="326" alt="Screenshot 2026-03-12 134820" src="https://github.com/user-attachments/assets/eb1402de-cca9-4db3-8d6b-e05cefb9a590" />

## Author

Madjid
Computer Science Student

## License

This project is open-source and free to use for learning purposes.
