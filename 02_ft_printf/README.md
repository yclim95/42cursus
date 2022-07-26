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


## Testing

```bash
lyao-che@u90z04s01 printfTester % make m
Already up to date.
make -C ./libft
gcc  -c ft_isalpha.c -o ft_isalpha.o
gcc  -c ft_isdigit.c -o ft_isdigit.o
gcc  -c ft_isalnum.c -o ft_isalnum.o
gcc  -c ft_isascii.c -o ft_isascii.o
gcc  -c ft_isprint.c -o ft_isprint.o
gcc  -c ft_strlen.c -o ft_strlen.o
gcc  -c ft_memset.c -o ft_memset.o
gcc  -c ft_bzero.c -o ft_bzero.o
gcc  -c ft_memcpy.c -o ft_memcpy.o
gcc  -c ft_memmove.c -o ft_memmove.o
gcc  -c ft_strlcpy.c -o ft_strlcpy.o
gcc  -c ft_strlcat.c -o ft_strlcat.o
gcc  -c ft_toupper.c -o ft_toupper.o
gcc  -c ft_tolower.c -o ft_tolower.o
gcc  -c ft_strchr.c -o ft_strchr.o
gcc  -c ft_strrchr.c -o ft_strrchr.o
gcc  -c ft_strncmp.c -o ft_strncmp.o
gcc  -c ft_memchr.c -o ft_memchr.o
gcc  -c ft_memcmp.c -o ft_memcmp.o
gcc  -c ft_strnstr.c -o ft_strnstr.o
gcc  -c ft_atoi.c -o ft_atoi.o
gcc  -c ft_calloc.c -o ft_calloc.o
gcc  -c ft_strdup.c -o ft_strdup.o
gcc  -c ft_itoa_base.c -o ft_itoa_base.o
gcc  -c ft_substr.c -o ft_substr.o
gcc  -c ft_strjoin.c -o ft_strjoin.o
gcc  -c ft_strtrim.c -o ft_strtrim.o
gcc  -c ft_split.c -o ft_split.o
gcc  -c ft_itoa.c -o ft_itoa.o
gcc  -c ft_strmapi.c -o ft_strmapi.o
gcc  -c ft_striteri.c -o ft_striteri.o
gcc  -c ft_putchar_fd.c -o ft_putchar_fd.o
gcc  -c ft_putstr_fd.c -o ft_putstr_fd.o
gcc  -c ft_putendl_fd.c -o ft_putendl_fd.o
gcc  -c ft_putnbr_fd.c -o ft_putnbr_fd.o
ar crs libft.a ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_itoa_base.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
clang -Wall -Wextra -Werror   -c -o sources/ft_printf.o sources/ft_printf.c
clang -Wall -Wextra -Werror   -c -o sources/ft_is_argument.o sources/ft_is_argument.c
clang -Wall -Wextra -Werror   -c -o sources/ft_formats.o sources/ft_formats.c
clang -Wall -Wextra -Werror   -c -o sources/ft_char_format.o sources/ft_char_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_string_format.o sources/ft_string_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_pointer_format.o sources/ft_pointer_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_decimal_format.o sources/ft_decimal_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_unsigned_decimal_format.o sources/ft_unsigned_decimal_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_hexadecimal_format.o sources/ft_hexadecimal_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_uppercase_hexadecimal_format.o sources/ft_uppercase_hexadecimal_format.c
clang -Wall -Wextra -Werror   -c -o sources/ft_percent_format.o sources/ft_percent_format.c
cp ./libft/libft.a libftprintf.a
ar rcs libftprintf.a ./sources/ft_printf.o ./sources/ft_is_argument.o ./sources/ft_formats.o ./sources/ft_char_format.o ./sources/ft_string_format.o ./sources/ft_pointer_format.o ./sources/ft_decimal_format.o ./sources/ft_unsigned_decimal_format.o ./sources/ft_hexadecimal_format.o ./sources/ft_uppercase_hexadecimal_format.o ./sources/ft_percent_format.o
[Mandatory]
category: c
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK
category: s
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.SIGSEGV
category: p

category: d
1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.KO 26.KO 27.KO 28.KO 29.KO
category: i
2.SIGSEGV 13.SIGSEGV 14.SIGSEGV 15.SIGSEGV 16.SIGSEGV 17.SIGSEGV 18.SIGSEGV 19.SIGSEGV 20.SIGSEGV 21.SIGSEGV 23.SIGSEGV 24.SIGSEGV 26.SIGSEGV 27.SIGSEGV 28.SIGSEGV
category: u

category: x
1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.KO 26.KO 27.KO 28.KO 29.KO 30.KO 31.KO
category: X

category: %
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK
category: mix
```


## Fixed: String category (SIGSEGV)

code (Before)

```c
#include "ft_printf.h"

int	ft_format_string(char *str)
{
	int	c;
	
	c = 0;
	if (!str)
		str = NULL;
	while (str[c] != '\0')
		c += ft_putchar_fd(str[c], 1);
	return (c);
}

```

## Code (After)

```c
#include "ft_printf.h"

int	ft_format_string(char *str)
{
	int	c;

	c = 0;
	if (!str)
		str = "(null)";
	while (str[c] != '\0')
		c += ft_putchar_fd(str[c], 1);
	return (c);
}
```

## Explanation (String)

```c
#include <stdio.h>

int main() {
    // Write C code here
    char *str1 = "(null)";
    
    printf("%s\n", str1);
    printf("test %s\n", NULL);
    return (0);
}
```

## 

```
(null)
test (null)
```
