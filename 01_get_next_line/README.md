# 01: get_next_line.c

## main.c

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:41:01 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/18 08:14:41 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	char	*line;
	int		fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";

	while(line != NULL)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
	}

	fd = close(fd);
	return (0);
}
```

### [What is gcc -D?](https://www.rapidtables.com/code/linux/gcc/gcc-d.html)

**gcc -D** option flag:defines a macro to be used by the preprocessor. 


###  [Static Variables in C](https://www.geeksforgeeks.org/static-variables-in-c/)

1. Static variables have a property of **preserving their value** even after they are out of their scope!
2. Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope.  


## Compilation

```
gcc -Werror -Wextra -Wall -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```

## something to test

1. Own created files
2. ```./a.out /dev/random```
3. ```./a.out /dev/tty```


## Testing Resources
1. [Get Next Line Tester](https://github.com/Tripouille/gnlTester)

## Testing 

```
lyao-che@u90z04s01 gnlTester % make m
Already up to date.
[Mandatory]
[BUFFER_SIZE = 1]:
Invalid fd: 1.OK 2.OK 3.OK
files/empty: 1.OK 2.OK
files/nl: 1.OK 2.OK
files/41_no_nl: 1.OK 2.OK
files/41_with_nl: 1.OK 2.OK 3.OK
files/42_no_nl: 1.OK 2.OK
files/42_with_nl: 1.OK 2.OK 3.OK
files/43_no_nl: 1.OK 2.OK
files/43_with_nl: 1.OK 2.OK 3.OK
files/multiple_nlx5: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK
files/multiple_line_no_nl: 1.OK 2.OK 3.OK 4.KO 5.OK 6.OK
files/multiple_line_with_nl: 1.OK 2.OK 3.OK gnlTest(7717,0x11c5b1dc0) malloc: Incorrect checksum for freed object 0x7fbfefd040a8: probably modified after being freed.
Corrupt value: 0x0
gnlTest(7717,0x11c5b1dc0) malloc: *** set a breakpoint in malloc_error_break to debug

files/alternate_line_nl_no_nl: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK
files/alternate_line_nl_with_nl: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.KO 8.OK 9.OK 10.OK
files/big_line_no_nl: 1.OK 2.OK
files/big_line_with_nl: 1.OK 2.OK
stdin: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK
[BUFFER_SIZE = 42]:
Invalid fd: 1.OK 2.OK 3.OK
files/empty: 1.OK 2.OK
files/nl: 1.OK 2.OK
files/41_no_nl: 1.OK 2.OK
files/41_with_nl: 1.OK 2.SIGSEGV

files/42_no_nl: 1.OK 2.OK
files/42_with_nl: 1.OK 2.OK 3.OK
files/43_no_nl: 1.OK 2.OK
files/43_with_nl: 1.OK 2.SIGSEGV

files/multiple_nlx5: 1.OK 2.SIGSEGV

files/multiple_line_no_nl: 1.OK 2.OK 3.KO 4.KO 5.KO 6.OK
files/multiple_line_with_nl: 1.OK 2.KO 3.OK 4.OK 5.OK 6.OK
files/alternate_line_nl_no_nl: 1.OK 2.OK 3.OK 4.KO 5.KO 6.KO 7.KO 8.KO 9.SIGSEGV

files/alternate_line_nl_with_nl: 1.OK 2.OK 3.OK 4.KO 5.KO 6.KO 7.KO 8.KO 9.SIGSEGV

files/big_line_no_nl: 1.OK 2.OK
files/big_line_with_nl: 1.OK 2.OK
stdin: 1.OK 2.OK 3.OK 4.KO 5.KO 6.KO 7.KO 8.KO 9.SIGSEGV

[BUFFER_SIZE = 10000000]:
Invalid fd: 1.OK 2.OK 3.OK
files/empty: 1.OK 2.OK
files/nl: 1.OK 2.OK
files/41_no_nl: 1.OK 2.OK
files/41_with_nl: 1.OK 2.SIGSEGV

files/42_no_nl: 1.OK 2.OK
files/42_with_nl: 1.OK 2.SIGSEGV

files/43_no_nl: 1.OK 2.OK
files/43_with_nl: 1.OK 2.SIGSEGV

files/multiple_nlx5: 1.OK 2.SIGSEGV

files/multiple_line_no_nl: 1.OK 2.SIGSEGV

files/multiple_line_with_nl: 1.OK 2.SIGSEGV

files/alternate_line_nl_no_nl: 1.OK 2.SIGSEGV

files/alternate_line_nl_with_nl: 1.OK 2.SIGSEGV

files/big_line_no_nl: 1.OK 2.OK
files/big_line_with_nl: 1.OK 2.OK
stdin: 1.OK 2.SIGSEGV
```


## what is SIGSEGV?

A SIGSEGV is an error(signal) caused by an invalid memory reference or a segmentation fault. You are probably trying to access an array element out of bounds or trying to use too much memory.
