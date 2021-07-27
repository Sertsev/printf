ALX - Printf Group Project
==========================

 C programming for ALX School!

==================================================================================

```_printf``` is a custom implementation of the C programming function ```printf```. This project is an application of the C programming knowledge     that [Holberton School](https://www.holbertonschool.com/) cohort 3 students have learned since starting the program on May 1, 2017.
 
 ## synopsis
 *  The objective of the printf project is to learn the base functionality of printf,
 *  take those concepts and apply them ourselves to create a new printf that works in the same way.
 
 ## Enviroment
 *  our printf project has been teasted on ubuntu 20.04 LTS
    
 **Prototype:** ```int _printf(const char *, ...);```
 
 ## Examples
 **String**
 * Input: ```_printf("%s\n", 'This is a string.');```
 * Output: ```This is a string.```
 
 **Character**
 * Input: ```_printf("The first letter in the alphabet is %c\n", 'A');```
 * Output: ```The first letter in the alphabet is A```
 
 **Integer**
 * Input: ```_printf("There are %i dozens in a gross\n", 12);```
 * Output: ```There are 12 dozens in a gross```
  
 **Decimal:**
 * Input: ```_printf("%d\n", 1000);```
 * Output:  ```1000```
 ## Project Requirements
 * All files will be compiled on Ubuntu 20.04 LTS
 * Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
 * Code must follow the [Betty](https://github.com/holbertonschool/Betty/wiki) style
 * Global variables are not allowed
 * Authorized functions and macros:
 * ```write``` (man 2 write)
 * ```malloc``` (man 3 malloc)
 * ```free``` (man 3 free)
 * ```va_start``` (man 3 va_start)
 * ```va_end``` (man 3 va_end)
 * ```va_copy``` (man 3 va_copy)
 * ```va_arg``` (man 3 va_arg)
## Mandatory Tasks
 - [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
 - [x] Handle conversion specifiers ```d```, ```i```.
 - [x] Create a man page for your function.
 ## Advanced Tasks
 - [x] Handle conversion specifier ```b```.
 - [x] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
 - [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
 - [x] Handle conversion specifier ```S```.
 - [x] Handle conversion specifier ```p```.
 - [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
 - [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
 - [ ] Handle the field width for non-custom conversion specifiers.
 - [ ] Handle the precision for non-custom conversion specifiers.
 - [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
 - [x] Handle the custom conversion specifier ```r``` that prints the reversed string.
 - [x] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
 - [x] All above options should work well together.

 ## Repository Contents
 *  The repository contains the following files
 
| FILE             | Description                                                      |
| -----------      | ---------------------------------------------------------------- |
| printf.c         | printf a file containing the _printf function and get function   |
| holberton.h      | contains function and struct declarations                        |
| inttostr.c       | holds functions which converts integers to strings               |
| help_funcs.c     | contains functions of printers                                   |
| help_funcs_2.c   | contains functions of printers                                   |
| README.md        | contains this help description                                   |
| man_3_printf     | contains manual of this functions                                |

=======================================================================================

## AUTHORS
*  [Sertsedengle Shewandagn](https://github.com/sertsev)
*  [Deborah Sakin](https://github.com/sakin977)
