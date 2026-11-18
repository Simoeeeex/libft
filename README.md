*This project has been created as part of the 42 curriculum by mbouzoub.*

# Libft

## Description

Libft is my first C library, built for the 42 curriculum (1337). The goal is to
understand how the standard C functions work by rewriting them myself, and to
build a small toolbox that I can reuse in my future 42 projects.

The library is compiled into a static archive, `libft.a`, and is organised in
three parts:

1. **Libc functions**: re-implementations of 23 standard C functions, with the
   same prototypes and behaviour as the originals but with the `ft_` prefix
   (for example `strlen` becomes `ft_strlen`). They cover:
   - character checks and conversions (`isalpha`, `isdigit`, `toupper`, ...);
   - string handling (`strlen`, `strchr`, `strncmp`, `strlcpy`, `strnstr`, ...);
   - raw memory handling (`memset`, `bzero`, `memcpy`, `memmove`, `memcmp`, ...);
   - number conversion (`atoi`);
   - allocation helpers (`calloc`, `strdup`).
   Rewriting them forced me to handle the edge cases of the originals: empty
   strings, overlapping memory areas, a size of 0, `INT_MIN` and multiplication
   overflow.
2. **Additional functions**: 11 useful functions that are not in libc, or that
   exist in a different form. They are split into three families:
   - functions that build a new string with `malloc` (`ft_substr`,
     `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`);
   - functions that apply another function to every character of a string
     (`ft_strmapi`, `ft_striteri`);
   - output helpers that write to any file descriptor with `write`
     (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
   The allocating functions return `NULL` if `malloc` fails, and `ft_split`
   frees everything it already allocated before returning `NULL`.
3. **Linked list functions**: 9 functions to manipulate a singly linked list
   built on the `t_list` structure. Each node stores its data in a `void *`
   (so any type of data can be stored) and a pointer to the next node. The
   functions let you:
   - create a node (`ft_lstnew`);
   - add a node at the beginning or at the end (`ft_lstadd_front`,
     `ft_lstadd_back`);
   - inspect the list (`ft_lstsize`, `ft_lstlast`);
   - go through it or build a transformed copy (`ft_lstiter`, `ft_lstmap`);
   - free one node or the whole list (`ft_lstdelone`, `ft_lstclear`), using a
     `del` function given by the caller to free the content of each node.
In total the library contains **43 functions**: 23 libc functions, 11
additional functions and 9 linked list functions..

## Instructions

### Compilation

```sh
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + all
```

The project is compiled with `cc -Wall -Wextra -Werror`, and the library is
created with `ar rcs`. Running `make` twice does not relink the library.

### Usage

Include the header in your code and link against `libft.a`:

```c
#include "libft.h"

int	main(void)
{
	ft_putendl_fd("Hello 1337", 1);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c libft.a -o test
./test
```

## Resources
Linked List 
https://www.youtube.com/watch?v=R9PTBwOzceo&list=PLBlnK6fEyqRi3-lvwLGzcaquOs5OBTCww
https://youtu.be/N6dOwBde7-M?si=FW5w1HAdHviAdIeU

Makefile 
https://youtu.be/4IDLCtEPtN8?si=uI_7QkaZBGlKVBXL
https://youtu.be/yWLkyN_Satk?si=PN8bwq3VpSZh5yac

File descriptor
https://www.geeksforgeeks.org/c/input-output-system-calls-c-create-open-close-read-write/


### Use of AI

I wrote the functions myself. I used AI only as a learning and checking tool:

- To review my finished code against the subject (compilation flags, Makefile
  rules, relinking, allowed external functions).

- To explain concepts I had to understand: memory layout, pointers and
  dereferencing, type casting, struct padding.

AI did not write the code of the library, and I can explain every function in
this repository.
