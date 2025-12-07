# 🖥️ C++ Modules (42 Curriculum)

> Una inmersión profunda en la Programación Orientada a Objetos, desde los conceptos básicos de C++98 hasta la manipulación avanzada de la STL y plantillas.

[![C++](https://img.shields.io/badge/Language-C++98%20%2F%20Cstyle=for-the-badge&logo=c%2B%2B)](https://isocpp.org/)
[![42](https://img.shields.io/badge/School-42-000000?style=for-the-badge&logo=42)](https://42.fr/en/homepage/)
[![Linux](https://img.shields.io/badge/OS-Linux%2FUnix-FCC624?style=for-the-badge&logo=linux)](https://www.linux.org/)

## 📖 Sobre el Proyecto

Este repositorio contiene las soluciones completas a los módulos de C++ de **42**. A diferencia de los tutoriales convencionales, este curso obliga a adherirse al estándar **C++98** (en los primeros módulos) para comprender la gestión manual de memoria y la estructura interna de las clases, antes de saltar a las comodidades modernas.

**Conceptos clave dominados:**
* **Coplien Form:** Constructor, Destructor, Copy Constructor y Assignment Operator Overload.
* **Gestión de Memoria:** `new`, `delete`, y prevención de memory leaks.
* **Polimorfismo:** Clases abstractas, interfaces y virtual functions.
* **Casting:** `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`.
* **STL:** Contenedores (Vectors, Maps, Stacks, Deques) y Algoritmos.

---

## 📂 Estructura de los Módulos

Cada módulo se centra en un concepto específico de la ingeniería de software:

| Módulo | Tema Principal | Conceptos Clave |
| :--- | :--- | :--- |
| **Module 00** | **Introducción a C++** | Namespaces, Classes, Member functions, Stdio streams. |
| **Module 01** | **Memoria y Referencias** | `new`/`delete`, Referencias vs Punteros, Switch statement. |
| **Module 02** | **Polimorfismo Ad-hoc** | Operator Overloading, Orthodox Canonical Class Form. |
| **Module 03** | **Herencia** | Herencia simple y múltiple, Diamond Problem. |
| **Module 04** | **Polimorfismo de Subtipos** | Virtual functions, Abstract classes, Interfaces. |
| **Module 05** | **Repetición y Excepciones** | Try/Catch blocks, Custom Exceptions. |
| **Module 06** | **Casts de C++** | Serialización, Identificación de tipos en tiempo de ejecución. |
| **Module 07** | **Templates (Plantillas)** | Function Templates, Class Templates. |
| **Module 08** | **STL (Standard Template Library)** | Containers, Iterators, Algorithms (`easyfind`). |
| **Module 09** | **STL Avanzado** | Bitcoin Exchange, RPN Calculator, Merge-Insertion Sort. |

---

## 🛠️ Cómo probarlo

Cada carpeta contiene su propio `Makefile`. Para probar un ejercicio específico:

1. Entra en el directorio (ej. Module 05, ex02):
   ```bash
   cd Module_05/ex02
