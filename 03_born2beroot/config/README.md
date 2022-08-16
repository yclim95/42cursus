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


1.5.1. Verify IF Sudo is installed correctly

```
# dpkg -l | grep sudo
```

![Verify IF Sudo is installed correctly](https://i.imgur.com/TDWjOa7.png)


1.5.2. Adding <<username>> to Sudo Group
  
```
# adduser <username> sudo
```

![Adding  to Sudo Group](https://i.imgur.com/tQMHeQf.png)


1.5.3. Check if user is in sudo group

```
$ getent group sudo
```
  
![Check if user is in sudo group](https://i.imgur.com/7evogJK.png)
  

1.5.4. Perform checkup to ensure the sytem is not BREAK after making changes
  

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

  
1.5.5. ```reboot``` for changes to take effect & log in and verify sudopowers via ```sudo -v```

```
# reboot
---
# sudo -v
```
  
![Reboot + Sudo-v](https://i.imgur.com/WJEyi11.png)



1.6. Installing tools

1.6.1. Installing git

```
$ apt-get update -y
$ apt-get upgrade -y
$ apt-get install git -y
```

![Install Git tool Part1](https://i.imgur.com/Tt8B0uk.png)
  

![Install Git tool Part2](https://i.imgur.com/zWQKePy.png)
  
  
1.6.2. Check git version
  
```
$ git --version
```
  
![Check Git version](https://i.imgur.com/VsHnxrN.png)

  
1.6.3. Installing wget (wget is a free and open source tool for downloading files from web repositories.)

```
$ sudo apt-get install wget
```
  
![Install Wget](https://i.imgur.com/NZjxFem.png)
  
1.6.4. Installing Vim
  
```
$ sudo apt-get install vim  
```
  
![Install Vim Part1](https://i.imgur.com/lAn5SbY.png)
  
![Install Vim Part2]([https://i.imgur.com/lAn5SbY.png](https://i.imgur.com/qFjOG7u.png))


1.6.4.  Installing [Oh my zsh](https://ohmyz.sh/)
  
```
$ sudo apt-get install zsh
$ zsh --version
$ sh -c "$(wget https://raw.github.com/robbyrussell/oh-my-zsh/master/tools/install.sh -O -)"
```

  
![Install zsh](https://i.imgur.com/lcdgtzR.png)
  
![Check zsh version](https://i.imgur.com/WcbP42d.png)
  
![Install Oh my ZSH Part1](https://i.imgur.com/Q1cfozt.png)
![Install Oh my ZSH Part2](https://i.imgur.com/wj951Tv.png)
![Install Oh my ZSH Part3](https://i.imgur.com/DIH8YKh.png)

  
1.7. Installing SSH and configuring SSH service

```
$ sudo apt-get update
$ sudo apt install openssh-server
```
  
![Install SSH Part 1](https://i.imgur.com/qtvHIvP.png)
![Install SSH Part 2](https://i.imgur.com/k0j9mwc.png)
![Install SSH Part 3](https://i.imgur.com/NyFzGOQ.png)


1.7.1. Check the SSH server status
  
```
$ sudo systemctl status ssh
```
  
![check SSH server status](https://i.imgur.com/O8rntF3.png)

  
1.7.2. Restart the SSH service
  
```
$ service ssh restart
```
  
1.7.3. Changing default port (22) to 4242
  
```
$ sudo nano /etc/ssh/sshd_config
```
  
![Nano SSH config](https://i.imgur.com/nZsAa2s.png)
  
Edit the file change the line #Port22 to Port 4242
  
  
Find third line:
  
```
#Port 22
```
  
Change it like this:
  
```
Port 4242
```
  
![Nano SSH config -> Change to Port 4242](https://i.imgur.com/tg7OJ1K.png)
  
  
1.7.4. Check if port settings got right
  
```
$ sudo grep Port /etc/ssh/sshd_config
```
  
![Check SSH Config Port settings](https://i.imgur.com/a03pq59.png)


1.7.5. Restart the SSH service

```
$ sudo service ssh restart
```


1.8. Installing and configuring UFW (Uncomplicated Firewall)

1.8.1. Install UFW

```
$ apt-get install ufw
```
  
![Install UFW Part1](https://i.imgur.com/sk5ceai.png)
![Install UFW Part1](https://i.imgur.com/8nH7Efk.png)


1.8.2. Enable

```
$ sudo ufw enable
```
  
![Enable UFW](https://i.imgur.com/dwms3i5.png)

1.8.3. Check the Status

```
$ sudo ufw status numbered
```
  
![Check the status of UFW](https://i.imgur.com/NYhbqvl.png)


1.8.4. Configure the rules

```
$ sudo ufw allow ssh
```
  
![UFW - Allow SSH](https://i.imgur.com/aYTKeN1.png)


1.8.5. Configure the port rules

```
$ sudo ufw allow 4242
```
  
![UFW - Allow Port 4242](https://i.imgur.com/eTy4m20.png)



1.9. Connecting SSH server
Add forward rule for VirtualBox

1. Go to VirtualBox-> Choose the VM->Select Settings
2. Choose “Network”-> “Adapter 1"->”Advanced”->”Port Forwarding”
3. Enter the values (4242) for Host & Guest Port

![Configure SSH Server](https://i.imgur.com/TDgwvfS.png)
![Configure SSH Server - Set Port Forwarding](https://i.imgur.com/JlHs4nR.png)
