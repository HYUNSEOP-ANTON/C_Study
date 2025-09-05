# Chapter 1 — Concepts of Programming

## Objectives
1. Understand what programs do and why we need them  
2. Learn why programming languages exist  
3. Get a quick overview of the C language  
4. See why algorithms matter  
5. Describe algorithms with pseudocode and flowcharts

## What is Programming?
Programming is the process of writing a **program**—a sequence of instructions a computer can execute.  
Computers ultimately run **machine code**; programmers write in higher-level languages, then tools translate that code into machine code.

## Programming Languages
Computers understand only binary (0/1). Writing raw machine code is hard and not portable, so we use languages and translators.

- **Machine language**: binary instructions; **hardware-specific** and not portable.  
- **Assembly language**: mnemonic instructions (e.g., `ADD`, `MOV`); translated by an **assembler**.  
- **High-level languages**: human-friendly (e.g., C, Python). A **compiler** (or interpreter) translates them for execution. High-level code is more portable across platforms that have suitable compilers/interpreters.

## The C Language
- Created in the early 1970s by **Dennis Ritchie** at Bell Labs.  
- Small core, efficient, close to hardware yet expressive.  
- Good for systems programming (OS, compilers, embedded).  
- Portable across systems when written to the C standard.  
- Requires care (manual memory management, undefined behavior pitfalls).

## Algorithms
An **algorithm** is a precise, step-by-step procedure to solve a problem.  
We care about **correctness** and **efficiency** (time/space complexity).  
Common ways to describe algorithms: **flowcharts** and **pseudocode**.

## Flowcharts
A **flowchart** is a diagram of the algorithm’s control flow.  
Typical symbols: Start/End (oval), Process (rectangle), Decision (diamond), Input/Output (parallelogram), Arrows (flow).

## Pseudocode
**Pseudocode** looks like code but ignores strict syntax.  
It focuses on the **logic**, not language-specific details, making algorithms easy to read and translate into actual code later.

## (Bonus) Compilation Pipeline
Preprocessing → Compilation → Assembly → Linking → Executable
