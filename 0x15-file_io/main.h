#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void check_elf(unsigned char *e_ident);

/* Other function prototypes here... (print_magic, print_class, etc.) */

/**
 * is_elf_file - Checks if a file is an ELF file.
 * @filename: The name of the file to check.
 * Return: 1 if the file is an ELF file, 0 otherwise.
 */
int is_elf_file(const char *filename);

/**
 * display_elf_info - Displays information contained in the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_info(const Elf64_Ehdr *header);

/**
 * read_textfile - Read and print text from a file
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Create a file and write text to it
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Append text to an existing file
 * @filename: The name of the file to append to
 * @text_content: The content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * main - Entry point for copying a file or displaying ELF header
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: 0 on success, otherwise appropriate error code
 */
int main(int ac, char **av);

#endif /* MAIN_H */
