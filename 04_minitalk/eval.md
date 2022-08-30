# Evaluation

## Preliminary tests
If cheating is suspected, the evaluation stops here. Use the "Cheat" flag to report it. Take this decision calmly, wisely, and please, use this button with caution.

Prerequisites
- Defense can only happen if the evaluated student or group is present.
This way everybody learns by sharing knowledge.
- If no work has been submitted (or wrong files, wrong directory, or
wrong filenames), the grade is 0, and the evaluation process ends.
- No empty repository (= nothing in Git repository).
- No Norm error.
- Cheating (= -42).
- No compilation error. Also, the Makefile must not re-link.

If all of these requirements are passed, check Yes and go on.
Otherwise, use the appropriate flag at the end of the scale!


## General instructions
General instructions
- The Makefile compiles both executables -> 1 point
- The server name is 'server' and it prints his PID at launch -> 2 points
- The client name is 'client' and is run as follows:
'./client PID_SERVER STRING_TO_PASS' -> 2 points


## Mandatory part
This project is an introduction to signals. Check the code and ensure the signals are used only for the communication between the server and the client.

Message transmission
It's possible to pass on a message of any size.
Received messages must be displayed by the server, and must be obviously
corrects!
The server should never get stuck or print wrong characters.



Simple setup
- The server can receive multiple strings without needing to be restarted.
-> 1 point
- Only one global variable per program is allowed, or no global. Ask
for explanations.
-> 1 point
- The communication is done only using the signals SIGUSR1 and SIGUSR2.
-> 3 points

Received messages must be displayed by the server, and must be obviously corrects!



## Bonus part
Evaluate the bonus part if, and only if, the mandatory part has been entirely and perfectly done, and the error management handles unexpected or bad usage. In case all the mandatory points were not passed during the defense, bonus points must be ignored.

1. Unicode characters support
  - Unicode characters are supported both by the client and the server.
2. Acknowledgement
  - The server acknowledges every message received by sending back a signal to the client.
