# 🕒 Digital Clock in C (Windows Console)

A simple **digital clock** built using **C language** that displays the current **hours, minutes, and seconds** in a large digital format directly in the **Windows console**.  
The clock updates every second using system time.

---

## 📌 Features

- ⏱ Real-time clock using system time  
- 🔢 Large digital numbers (0–9) made with ASCII art  
- 🔁 Auto refresh every second  
- 🪟 Uses Windows Console APIs (`gotoxy`)  
- 💡 Beginner-friendly C project  

---

## 🛠 Technologies Used

- **Language:** C  
- **Platform:** Windows  
- **Libraries:**
  - `stdio.h`
  - `windows.h`
  - `time.h`

---

## ⚙ How It Works

1. Fetches current system time using `time()` and `localtime()`
2. Extracts:
   - Hours
   - Minutes
   - Seconds
3. Each digit (0–9) is printed using custom functions
4. Cursor positioning is handled using `gotoxy()`
5. Screen refreshes every **1 second** using `Sleep(1000)`

---

## ▶ How to Run

### Step 1: Compile
```bash
gcc digital_clock.c -o clock
