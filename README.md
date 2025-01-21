# Operating System Project - Custom Kernel

## Description

This project involves building a custom kernel for an operating system. The kernel is designed to handle basic functionalities such as process management, file management, and tree structures used for organizing files and processes. The kernel was built from scratch to learn and understand how operating systems function at a low level.

## Files

- **makefile.c**: Contains the build instructions for the kernel. It compiles the source files into a kernel binary and handles dependencies.
- **process.c**: Implements process management functionalities. This includes creating, scheduling, and terminating processes.
- **tree.c**: Implements tree data structures used for organizing processes and files. It provides functionalities to manage and navigate these structures.
- **files**: Contains file management functionalities, including operations like opening, reading, writing, and closing files in the custom kernel environment.

## Features

- **Process Management**: Handles creation, execution, and termination of processes.
- **File Management**: Provides basic file operations such as file creation, reading, and writing.
- **Kernel Development**: A simple kernel developed from scratch to understand the low-level functionalities of an operating system.
- **Tree Structure**: Uses tree-based data structures to manage processes and files efficiently.

## Requirements

- **Operating System**: Linux/Unix-based systems (Ubuntu, Debian, etc.).
- **C Compiler**: GCC or any compatible C compiler.
- **Make Utility**: Make should be installed to build the kernel using the provided `makefile.c`.
- **Tools**: Basic knowledge of operating system concepts and low-level programming.

## Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/your-username/os-kernel-project.git
 2.Navigate to the project directory:
    
    cd os-kernel-project

 3.Compile the kernel using the makefile.c:

    make
 4.This will generate the kernel binary and other necessary files.
 5.To run the kernel, you may need to use a virtual machine (e.g., QEMU or VirtualBox) or test it in a real hardware environment.



Usage

1.After compiling the kernel, you can boot the system using a virtual machine with the generated binary.

2.The kernel allows you to create processes, manage files, and explore the basic functionalities

Acknowledgements

Kalmesh - Developer

