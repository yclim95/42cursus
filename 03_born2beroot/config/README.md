# Configuration

## 1. Installing Sudo

1.1. Enter Paraphraase

```
Enter your paraphrase
```

1.2. login as user

```
Login user:
Password:
```

![Login as user](https://i.imgur.com/rW3Pa3j.png)


1.3.  Gaining Root Access in the Terminal

Enter ```su -```

```
$ su -
Password:
```

![Root access](https://i.imgur.com/SAJh5QH.png)


1.4. Install Sudo

```
$ apt-get update -y
$ apt-get upgrade -y
$ apt install sudo
```

![Install Sudo](https://i.imgur.com/vumlD69.png)


1.5. Verify IF Sudo is installed correctly

```
# dpkg -l | grep sudo
```

![Verify IF Sudo is installed correctly](https://i.imgur.com/TDWjOa7.png)


1.6. Adding <<username>> to Sudo Group
  
```
# adduser <username> sudo
```

![Adding  to Sudo Group](https://i.imgur.com/tQMHeQf.png)


1.7. Check if user is in sudo group

```
$ getent group sudo
```
  
![Check if user is in sudo group](https://i.imgur.com/7evogJK.png)
  

1.8. Perform checkup to ensure the sytem is not BREAK after making changes
  

Why use **Visudo** ?


You use visudo mostly to prevent from breaking your system. Visudo runs checks on your changes to make sure you didn't mess anything up. If you did mess something up, you could completely wreck your ability to fix it or do anything requiring privileges without rebooting into a rescue mode.
  
```
$ sudo visudo
```

Add this line in file:

```
your_username    ALL=(ALL) ALL
```

![Sudo Visudo](https://i.imgur.com/pWyyn5u.png)
  
Press ```Ctrl + o``` to save and ```Ctrl + x``` to exit.
