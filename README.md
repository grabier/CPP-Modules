# 🖥️ C++ Modules (42 Curriculum)

> A deep dive into Object-Oriented Programming, from C++98 basics to advanced STL manipulation and templates.

[![C++](https://img.shields.io/badge/Language-C++98-00599C?style=for-the-badge&logo=c%2B%2B)](https://isocpp.org/)
[![42](https://img.shields.io/badge/School-42-000000?style=for-the-badge&logo=42)](https://42.fr/en/homepage/)
[![Linux](https://img.shields.io/badge/OS-Linux%2FUnix-FCC624?style=for-the-badge&logo=linux)](https://www.linux.org/)

## 📖 About the Project

This repository contains the complete solutions for the **42** C++ modules. Unlike conventional tutorials, this course enforces adherence to the **C++98** standard to understand manual memory management and internal class structures before jumping into modern conveniences.

**Key Concepts Mastered:**
* **Coplien Form:** Constructor, Destructor, Copy Constructor, and Assignment Operator Overload.
* **Memory Management:** `new`, `delete`, and memory leak prevention. 
* **Polymorphism:** Abstract classes, interfaces, and virtual functions.
* **Casting:** `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`.
* **STL:** Containers (Vectors, Maps, Stacks, Deques) and Algorithms.

---

## 📂 Module Structure

Each module focuses on a specific software engineering concept:

| Module | Main Topic | Key Concepts |
| :--- | :--- | :--- |
| **Module 00** | **Introduction to C++** | Namespaces, Classes, Member functions, Stdio streams. |
| **Module 01** | **Memory & References** | `new`/`delete`, References vs Pointers, Switch statement. |
| **Module 02** | **Ad-hoc Polymorphism** | Operator Overloading, Orthodox Canonical Class Form. |
| **Module 03** | **Inheritance** | Single and Multiple Inheritance, Diamond Problem.  |
| **Module 04** | **Subtype Polymorphism** | Virtual functions, Abstract classes, Interfaces. |
| **Module 05** | **Repetition & Exceptions** | Try/Catch blocks, Custom Exceptions. |
| **Module 06** | **C++ Casts** | Serialization, Run-Time Type Identification (RTTI). |
| **Module 07** | **Templates** | Function Templates, Class Templates. |
| **Module 08** | **STL (Standard Template Library)** | Containers, Iterators, Algorithms (`easyfind`). |
| **Module 09** | **Advanced STL** | Bitcoin Exchange, RPN Calculator, Merge-Insertion Sort. |

---

## 🛠️ How to Test

Each folder contains its own `Makefile`. To test a specific exercise:

1. Enter the directory (e.g., Module 05, ex02):
   ```bash
   cd Module_05/ex02
