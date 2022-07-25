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
