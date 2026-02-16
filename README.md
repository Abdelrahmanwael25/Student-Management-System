# 🎓 Student Grade Management System (C++)

A robust, console-based **Grade Management System** built with C++ using Object-Oriented Programming (OOP) principles. This project demonstrates efficient data organization, encapsulation, and manual dynamic memory management.

## 🌟 Key Features
* **Student Management**: Create and manage student profiles including First Name, Last Name, and Age.
* **Course Tracking**: Register courses with unique IDs and names.
* **Grade Recording**: Link students to specific courses with their achieved grades.
* **Dynamic Data Handling**: Implements custom dynamic array logic using `new` and `delete[]` to manage records without fixed size limits.
* **Statistics**: Automatically calculates the class average across all recorded grades.

## 🏗️ System Architecture (OOP)
The project is structured into several classes to ensure **Separation of Concerns**:
* **`Student`**: Handles personal identification data such as names and age.
* **`Course`**: Represents academic subjects with unique IDs.
* **`Grade`**: Acts as a bridge between `Student` and `Course` to store specific marks.
* **`GradeManager`**: The core engine responsible for memory allocation, adding records, and generating reports.

## 📂 File Structure
| File | Description |
| :--- | :--- |
| `Student.h / .cpp` | Defines the Student entity and its attributes. |
| `Course.h / .cpp` | Defines the Course entity and its attributes. |
| `Grade.h / .cpp` | Manages the relationship between students, courses, and marks. |
| `GradeManager.h / .cpp` | Contains logic for dynamic arrays and data processing. |
| `Source.cpp` | The entry point containing the `main()` function and test cases. |

## 🚀 Getting Started

### Prerequisites
* A C++ compiler (e.g., GCC, Clang, or MSVC).

### Installation & Execution
1. **Clone the repository:**
   ```bash
   git clone [https://github.com/Abdelrahmanwael25/Student-Grade-System.git](https://github.com/Abdelrahmanwael25/Student-Grade-System.git)
