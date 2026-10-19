*This project has been created as part of the 42 curriculum by zhasan.*

# ft_printf

## Description

**ft_printf** is a re-implementation of the C `printf()` function. The goal is to learn
how **variadic functions** work in C (`stdarg.h`) and to write clean, extensible code.

The project builds a static library, `libftprintf.a`, exposing:

    int ft_printf(const char *format, ...);

It returns the number of characters printed, like the original `printf()`.

**Supported conversions:** `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

## Instructions

Compiled with `cc -Wall -Wextra -Werror`.

    make          # builds libftprintf.a at the repository root
    make clean    # removes object files
    make fclean   # removes object files and the library
    make re       # fclean + all

Usage:

    #include "ft_printf.h"

    int main(void)
    {
        ft_printf("Hello %s, number: %d, hex: %x\n", "World", 42, 255);
        return (0);
    }

    cc main.c -L. -lftprintf -o test

## Algorithm and data structure

**Algorithm:** the format string is read in a single pass. Normal characters are
written directly with `write()`. After a `%`, a dispatcher calls the matching handler,
which gets its argument with `va_arg`, prints it, and returns the number of characters
written. These counts are summed and returned.

Numbers are printed recursively (divide by the base, print digits in order), so no
buffer or `malloc` is needed.

## Resources

- `man 3 printf`, `man 3 stdarg`, `man 2 write`, `man ar`
- GNU Make manual: https://www.gnu.org/software/make/manual/

AI was used only to help clarify concepts like
`va_list`.
