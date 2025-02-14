# Grupi50 - Student Management System

The Grupi50 project is a Student Management System written in C++ that allows users to input student details, calculate averages, determine student performance, and search for specific students. The program provides various functionalities such as counting passed and failed students, identifying the top-performing student, and displaying all student records.

## Table of Contents
- [Features](#features)
- [Detailed Component Description](#detailed-component-description)
  - [Student Data Management](#student-data-management)
  - [Performance Analysis](#performance-analysis)
- [Prerequisites](#prerequisites)
- [Configuration](#configuration)
- [Running the Application](#running-the-application)
  - [Setting Up](#setting-up)
  - [Compiling the C++ Files](#compiling-the-c++-files)
- [Authors](#authors)
- [License](#license)
- [Notes](#notes)

## Features
- Add multiple students with name, age, and grades.
- Display all students along with their grades and average scores.
- Determine student performance based on their average grade.
- Identify the top-performing student.
- Count students who have passed or failed.
- Search for a student by name.
- User-friendly menu-based interaction.

## Detailed Component Description

### Student Data Management
The system provides:
- **Student Registration**: Users can add student details including name, age, and grades.
- **Data Storage**: Maintains a list of up to 100 students within the program.
- **Searching & Listing**: Allows retrieval of student records based on name and displays all stored students.

### Performance Analysis
The program includes:
- **Grade Calculation**: Computes averages for each student.
- **Top Student Identification**: Finds and displays the student with the highest grade.
- **Pass/Fail Count**: Counts students who have passed or failed based on grade thresholds.

## Prerequisites
- C++ Compiler (e.g., g++ for GCC)
- Terminal or Command Prompt

## Configuration
Ensure that:
- The student capacity limit is set to 100.
- Numerical values are entered correctly to prevent input errors.

## Running the Application

### Setting Up
1. Clone or download the repository.
2. Open a terminal or command prompt in the project directory.

### Compiling the C++ Files
Navigate to the project directory and compile the code:
```sh
 g++ -o Grupi50 Grupi50.cpp
```

## Authors
- [Detjon Gjuraj](https://github.com/Detjon28)
- [Zymer Hasani](https://github.com/zymerhasani)
- [Yll Qoqaj](https://github.com/YllQoqaj)
- [Bleart Spahiu](https://github.com/Bleart18)

## License
This project is open-source and available for modification and distribution.

## Notes
- The program supports a maximum of 100 students.
- Enter valid numerical values for age and grades to avoid errors.
- Use the menu system to interact with the program efficiently.
