_This project has been created as part of the 42 curriculum by asobolev._

# Libft

## Description

Libft is the firs project in the 42 curriculum.\
The objective is to recreate a custom C library by reimplementing
standard C library functions and creating additional utility functions.

This project aims to:

-   Reproduce essential libc functions
-   Develop custom string and memory manipulation functions
-   Implement a linked list data structure
-   Understand memory management and pointer behavior
-   Create a static library (`libft.a`) using the `ar` command

The library will be reused in future 42 projects.

------------------------------------------------------------------------

## Instructions

### Compilation

To compile the library:

``` bash
make
```

This will generate:

    libft.a

### Available Makefile rules

``` bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything
```

All files are compiled with the flags:

    -Wall -Wextra -Werror

The library is created using:

    ar rcs libft.a

------------------------------------------------------------------------

## Library Content

### Part 1 -- Libc Functions

Character classification: - ft_isalpha - ft_isdigit - ft_isalnum -
ft_isascii - ft_isprint

String functions: - ft_strlen - ft_strchr - ft_strrchr - ft_strncmp -
ft_strnstr

Memory functions: - ft_memset - ft_bzero - ft_memcpy - ft_memmove -
ft_memchr - ft_memcmp

Case conversion: - ft_toupper - ft_tolower

Conversion: - ft_atoi

Dynamic memory: - ft_calloc - ft_strdup

All functions strictly follow the behavior described in their respective
man pages.

------------------------------------------------------------------------

### Part 2 -- Additional Functions

-   ft_substr
-   ft_strjoin
-   ft_strtrim
-   ft_split
-   ft_itoa
-   ft_strmapi
-   ft_striteri
-   ft_putchar_fd
-   ft_putstr_fd
-   ft_putendl_fd
-   ft_putnbr_fd

These functions extend string manipulation and file descriptor output
functionality.

------------------------------------------------------------------------

### Part 3 -- Linked List

Structure implemented:

``` c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Functions implemented:

-   ft_lstnew
-   ft_lstadd_front
-   ft_lstsize
-   ft_lstlast
-   ft_lstadd_back
-   ft_lstdelone
-   ft_lstclear
-   ft_lstiter
-   ft_lstmap

This implementation allows storing any data type using `void *` and
provides essential linked list manipulation tools.

------------------------------------------------------------------------

## Technical Details

-   No global variables were used.
-   Helper functions are declared as `static` when necessary.
-   All memory allocations are properly freed.
-   No memory leaks.
-   No unexpected crashes (segmentation fault, double free, etc.).
-   The project follows the 42 Norm.
-   The static library is created using `ar`, as required.

------------------------------------------------------------------------

## AI Usage

AI was used only as a learning support tool:

-   To better understand C concepts and memory behavior.
-   To clarify man page descriptions.
-   To review algorithmic logic.

All implementations were written independently to ensure full
understanding of each function.

------------------------------------------------------------------------

## Resources

-   42 Intranet documentation
-   Linux man pages
-   The C Programming Language -- Kernighan & Ritchie
-   GNU C documentation
