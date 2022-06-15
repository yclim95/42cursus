## After make

```sh
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

ar crs libft.a ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

lyao-che@u91z06s02 00_Libft % ls -la
total 624
drwxr-xr-x  74 lyao-che  2022_kuala-lumpur   2516 10 Jun 14:43 .
drwxr-xr-x  24 lyao-che  2022_kuala-lumpur    816 10 Jun 14:19 ..
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   2004 10 Jun 14:31 Makefile
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1223  6 Jun 07:40 ft_atoi.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    852 10 Jun 14:43 ft_atoi.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    973 24 May 14:24 ft_bzero.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    680 10 Jun 14:43 ft_bzero.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1086 10 Jun 14:29 ft_calloc.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    776 10 Jun 14:43 ft_calloc.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    980 24 May 07:40 ft_isalnum.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    744 10 Jun 14:43 ft_isalnum.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    998 24 May 07:26 ft_isalpha.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    688 10 Jun 14:43 ft_isalpha.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    968 24 May 08:13 ft_isascii.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    656 10 Jun 14:43 ft_isascii.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    970 10 Jun 14:17 ft_isdigit.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    656 10 Jun 14:43 ft_isdigit.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    969 24 May 07:50 ft_isprint.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    656 10 Jun 14:43 ft_isprint.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1794  6 Jun 08:03 ft_itoa.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1752 10 Jun 14:43 ft_itoa.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur      0 23 May 08:57 ft_memccpy.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1125 27 May 10:39 ft_memchr.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    724 10 Jun 14:43 ft_memchr.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1224 10 Jun 14:30 ft_memcmp.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    756 10 Jun 14:43 ft_memcmp.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1146 10 Jun 14:26 ft_memcpy.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    764 10 Jun 14:43 ft_memcpy.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1267 10 Jun 14:24 ft_memmove.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    888 10 Jun 14:43 ft_memmove.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1036  6 Jun 09:16 ft_memset.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    692 10 Jun 14:43 ft_memset.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    970 23 May 11:15 ft_putchar_fd.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    680 10 Jun 14:43 ft_putchar_fd.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1000 23 May 11:23 ft_putendl_fd.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    736 10 Jun 14:43 ft_putendl_fd.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1109  6 Jun 08:13 ft_putnbr_fd.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    776 10 Jun 14:43 ft_putnbr_fd.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    980 23 May 11:18 ft_putstr_fd.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    740 10 Jun 14:43 ft_putstr_fd.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   2081 10 Jun 14:40 ft_split.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   2072 10 Jun 14:43 ft_split.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1038  6 Jun 07:34 ft_strchr.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    700 10 Jun 14:43 ft_strchr.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1176  6 Jun 09:14 ft_strdup.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    848 10 Jun 14:43 ft_strdup.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1083 10 Jun 14:43 ft_striteri.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    728 10 Jun 14:43 ft_striteri.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1293  6 Jun 07:37 ft_strjoin.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    908 10 Jun 14:43 ft_strjoin.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1434  6 Jun 08:11 ft_strlcat.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    940 10 Jun 14:43 ft_strlcat.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1185 10 Jun 14:25 ft_strlcpy.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    836 10 Jun 14:43 ft_strlcpy.o
-rw-r--r--@  1 lyao-che  2022_kuala-lumpur   1040  6 Jun 08:16 ft_strlen.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    668 10 Jun 14:43 ft_strlen.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1233  6 Jun 07:34 ft_strmapi.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    864 10 Jun 14:43 ft_strmapi.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1189  6 Jun 09:07 ft_strncmp.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    776 10 Jun 14:43 ft_strncmp.o
-rw-r--r--@  1 lyao-che  2022_kuala-lumpur   1223  6 Jun 09:15 ft_strnstr.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    908 10 Jun 14:43 ft_strnstr.o
-rw-r--r--@  1 lyao-che  2022_kuala-lumpur   1093 25 May 09:45 ft_strrchr.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    800 10 Jun 14:43 ft_strrchr.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1297 10 Jun 14:36 ft_strtrim.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1088 10 Jun 14:43 ft_strtrim.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1222 10 Jun 14:35 ft_substr.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   1024 10 Jun 14:43 ft_substr.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    997 25 May 08:09 ft_tolower.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    664 10 Jun 14:43 ft_tolower.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    997  6 Jun 08:16 ft_toupper.c
-rw-r--r--   1 lyao-che  2022_kuala-lumpur    664 10 Jun 14:43 ft_toupper.o
-rw-r--r--   1 lyao-che  2022_kuala-lumpur  32240 10 Jun 14:43 libft.a
-rw-r--r--   1 lyao-che  2022_kuala-lumpur   2471  6 Jun 10:38 libft.h
```


