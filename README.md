# 🕒 Digital Clock in C (Windows Console)

![Language](https://img.shields.io/badge/language-C-blue.svg) ![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg) ![License](https://img.shields.io/badge/license-MIT-green.svg)

A simple, aesthetically pleasing **Digital Clock** built using **C language** that displays the current **hours, minutes, and seconds** in a large digital format directly in the **Windows console**. The clock updates every second using system time.

---

## 📌 Features

- **⏱ Real-time Accuracy**: Displays system time with second-level precision.
- **🔢 Custom ASCII Art**: Large 7-segment display style digits rendered seamlessly.
- **🔁 Live Updates**: Auto-refreshes every second without flickering.
- **🪟 Windows API Integration**: Uses `windows.h` for efficient cursor positioning (`gotoxy`).
- **💡 Clean Code**: Well-structured and commented C code, perfect for beginners.

---

## 🛠 Technologies Used

- **Language:** C
- **Platform:** Windows (Command Prompt / PowerShell)
- **Libraries:**
  - `stdio.h` (Standard I/O)
  - `windows.h` (Console manipulation)
  - `time.h` (Time functions)

---

## ⚙ How It Works

1.  **Time Fetching**: Retrieves the current system time using `time()` and `localtime()`.
2.  **Digit Extraction**: Separates hours, minutes, and seconds.
3.  **Rendering Engine**:
    -   Each digit (0-9) is drawn using custom ASCII patterns.
    -   `gotoxy()` places the cursor at specific coordinates to print digits side-by-side.
4.  **Loop & Sleep**: The main loop refreshes the display every 1000ms (`Sleep(1000)`).

---

## ▶ How to Run

### prerequisites
-   A C Compiler (GCC recommended, e.g., MinGW).
-   Windows OS.

### Installation & Execution

1.  **Clone the Repository** (or download the zip):
    ```bash
    git clone https://github.com/NANDGOPALSHARMA-29/Digital-Clock.git
    cd Digital-Clock
    ```

2.  **Compile the Code**:
    Open your terminal in the project folder and run:
    ```bash
    gcc clock.c -o clock.exe
    ```

3.  **Run the Application**:
    ```bash
    ./clock.exe
    ```

---

## 📂 Project Structure

-   `clock.c`: The core logic and ASCII art definitions.
-   `README.md`: Project documentation.

---

## 🤝 Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request.

