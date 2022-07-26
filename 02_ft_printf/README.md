# Here are the requirements:
1. Don’t implement the **buffer management** of the original **printf()**.
2. Your function has to handle the following conversions: **cspdiuxX%**
3. Your function will be compared against the original printf().
4. You must use the command **ar** to create your library.
5. Using the **libtool** command is forbidden.
6. Your **libftprintf.a** has to be created at the root of your repository.
7. You have to implement the following conversions:
   1. %c Prints a single character.
   2. %s Prints a string (as defined by the common C convention).
   3. %p The void * pointer argument has to be printed in hexadecimal format. • %d Prints a decimal (base 10) number.
   4. %i Prints an integer in base 10.
   5. %u Prints an unsigned decimal (base 10) number.
   6. %x Prints a number in hexadecimal (base 16) lowercase format.
   7. %X Prints a number in hexadecimal (base 16) uppercase format.
   8. %% Prints a percent sign.

# External functions
1. Functions used before
   1. malloc
   2. free
   3. write
2. New functions to explore
   1. va_start
   2. va_arg
   3. va_copy
   4. va_end

# Tester Resources
1. [ft_printf tester](https://github.com/Tripouille/printfTester)


## Issue faced when building Makefile

```bash
Lims-iMac:02_ft_printf YCLim$ make
make: *** No rule to make target `make', needed by `libft/libft.a'.  Stop.
```

## Before solved (Code)

```Makefile
$(NAME): $(OBJECTS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(LIBFT): make -c $(LIBFT_PATH)
```

## Solved (Code)

```Makefile
$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME):	$(OBJECTS)
		cp $(LIBFT) $(NAME)
		$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)
```

## Build Makefile (Result)

```bash
Lims-iMac:02_ft_printf YCLim$ make
clang -Wall -Wextra -Werror   -c -o sources/ft_percent_format.o sources/ft_percent_format.c
cp ./libft/libft.a libftprintf.a
ar rcs libftprintf.a ./sources/ft_printf.o ./sources/ft_is_argument.o ./sources/ft_formats.o ./sources/ft_char_format.o ./sources/ft_string_format.o ./sources/ft_pointer_format.o ./sources/ft_decimal_format.o ./sources/ft_unsigned_decimal_format.o ./sources/ft_hexadecimal_format.o ./sources/ft_uppercase_hexadecimal_format.o ./sources/ft_percent_format.o

Lims-iMac:sources YCLim$ ls
ft_char_format.c			ft_pointer_format.c
ft_char_format.o			ft_pointer_format.o
ft_decimal_format.c			ft_printf.c
ft_decimal_format.o			ft_printf.h
ft_formats.c				ft_printf.o
ft_formats.o				ft_string_format.c
ft_hexadecimal_format.c			ft_string_format.o
ft_hexadecimal_format.o			ft_unsigned_decimal_format.c
ft_is_argument.c			ft_unsigned_decimal_format.o
ft_is_argument.o			ft_uppercase_hexadecimal_format.c
ft_percent_format.c			ft_uppercase_hexadecimal_format.o
ft_percent_format.o


Lims-iMac:02_ft_printf YCLim$ make fclean
make clean -C ./libft
rm -f ./ft_isalpha.o ./ft_isdigit.o ./ft_isalnum.o ./ft_isascii.o ./ft_isprint.o ./ft_strlen.o ./ft_memset.o ./ft_bzero.o ./ft_memcpy.o ./ft_memmove.o ./ft_strlcpy.o ./ft_strlcat.o ./ft_toupper.o ./ft_tolower.o ./ft_strchr.o ./ft_strrchr.o ./ft_strncmp.o ./ft_memchr.o ./ft_memcmp.o ./ft_strnstr.o ./ft_atoi.o ./ft_calloc.o ./ft_strdup.o ./ft_substr.o ./ft_strjoin.o ./ft_strtrim.o ./ft_split.o ./ft_itoa.o ./ft_strmapi.o ./ft_striteri.o ./ft_putchar_fd.o ./ft_putstr_fd.o ./ft_putendl_fd.o ./ft_putnbr_fd.o
rm -f ./sources/ft_printf.o ./sources/ft_is_argument.o ./sources/ft_formats.o ./sources/ft_char_format.o ./sources/ft_string_format.o ./sources/ft_pointer_format.o ./sources/ft_decimal_format.o ./sources/ft_unsigned_decimal_format.o ./sources/ft_hexadecimal_format.o ./sources/ft_uppercase_hexadecimal_format.o ./sources/ft_percent_format.o
make fclean -C ./libft
rm -f ./ft_isalpha.o ./ft_isdigit.o ./ft_isalnum.o ./ft_isascii.o ./ft_isprint.o ./ft_strlen.o ./ft_memset.o ./ft_bzero.o ./ft_memcpy.o ./ft_memmove.o ./ft_strlcpy.o ./ft_strlcat.o ./ft_toupper.o ./ft_tolower.o ./ft_strchr.o ./ft_strrchr.o ./ft_strncmp.o ./ft_memchr.o ./ft_memcmp.o ./ft_strnstr.o ./ft_atoi.o ./ft_calloc.o ./ft_strdup.o ./ft_substr.o ./ft_strjoin.o ./ft_strtrim.o ./ft_split.o ./ft_itoa.o ./ft_strmapi.o ./ft_striteri.o ./ft_putchar_fd.o ./ft_putstr_fd.o ./ft_putendl_fd.o ./ft_putnbr_fd.o
rm -f libft.a
rm -f libftprintf.a
```


## main.c

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("single character: %c\n", 'a');
	ft_printf("String: %s\n", "Testing");
	ft_printf("Pointer: %p\n", &ft_printf);
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Integer Base10: %i\n", 12312);
	ft_printf("Unsigned Decimal Base10: %u\n", 1543);
	ft_printf("Hexadecimal lowercase (Base16): %x\n", 505);
	ft_printf("Hexadecimal Uppercase (Base16), %X\n", 505);
	ft_printf("%%\n sign");

	return (0);
}
```
