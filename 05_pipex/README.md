# Pipex


## Command arguments
1. **```argv```** stands for argument vector
2. **```argc```** for argument count, and
3. **```envp```** for environment pointer.

## Some functions used
1. **```void perror(const char *str)```** prints a descriptive error message to stderr. 


## Resources
1. [What is perror in C?](https://www.educative.io/answers/what-is-perror-in-c)
2. [execve](https://man7.org/linux/man-pages/man2/execve.2.html)



## What need to be done?

1. **Program name** : pipex
2. **Turn in files** :  Makefile, *.h, *.c
3. **Makefile** : NAME, all, clean, fclean, re
4. **Arguments** : file1 cmd1 cmd2 file2
5. External functs.
   1. open, close, read, write,
   2. malloc, free, perror,
   3. strerror, access, dup, dup2,
   4. execve, exit, fork, pipe,
   5. unlink, wait, waitpid
   6. ft_printf and any equivalent YOU coded
6. **Libft authorized** :  Yes
7. **Description** :  This project is about handling pipes.
8. Your program will be executed as follows:
  ```./pipex file1 cmd1 cmd2 file2```
9. It must take 4 arguments:
   1. ```file1``` and ```file2``` are file names.
   2. ```cmd1``` and ```cmd2``` are shell commands with their parameters.
10. Examples
    1. ```$> ./pipex infile "ls -l" "wc -l" outfile```
       - Should behave like: < infile ls -l | wc -l > outfile
    2. ```$> ./pipex infile "grep a1" "wc -w" outfile```
       - Should behave like: < infile grep a1 | wc -w > outfile
11. **REQUIREMENTS**: Your project must comply with the following rules:
    1. You have to turn in a Makefile which will compile your source files. It must not
relink.
    2. You have to handle errors thoroughly. In no way your program should quit unexpectedly (segmentation fault, bus error, double free, and so forth).
    3. Your program mustn’t have memory leaks.
    4. If you have any doubt, handle the errors like the shell command:
      ```< file1 cmd1 | cmd2 > file2```
