# 0x15.C - File I/O

This repository contains C programs related to file input/output (I/O), file descriptors, and permissions.

## Description

This project includes C programs that perform various file I/O operations, such as reading and writing files, creating and appending text to files, copying file contents, and displaying information from ELF headers.

## Requirements

- All code is compiled on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a newline character.
- A `README.md` file is provided at the root of the project folder.
- Code follows the Betty style, checked using `betty-style.pl` and `betty-doc.pl`.
- No global variables are used.
- Each file contains no more than 5 functions.
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- `_putchar.c` is not required to be pushed; a provided version will be used.
- Prototypes of all functions and `_putchar` are included in `main.h`.
- Header files are include guarded.

## Tasks

The repository includes the following tasks:

1. `0-read_textfile.c`: Reads and prints the content of a text file.
2. `1-create_file.c`: Creates a new file and writes content to it.
3. `2-append_text_to_file.c`: Appends text to the end of a file.
4. `3-cp.c`: Copies the content of one file to another.
5. `100-elf_header.c`: Displays information from the ELF header of an ELF file.

## Usage

Compile the programs using a C compiler (e.g., gcc) and run the resulting executables.

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_file.c> -o <output_filename>
./<output_filename> <arguments>