## Testing

1. [42KL Libft Testing Recommended](https://github.com/jtoty/Libftest)
2. [42KL Libft Testing Recommended](https://github.com/Tripouille/libftTester)

```
lyao-che@u80z03s02 Libftest % bash grademe.sh
Checking for updates...
No updates available.

Copying files...
Please wait a moment.
--------------------------------------------------------------------------------------------
|                                     CHECKING FILES|
--------------------------------------------------------------------------------------------
Makefile      -Wall     -Wextra   -Werror
found         ok        ok        ok

Header file   Norme
found         ok

--------------------------------------------------------------------------------------------
|                                    COMPILING LIBFT|
--------------------------------------------------------------------------------------------
rule all        rule $(NAME)     rule clean       rule fclean     make relibft.a
found           found            found            found           okfound

--------------------------------------------------------------------------------------------
|                                     STARTING TESTS|
--------------------------------------------------------------------------------------------

Part1 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTSRESULT
ft_atoi               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓OK
ft_bzero              ok             success     clean            ✓✓OK
ft_calloc             ok             success     clean            ✓OK
ft_isalnum            ok             success     clean            ✓✓✓✓✓✓✓OK
ft_isalpha            ok             success     clean            ✓✓✓✓✓✓✓OK
ft_isascii            ok             success     clean            ✓✓✓✓✓✓✓OK
ft_isdigit            ok             success     clean            ✓✓✓✓✓✓✓OK
ft_isprint            ok             success     clean            ✓✓✓✓✓✓✓OK
ft_memccpy            NTI            NTI         NTI              NTINTI
ft_memchr             ok             success     clean            ✓✓✓✓✓✓OK
ft_memcmp             ok             success     clean            ✓✓✓✓✓✓✓✓✓OK
ft_memcpy             ok             success     clean            ✓✓✓OK
ft_memmove            ok             success     clean            ✓✓✓✓✓OK
ft_memset             ok             success     clean            ✓✓✓✓OK
ft_strchr             ok             success     clean            ✓✓✓✓✓✓OK
ft_strdup             ok             success     clean            ✓OK
ft_strlcat            ok             success     clean            ✓✓✓✓✓✓✓✓✓OK
ft_strlcpy            ok             success     clean            ✓✓✓✓✓OK
ft_strlen             ok             success     clean            ✓✓✓✓✓✓OK
ft_strncmp            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓OK
ft_strnstr            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓OK
ft_strrchr            ok             success     clean            ✓✓✓✓✓✓✓✓OK
ft_tolower            ok             success     clean            ✓✓✓✓✓✓✓OK
ft_toupper            ok             success     clean            ✓✓✓✓✓✓✓OK

Total : 23/24

Part2 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTSRESULT
ft_itoa               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓OK
ft_putchar_fd         ok             success     clean            ✓✓✓✓✓✓✓OK
ft_putendl_fd         ok             success     clean            ✓✓✓✓OK
ft_putnbr_fd          ok             success     clean            ✓✓✓✓✓✓✓✓✓OK
ft_putstr_fd          ok             success     clean            ✓✓✓✓OK
ft_split              ok             success     clean            ✓✓✓✓✓OK
ft_strjoin            ok             success     clean            ✓✓✓✓OK
ft_strmapi            ok             success     clean            ✓OK
ft_strtrim            ok             success     clean            ✓✓✓✓✓OK
ft_substr             ok             success     clean            ✓✓✓✓OK

Total : 10/10

Bonus functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTSRESULT
ft_lstadd_back        NTI            NTI         NTI              NTINTI
ft_lstadd_front       NTI            NTI         NTI              NTINTI
ft_lstclear           NTI            NTI         NTI              NTINTI
ft_lstdelone          NTI            NTI         NTI              NTINTI
ft_lstiter            NTI            NTI         NTI              NTINTI
ft_lstlast            NTI            NTI         NTI              NTINTI
ft_lstmap             NTI            NTI         NTI              NTINTI
ft_lstnew             NTI            NTI         NTI              NTINTI
ft_lstsize            NTI            NTI         NTI              NTINTI

Total : 0/9

Additional functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTSRESULT
ft_striteri           ok             success     clean            ✓OK

Total : 1/1
Abort : A Bus error : B Segmentation fault : S Timeout : T Nothing turned in : NTI

A deepthought file has been generated in /Users/lyao-che/Desktop/00_Libft/Libftest
```


```
lyao-che@u80z03s02 LibftTester % make m
Already up to date.
If all your tests are OK and the moulinette KO you, please run the tester with valgrind (see README)
make -C /Users/lyao-che/Desktop/00_Libft
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
ar crs libft.a ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
[Mandatory]
ft_memset	: 1.OK 2.OK
ft_bzero	: 1.OK 2.OK 3.OK
ft_memcpy	: 1.OK 2.OK
ft_memmove	: 1.OK 2.OK 3.OK 4.OK
ft_memchr	: 1.OK 2.OK 3.OK 4.OK 5.OK
ft_memcmp	: 1.OK 2.OK 3.OK 4.OK 5.OK
ft_strlen	: 1.OK 2.OK
ft_isalpha	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK
ft_isdigit	: 1.OK 2.OK 3.OK 4.OK
ft_isalnum	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK
ft_isascii	: 1.OK 2.OK 3.OK 4.OK
ft_isprint	: 1.OK 2.OK 3.OK 4.OK
ft_toupper	: 1.OK 2.OK 3.OK 4.OK
ft_tolower	: 1.OK 2.OK 3.OK 4.OK
ft_strchr	: 1.OK 2.OK 3.OK 4.OK 5.KO
ft_strrchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.KO 7.OK
ft_strncmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK
ft_strlcpy	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK
ft_strlcat	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK
ft_strnstr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK
ft_atoi		: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK
ft_calloc	: 1.OK 2.MOK 3.KO
ft_strdup	: 1.OK 2.MOK 3.OK 4.MOK
ft_substr	: 1.OK 2.MOK LEAKS.KO [0x3736353433323130 : 14130924396493112] 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MKO 15.OK 16.MOK
ft_strjoin	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK
ft_strtrim	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK
ft_split	: 1.MOK 2.OK 3.MOK 4.OK 5.MOK 6.OK 7.OK 8.OK 9.OK 10.OK 11.MOK 12.OK 13.OK 14.MOK 15.OK 16.MOK 17.OK 18.OK 19.MOK 20.OK 21.OK 22.MOK 23.OK 24.OK 25.MOK 26.OK 27.MOK 28.OK 29.MOK 30.OK 31.MOK 32.OK 33.MOK 34.OK 35.MOK 36.OK 37.MOK 38.OK 39.MOK 40.OK 41.MOK 42.OK
ft_itoa		: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK
ft_strmapi	: 1.OK 2.MOK 3.OK 4.MOK
ft_putchar_fd	: 1.OK
ft_putstr_fd	: 1.OK
ft_putendl_fd	: 1.OK
ft_putnbr_fd	: 1.OK 2.OK 3.OK 4.OK 5.OK
ft_striteri	: 1.OK 2.OK 3.OK
```


```
lyao-che@u80z03s02 libft-unit-test % make
 make -j 3 -C ../libft
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
ar crs libft.a ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
 make bonus -j 3 -C ../libft
make[1]: *** No rule to make target `bonus'.  Stop.
 cp ../libft/libft.a assets/
➤  clang -shared -fPIC assets/tmp/ft_atoi.o assets/tmp/ft_bzero.o assets/tmp/ft_calloc.o assets/tmp/ft_isalnum.o assets/tmp/ft_isalpha.o assets/tmp/ft_isascii.o assets/tmp/ft_isdigit.o assets/tmp/ft_isprint.o assets/tmp/ft_itoa.o assets/tmp/ft_memchr.o assets/tmp/ft_memcmp.o assets/tmp/ft_memcpy.o assets/tmp/ft_memmove.o assets/tmp/ft_memset.o assets/tmp/ft_putchar_fd.o assets/tmp/ft_putendl_fd.o assets/tmp/ft_putnbr_fd.o assets/tmp/ft_putstr_fd.o assets/tmp/ft_split.o assets/tmp/ft_strchr.o assets/tmp/ft_strdup.o assets/tmp/ft_striteri.o assets/tmp/ft_strjoin.o assets/tmp/ft_strlcat.o assets/tmp/ft_strlcpy.o assets/tmp/ft_strlen.o assets/tmp/ft_strmapi.o assets/tmp/ft_strncmp.o assets/tmp/ft_strnstr.o assets/tmp/ft_strrchr.o assets/tmp/ft_strtrim.o assets/tmp/ft_substr.o assets/tmp/ft_tolower.o assets/tmp/ft_toupper.o -o libft.so
lyao-che@u80z03s02 libft-unit-test % make f
 make -j 3 -C ../libft
make[1]: Nothing to be done for `all'.
 make bonus -j 3 -C ../libft
make[1]: *** No rule to make target `bonus'.  Stop.
 cp ../libft/libft.a assets/
➤  clang -shared -fPIC assets/tmp/ft_atoi.o assets/tmp/ft_bzero.o assets/tmp/ft_calloc.o assets/tmp/ft_isalnum.o assets/tmp/ft_isalpha.o assets/tmp/ft_isascii.o assets/tmp/ft_isdigit.o assets/tmp/ft_isprint.o assets/tmp/ft_itoa.o assets/tmp/ft_memchr.o assets/tmp/ft_memcmp.o assets/tmp/ft_memcpy.o assets/tmp/ft_memmove.o assets/tmp/ft_memset.o assets/tmp/ft_putchar_fd.o assets/tmp/ft_putendl_fd.o assets/tmp/ft_putnbr_fd.o assets/tmp/ft_putstr_fd.o assets/tmp/ft_split.o assets/tmp/ft_strchr.o assets/tmp/ft_strdup.o assets/tmp/ft_striteri.o assets/tmp/ft_strjoin.o assets/tmp/ft_strlcat.o assets/tmp/ft_strlcpy.o assets/tmp/ft_strlen.o assets/tmp/ft_strmapi.o assets/tmp/ft_strncmp.o assets/tmp/ft_strnstr.o assets/tmp/ft_strrchr.o assets/tmp/ft_strtrim.o assets/tmp/ft_substr.o assets/tmp/ft_tolower.o assets/tmp/ft_toupper.o -o libft.so
[  Linking #0  ]
➤  clang -Werror -Wall -Wextra -O2 -funroll-loops -lncurses -o assets/libtests obj/src/main.o obj/src/test_functions.o obj/src/display_test_result.o obj/src/signal.o obj/src/sandbox.o obj/src/bench_functions.o obj/src/additional_functions.o obj/hardcore-mode/hardcore-main.o obj/hardcore-mode/error.o obj/hardcore-mode/ncurses-display.o obj/hardcore-mode/test-init.o obj/hardcore-mode/test-utils.o obj/hardcore-mode/test-strcpy.o obj/hardcore-mode/test-strcmp.o obj/hardcore-mode/test-strncmp.o obj/hardcore-mode/test-memset.o obj/hardcore-mode/test-memcpy.o obj/hardcore-mode/test-memccpy.o obj/hardcore-mode/test-memmove.o obj/hardcore-mode/test-memchr.o obj/hardcore-mode/test-memcmp.o obj/hardcore-mode/test-strlen.o obj/hardcore-mode/test-strncpy.o obj/hardcore-mode/test-strcat.o obj/hardcore-mode/test-strncat.o obj/hardcore-mode/test-strchr.o obj/hardcore-mode/test-strrchr.o obj/hardcore-mode/test-strstr.o
RUNNING TESTS:
                      First part
.-"-.     .-"-.     .-"-.     .-"-.     .-"-.     .-"-.
     "-.-"     "-.-"     "-.-"     "-.-"     "-.-"
ft_memset:     [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_bzero:      [OK] [OK] [OK] [OK]
ft_memcpy:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memccpy:    [MISSING]
ft_memmove:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memchr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memcmp:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strlen:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_isalpha:    [OK]
ft_isdigit:    [OK]
ft_isalnum:    [OK]
ft_isascii:    [OK]
ft_isprint:    [OK]
ft_toupper:    [OK]
ft_tolower:    [OK]
ft_strchr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strrchr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strncmp:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strlcpy:    [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strlcat:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strnstr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [NO CRASH]
[no crash]: your strnstr does not segfault when null parameter is sent

ft_atoi:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [KO] [KO] [OK] [OK] [OK] [OK]
[KO]: your atoi does not work with over long max value
[KO]: your atoi does not work with over long min value

ft_calloc:     [OK] [OK] [OK] [OK] [OK]
ft_strdup:     [OK] [OK] [OK] [OK] [OK] [OK] [OK]

In this part, you can choose to protect your function or not to,
a color code will tell you if your function is protected/not BUT stay coherent !
[🛡 ] --> protected
[💥 ] --> not protected
                     Second part
 __)(__  __)(__  __)(__  __)(__  __)(__  __)(__  __)(__  __)
(______)(______)(______)(______)(______)(______)(______)(___

ft_substr:     [OK] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] [💥 ] [OK]
[fail]: your substr did not allocate the good size so the \0 test may be false

ft_strjoin:    [OK] [OK] [OK] [OK] [OK] [💥 ]
ft_strtrim:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [🛡 ]
ft_split:      [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [💥 ]
ft_itoa:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strmapi:    [OK] [OK] [OK] [OK] [OK] [💥 ]
ft_putchar_fd: [OK] [OK]
ft_putstr_fd:  [OK] [OK] [💥 ]
ft_putendl_fd: [OK] [OK] [💥 ]
ft_putnbr_fd:  [OK] [OK] [OK] [OK] [OK]

 /~~~\/~~\/~~~\/~~~\/~~\/~~~\                    /~~~\/~~\/~~~\/~~~\/~~\/~~~\
 | /\/ /\/ /\ || /\/ /\/ /\ |                    | /\ \/\ \/\ || /\ \/\ \/\ |
  \ \/ /\/ /\/ /\ \/ /\/ /\/ /     Bonus part     \ \/\ \/\ \/ /\ \/\ \/\ \/ /
   \ \/\ \/\ \/  \ \/\ \/\ \/                      \/ /\/ /\/ /  \/ /\/ /\/ /
,_/\ \/\ \/\ \__/\ \/\ \/\ \______________________/ /\/ /\/ /\__/ /\/ /\/ /\_,
(__/\__/\__/\____/\__/\__/\________________________/\__/\__/\____/\__/\__/\__)

ft_lstnew:     [MISSING]
ft_lstadd_front: [MISSING]
ft_lstsize:    [MISSING]
ft_lstlast:    [MISSING]
ft_lstadd_back:[MISSING]
ft_lstdelone:  [MISSING]
ft_lstclear:   [MISSING]
ft_lstiter:    [MISSING]
ft_lstmap:     [MISSING]
ft_striteri:   [OK] [OK] [🛡 ]
See result.log for more informations !
```
