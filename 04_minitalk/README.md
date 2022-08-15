# MiniTalk
The purpose of this project is to code a small data exchange program
using UNIX signals.

## Skills
- Rigor
- Unix

## Things to take note off:

1. Name your executable files client and server.
2. You have to turn in a Makefile which will compile your source files. It must not
relink.
3. You can definitely use your libft.
4. You have to handle errors thoroughly. In no way your program should quit unex- pectedly (segmentation fault, bus error, double free, and so forth).
5. Your program mustn’t have memory leaks.
6. You can have one global variable per program (one for the client and one for the server), but you will have to justify their use.
7. In order to complete the mandatory part, you are allowed to use the following functions:
	1. write
	2. ft_printf and any equivalent YOU coded ◦ signal
	3. sigemptyset
	4. sigaddset
	5. sigaction
	6. kill
	7. getpid
	8. malloc
	9. free
	10. pause
	11. sleep
	12. usleep
	13. exit
