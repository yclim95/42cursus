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
/*   Created: 2022/06/22 11:10:26 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/22 11:11:10 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	char	*temp;
	int	fd;

	fd = open("test.txt", O_RDONLY);

	while(1)
	{
		temp = get_next_line(fd);
		if (!temp)
		break ;
		printf("%s", temp);
		free(temp);
	}
	return (0);
}
```

### [What is gcc -D?](https://www.rapidtables.com/code/linux/gcc/gcc-d.html)

**gcc -D** option flag:defines a macro to be used by the preprocessor. 


###  [Static Variables in C](https://www.geeksforgeeks.org/static-variables-in-c/)

1. Static variables have a property of **preserving their value** even after they are out of their scope!
2. Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope.  
