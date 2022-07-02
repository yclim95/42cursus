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
Lims-iMac:libft-unit-test YCLim$ make
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
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/main.o -c src/main.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/test_functions.o -c src/test_functions.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/display_test_result.o -c src/display_test_result.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/signal.o -c src/signal.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/sandbox.o -c src/sandbox.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/bench_functions.o -c src/bench_functions.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/src/additional_functions.o -c src/additional_functions.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/hardcore-main.o -c hardcore-mode/hardcore-main.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/error.o -c hardcore-mode/error.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/ncurses-display.o -c hardcore-mode/ncurses-display.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-init.o -c hardcore-mode/test-init.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-utils.o -c hardcore-mode/test-utils.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strcpy.o -c hardcore-mode/test-strcpy.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strcmp.o -c hardcore-mode/test-strcmp.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strncmp.o -c hardcore-mode/test-strncmp.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-memset.o -c hardcore-mode/test-memset.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-memcpy.o -c hardcore-mode/test-memcpy.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-memccpy.o -c hardcore-mode/test-memccpy.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-memmove.o -c hardcore-mode/test-memmove.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-memchr.o -c hardcore-mode/test-memchr.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-memcmp.o -c hardcore-mode/test-memcmp.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strlen.o -c hardcore-mode/test-strlen.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strncpy.o -c hardcore-mode/test-strncpy.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strcat.o -c hardcore-mode/test-strcat.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strncat.o -c hardcore-mode/test-strncat.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strchr.o -c hardcore-mode/test-strchr.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strrchr.o -c hardcore-mode/test-strrchr.c 
[  Building #0  ]
➤  clang -O2 -funroll-loops -Werror -Wall -Wextra -I./include -o obj/hardcore-mode/test-strstr.o -c hardcore-mode/test-strstr.c 
[  Linking #0  ]
➤  clang -Werror -Wall -Wextra -O2 -funroll-loops -lncurses -o assets/libtests obj/src/main.o obj/src/test_functions.o obj/src/display_test_result.o obj/src/signal.o obj/src/sandbox.o obj/src/bench_functions.o obj/src/additional_functions.o obj/hardcore-mode/hardcore-main.o obj/hardcore-mode/error.o obj/hardcore-mode/ncurses-display.o obj/hardcore-mode/test-init.o obj/hardcore-mode/test-utils.o obj/hardcore-mode/test-strcpy.o obj/hardcore-mode/test-strcmp.o obj/hardcore-mode/test-strncmp.o obj/hardcore-mode/test-memset.o obj/hardcore-mode/test-memcpy.o obj/hardcore-mode/test-memccpy.o obj/hardcore-mode/test-memmove.o obj/hardcore-mode/test-memchr.o obj/hardcore-mode/test-memcmp.o obj/hardcore-mode/test-strlen.o obj/hardcore-mode/test-strncpy.o obj/hardcore-mode/test-strcat.o obj/hardcore-mode/test-strncat.o obj/hardcore-mode/test-strchr.o obj/hardcore-mode/test-strrchr.o obj/hardcore-mode/test-strstr.o
 clang -Werror -Wall -Wextra -dynamiclib assets/malloc.c -I ./include -o assets/malloc.dylib 
 clang -Werror -Wall -Wextra assets/wrapper.c -I ./include -o run_test 
Lims-iMac:libft-unit-test YCLim$ make -f
/Library/Developer/CommandLineTools/usr/bin/make: option requires an argument -- f
Usage: make [options] [target] ...
Options:
  -b, -m                      Ignored for compatibility.
  -B, --always-make           Unconditionally make all targets.
  -C DIRECTORY, --directory=DIRECTORY
                              Change to DIRECTORY before doing anything.
  -d                          Print lots of debugging information.
  --debug[=FLAGS]             Print various types of debugging information.
  -e, --environment-overrides
                              Environment variables override makefiles.
  -f FILE, --file=FILE, --makefile=FILE
                              Read FILE as a makefile.
  -h, --help                  Print this message and exit.
  -i, --ignore-errors         Ignore errors from commands.
  -I DIRECTORY, --include-dir=DIRECTORY
                              Search DIRECTORY for included makefiles.
  -j [N], --jobs[=N]          Allow N jobs at once; infinite jobs with no arg.
  -k, --keep-going            Keep going when some targets can't be made.
  -l [N], --load-average[=N], --max-load[=N]
                              Don't start multiple jobs unless load is below N.
  -L, --check-symlink-times   Use the latest mtime between symlinks and target.
  -n, --just-print, --dry-run, --recon
                              Don't actually run any commands; just print them.
  -o FILE, --old-file=FILE, --assume-old=FILE
                              Consider FILE to be very old and don't remake it.
  -p, --print-data-base       Print make's internal database.
  -q, --question              Run no commands; exit status says if up to date.
  -r, --no-builtin-rules      Disable the built-in implicit rules.
  -R, --no-builtin-variables  Disable the built-in variable settings.
  -s, --silent, --quiet       Don't echo commands.
  -S, --no-keep-going, --stop
                              Turns off -k.
  -t, --touch                 Touch targets instead of remaking them.
  -v, --version               Print the version number of make and exit.
  -w, --print-directory       Print the current directory.
  --no-print-directory        Turn off -w, even if it was turned on implicitly.
  -W FILE, --what-if=FILE, --new-file=FILE, --assume-new=FILE
                              Consider FILE to be infinitely new.
  --warn-undefined-variables  Warn when an undefined variable is referenced.
  -N OPTION, --NeXT-option=OPTION
                              Turn on value of NeXT OPTION.

This program built for i386-apple-darwin11.3.0
Report bugs to <bug-make@gnu.org>
Lims-iMac:libft-unit-test YCLim$ make f
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

ft_substr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [🛡 ] [OK] 
ft_strjoin:    [OK] [OK] [OK] [OK] [OK] [🛡 ] 
ft_strtrim:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [🛡 ] 
ft_split:      [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [🛡 ] 
ft_itoa:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strmapi:    [OK] [OK] [OK] [OK] [OK] [🛡 ] 
ft_putchar_fd: [OK] [OK] 
ft_putstr_fd:  [OK] [OK] [🛡 ] 
ft_putendl_fd: [OK] [OK] [🛡 ] 
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


## .c files explanation

### 1. Required

#### 1.1. [ft_isalpha.c](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_isalpha.c)

1.  checks whether a character is an alphabet or not.
2.  If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0.
3.  [isalpha](https://www.programiz.com/c-programming/library-function/ctype.h/isalpha)

#### 1.2. [ft_isdigit.c](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_isdigit.c)

1. checks whether a character is numeric character (0-9) or not.
2. takes a single argument in the form of an integer and returns the value of type int
3. Non-zero integer ( x > 0 ): Argument is a numeric character.
4. Zero (0): Argument is not a numeric character.
5. [isdigit](https://www.programiz.com/c-programming/library-function/ctype.h/isdigit)

#### 1.3. [ft_isalnum](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_isalnum.c)

1. The isalnum() function checks whether the argument passed is an alphanumeric character (alphabet or number) or not.
2. It is defined in the ```ctype.h``` header file.
3. Returns **1** if argument is an alphanumeric character.
4. Returns **0** if argument is neither an alphabet nor a digit.
5. [isalnum](https://www.programiz.com/c-programming/library-function/ctype.h/isalnum)


#### 1.4. [ft_isascii.c](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_isascii.c)

1. tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character.
2. returns nonzero if c, in the current locale, can be represented as a character in the 7–bit US-ASCII character set.
3. Otherwise, it returns 0.
4. x >=0 && x <= 127
5. [isascii](https://www.ibm.com/docs/en/i/7.3?topic=functions-isascii-test-character-representable-as-ascii-value)


#### 1.5. [ft_isprint](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_isprint.c)

1. The isprint() function checks whether a character is a printable character or not.
2. Those characters that occupies printing space are known as printable characters.
3. If a character passed to isprint() is a printable character, it returns non-zero integer, if not it returns 0.
5. It is defined in <ctype.h> header file.
6. [isprint](https://www.programiz.com/c-programming/library-function/ctype.h/isprint)

#### 1.6. [ft_strlen](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strlen.c)

1. The strlen() function calculates the length of a given string.
2. The strlen() function takes a string as an argument and returns its length. The returned value is of type ```size_t``` (an unsigned integer type).
3. It is defined in the <string.h> header file.
4. **Note** that the strlen() function doesn't count the null character ```\0``` while calculating the length.
5. [strlen](https://www.programiz.com/c-programming/library-function/string.h/strlen)


#### 1.7. [ft_memset](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_memset.c)

memset() is used to fill a block of memory with a particular value.

1. **ptr** ==> Starting address of memory to be filled
2. **x**   ==> Value to be filled
3. **n**   ==> Number of bytes to be filled starting (from ptr to be filled)
4. memset() is used to fill a block of memory with a particular value.
5. **Note** that ptr is a void pointer, so that we can pass any type of pointer to this function.
6. The memset function returns ptr with the set value to x
7. [memset](https://www.geeksforgeeks.org/memset-c-example/)


#### 1.8. [ft_bzero](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_bzero.c)

1. #include <strings.h>
2. void bzero(void *s, size_t n);
3. The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
4. Return none
5. [bzero](https://man7.org/linux/man-pages/man3/bzero.3.html)


#### 1.9. [ft_memcpy](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_memcpy.c)

1. It is declared in string.h
2. memcpy() is used to copy a block of memory from a location to another.
3. **Notes:**
   1. memcpy() doesn’t CHECK for overflow or \0 
   2. memcpy() leads to PROBLEMS when source & destination addresses OVERLAP. 
4. [memcpy](https://www.geeksforgeeks.org/memcpy-in-cc/)


#### 1.10. [ft_memmove](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_memmove.c)

1. It is declared in string.h
2. void * memmove(void *to, const void *from, size_t numBytes);
3. memmove() is used to copy a block of memory from a location to another.
4. How is it different from memcpy()? 
   1. **memcpy()** simply copies data one by one from one location to another. On the other hand **memmove()** copies the data first to an intermediate buffer, then from the buffer to destination.
   2. **memcpy()** leads to problems when strings overlap. 
5. [memmove](https://www.geeksforgeeks.org/memmove-in-cc/)


#### 1.11. [ft_strlcpy](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strlcpy.c)

1. #include <string.h>
2. size_t strlcpy( char *dst, const char *src, size_t size );

3. The **strlcpy()** and **strlcat()** functions copy and concatenate strings respectively
4. They're designed to be safer, more consistent, and less error-prone replacements for strncpy() and strncat().
5. *Unlike those functions*, **strlcpy()** and **strlcat()**
   1. take the full size of the buffer (not just the length) &
   2. Guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there's at least one byte free in dst).
6. The **strlcpy()** function copies up to size − 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
7. Return: total length of src.
8. [strlcat, strlcpy](https://www.qnx.com/developers/docs/7.1/index.html#com.qnx.doc.neutrino.lib_ref/topic/s/strlcat.html)


#### 1.12. [ft_strlcat](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strlcat.c)

1. #include <string.h>
2. size_t strlcat( char *dst, const char *src, size_t size );
3. The **strlcpy()** and **strlcat()** functions copy and concatenate strings respectively
4. They're designed to be safer, more consistent, and less error-prone replacements for strncpy() and strncat().
5. *Unlike those functions*, **strlcpy()** and **strlcat()**
   1. take the full size of the buffer (not just the length) &
   2. Guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there's at least one byte free in dst).
6. The **strlcat()** function appends the NUL-terminated string src to the end of dst. It will append at most size − strlen(dst) − 1 bytes, NUL-terminating the result.
7. Return: (initial length of dst + length of src)
8. [strlcat, strlcpy](https://www.qnx.com/developers/docs/7.1/index.html#com.qnx.doc.neutrino.lib_ref/topic/s/strlcat.html)

#### 1.13. [ft_toupper](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_toupper.c)

1. The ```toupper()``` function converts a lowercase alphabet to an *uppercase* alphabet.
2. int toupper(int ch);
3. ch - a character
4. Return values:
   1. a lowercase character, the function returns its corresponding uppercase character
   2. an uppercase character or a non-alphabetic character, the function the character itself
5. [toupper](https://www.programiz.com/c-programming/library-function/ctype.h/toupper)

#### 1.14. [ft_tolower](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_tolower.c)

1. The ```tolower()``` function takes an uppercase alphabet and convert it to a *lowercase character*.
2. It is defined in ctype.h header file.
3. If the arguments passed to the tolower() function is other than an uppercase alphabet, it returns the same character that is passed to the function.
4. [tolower](https://www.programiz.com/c-programming/library-function/ctype.h/tolower)

#### 1.15. [ft_strchr](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strchr.c)

1. The C library function ```char *strchr(const char *str, int c)``` searches for the first occurrence of the character ```c``` (an unsigned char) in the string pointed to by the argument ```str```.
2. Parameters
   1. ```str``` − This is the C *string* to be scanned.
   2. ```c``` − This is the *character* to be searched in str.
3. Return value: This returns a pointer to the **first occurrence** of the character c in the string str, or **NULL** if the character is not found.
4. [strchr](https://www.tutorialspoint.com/c_standard_library/c_function_strchr.htm)

#### 1.16. [ft_strrchr](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strrchr.c)

1. The ```strrchr()``` function in C/C++ locates the last occurrence of a character in a string.
2. It returns a pointer to the last occurrence in the string. The terminating null character is considered part of the C string.
3. Therefore, it can also be located to retrieve a pointer to the end of a string.
4. It is defined in cstring header file.
5. ```char* strrchr( char* str, int ch )```
6. Parameters
   1. ```str``` : specifies the pointer to the null terminated string to be searched for.
   2. ```ch```: specifies the character to be search for.
7. Return Value:
   1. returns a pointer to the **last location** of ch in string, if the ch is found.
   2. If not found, it returns a **null pointer**.
8. [strrchr](https://www.geeksforgeeks.org/strrchr-function-in-c-c/)


#### 1.17. [ft_strncmp](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strncmp.c)

1. the ```strncmp``` function returns a negative, zero, or positive integer depending on whether the first n characters of the object pointed to by s1 are less than, equal to, or greater than the first n characters of the object pointed to by s2.
2. The ```strncmp``` function will stop comparing if a null character is encountered in either s1 or s2.
3. ```int strncmp(const char *s1, const char *s2, size_t n);```
4. Parameters
   1. ```s1``` : An array to compare.
   2. ```s2``` : An array to compare.
   3. ```n``` : The number of characters to compare.
5. Return values:
   1. 0:	s1 == s2
   2. ````Negative integer````: The stopping character in s1 was < the stopping character in s2
   3. ````Positive integer```:	The stopping character in s1 was > the stopping character in s2
6. [strncmp](https://www.techonthenet.com/c_language/standard_library_functions/string_h/strncmp.php)


#### 1.18. [ft_memchr](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_memchr.c)

1. ```memchr``` function searches within the first n characters of the object pointed to by s for the character c. It returns a pointer to it.
2. ```void *memchr(const void *s, int c, size_t n);```
3. Parameters
   1. ```s``` : A pointer to a string where the search will be performed.
   2. ```c``` : The value to be found.
   3. ```n``` : The number of characters to search within the object pointed to by s.
 4. Return Values
    1. returns a pointer to the **first occurrence** of the character c within the first n characters of the object pointed to by s.
    2. If c isn't found, it returns a **null pointer**.
5. [memchr](https://www.techonthenet.com/c_language/standard_library_functions/string_h/memchr.php)



#### 1.19. [ft_memcmp](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_memcmp.c)
#### 1.20. [ft_strnstr](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strnstr.c)
#### 1.21. [ft_atoi](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_atoi.c)
#### 1.22. [ft_calloc](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_calloc.c)
#### 1.23. [ft_strdup](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strdup.c)


## Additional Parts

#### 1.24. [ft_substr](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_substr.c)

1. char *ft_substr(char const *s, unsigned int start, size_t len);
2. Parameters
   1. s:  The string from which to create the substring.
   2. start:  The start index of the substring in the
   3. string ’s’.
   4. len:  The maximum length of the substring.
3. Return value
   1. The substring.
   2. NULL if the allocation fails.
4. External functs. : malloc
5. Description
   1. Allocates (with malloc(3)) and returns a substring from the string ’s’.
   2. The substring begins at index ’start’ and is of maximum size ’len’.


#### 1.25. [ft_strjoin](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strjoin.c)

1. char *ft_strjoin(char const *s1, char const *s2);
2. Parameters
   1. s1:  The prefix string.
   2. s2:  The suffix string.
3. Return value
   1. The new string.
   2. NULL if the allocation fails.
4. External functs. : malloc
5. Description
   1. Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.


#### 1.26. [ft_strtrim](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strtrim.c)

1. char *ft_strtrim(char const *s1, char const *set);
2. Parameters
   1. s1:  The string to be trimmed.
   2. set:  The reference set of characters to trim.
3. Return value
   1. The trimmed string.
   2. NULL if the allocation fails.
4. External functs. : malloc
5. Description
   1. Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.


#### 1.27. [ft_split](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_split.c)

1. ``char **ft_split(char const *s, char c);``
2. Parameters
   1. s:  The string to be split.
   2. c:  The delimiter character.
3. Return value
   1. The array of new strings resulting from the split. NULL if the allocation fails.
4. External functs. :
   1. malloc
   2. free
5. Description
   1. Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
   2. The array must end with a NULL pointer.


#### 1.28. [ft_itoa](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_itoa.c)

1. char *ft_itoa(int n);
2. Parameters
   1. n:  the integer to convert.
3. Return value
   1. The string representing the integer.
   2. NULL if the allocation fails.
4. External functs. : malloc
5. Description
   1. Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
   2. Negative numbers must be handled.



#### 1.29. [ft_strmapi](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_strmapi.c)


1. char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
2. Parameters
   1. s:  The string on which to iterate.
   2. f:  The function to apply to each character.
3. Return value
   1. The string created from the successive applications of ’f’.
   2. NULL if the allocation fails.
4. External functs. : malloc
5. Description
   1. Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.


#### 1.30. [ft_striteri](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_striteri.c)

1. void ft_striteri(char *s, void (*f)(unsigned int, char*));
2. Parameters
   1. s:  The string on which to iterate.
   2. f:  The function to apply to each character.
3. Return value
   1. The substring.
   2. NULL if the allocation fails.
4. External functs. : malloc
5. Description
   1. Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.  Each character is passed by address to ’f’ to be modified if necessary.


#### 1.31. [ft_putchar_fd](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_putchar_fd.c)

1. void ft_putchar_fd(char c, int fd);
2. Parameters
   1. c:  The character to output.
   2. fd:  The file descriptor on which to write.
3. Return value : None
4. External functs. : write
5. Description
   1. Outputs the character ’c’ to the given file descriptor.

#### 1.32. [ft_putstr_fd](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_putstr_fd.c)

1. void ft_putstr_fd(char *s, int fd);
2. Parameters
   1. s:  The string to output.
   2. fd:  The file descriptor on which to write.
3. Return value : None
4. External functs. : write
5. Description
   1. Outputs the string ’s’ to the given file descriptor.


#### 1.33. [ft_putendl_fd](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_putendl_fd.c)

1. void ft_putendl_fd(char *s, int fd);
2. Parameters
   1. s:  The string to output.
   2. fd:  The file descriptor on which to write.
3. Return value : None
4. External functs. : write
5. Description
   1. Outputs the string ’s’ to the given file descriptor followed by a newline.


#### 1.34. [ft_putnbr_fd](https://github.com/yclim95/42cursus/blob/master/00_Libft/ft_putnbr_fd.c)

1. void ft_putnbr_fd(int n, int fd);
2. Parameters
   1. n:  The integer to output.
   2. fd:  The file descriptor on which to write.
3. Return value : None
4. External functs. : write
5. Description
   1. Outputs the integer ’n’ to the given file descriptor.
