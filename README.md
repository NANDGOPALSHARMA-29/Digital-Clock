# Digital-Clock

A simple Digital Clock program written in C language. It displays the current system time (hours, minutes, seconds) in the terminal and updates every second.

## Features
- Real-time digital clock display.
- Custom digit rendering using ASCII characters.
- Updates every second.

## Prerequisites
- GCC Compiler (MinGW for Windows or standard GCC on Linux/macOS).
- Windows OS (uses `windows.h` for cursor positioning and sleep).

## How to Compile and Run

1.  Open a terminal in the project directory.
2.  Compile the code using GCC:
    ```bash
    gcc clock.c -o clock.exe
    ```
3.  Run the executable:
    ```bash
    ./clock.exe
    ```

## Project Structure
-   `clock.c`: The main source code file containing the logic and digit rendering functions.
-   `README.md`: This documentation file.
