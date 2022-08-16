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



## 2. Installing tools

2.1. Installing git

```
$ apt-get update -y
$ apt-get upgrade -y
$ apt-get install git -y
```

![Install Git tool Part1](https://i.imgur.com/Tt8B0uk.png)
  

![Install Git tool Part2](https://i.imgur.com/zWQKePy.png)
  

2.1.1. Check git version
  
```
$ git --version
```
  
![Check Git version](https://i.imgur.com/VsHnxrN.png)

  
2.1.2. Installing wget (wget is a free and open source tool for downloading files from web repositories.)

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

  
## 3.  Installing SSH and configuring SSH service

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


## 4. Installing and configuring UFW (Uncomplicated Firewall)

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



## 5. Connecting SSH server
Add forward rule for VirtualBox

1.9.1. Go to VirtualBox-> Choose the VM->Select Settings
1.9.2. Choose “Network”-> “Adapter 1"->”Advanced”->”Port Forwarding”
1.9.3. Enter the values (4242) for Host & Guest Port

![Configure SSH Server](https://i.imgur.com/TDgwvfS.png)
![Configure SSH Server - Set Port Forwarding](https://i.imgur.com/JlHs4nR.png)

  
1.9.4. Restart SSH server (go to the your VM machine)
  
```
$ sudo systemctl restart ssh
```

1.9.5. Check ssh status:
  
```
$ sudo service sshd status
```
  
![Restart SSH server & Check SSH Server Status](https://imgur.com/a/Wpw8Pv8)

  
1.9.6. From host side from iTerm2 or Terminal enter as shown below:
  
```
$ ssh your_username@127.0.0.1 -p 4242
```
  
![Run SSH Server on 4242 Port number localhost](https://i.imgur.com/q7hP7Xx.png)

  
1.9.7. Quit the connection:
  
```
$ exit
```
  
 
## 6. Set password policy
  
“To set up a strong password policy, you have to comply with the following requirements:

1. Your password must be at least 10 characters long. It must contain an uppercase letter and a number. Also, it must not contain more than 3 consecutive identical characters. 6 Born2beRoot
2. Your password has to expire every 30 days.
3. The minimum number of days allowed before the modification of a password will be set to 2.
4. The user has to receive a warning message 7 days before their password expires.
5. The password must not include the name of the user.
6. The following rule does not apply to the root password: The password must have at least 7 characters that are not part of the former password.
7. Of course, your root password has to comply with this policy.”
  
6.1. Installing password quality checking library (libpam-pwquality):
  
```
$ sudo apt-get install libpam-pwquality
```
  
![Installing password quality checking library (libpam-pwquality)](https://i.imgur.com/KicQrKE.png)
![Installing password quality checking library (libpam-pwquality)](https://i.imgur.com/OtnZxIM.png)

  
6.1.1. Change the length

```
$ sudo nano /etc/pam.d/common-password
```

6.1.2. Find the following line:

```
password [success=2 default=ignore] pam_unix.so obscure sha512
```

6.1.3. And add an extra word: minlen=10 at the end.

```
password [success=2 default=ignore] pam_unix.so obscure sha512 minlen=10
```
  
6.1.4. To set at least one upper-case letter in the password, add a word ‘ucredit=-1’ at the end of the following line.

Find this line:

```
password    requisite         pam_pwquality.so retry=3 
```
  
6.1.5. Add these values

1. min lower-case 1 letter        *(lcredit =-1)*
2. min upper-case 1 letter        *(ucredit=-1)*
3. min digit 1                    *(dcredit=-1)*
4. max same letter repetition 3   *(maxrepeat=3)*
5. whether to check if the password contains the user name in some form (enabled if the value is not 0) - *(usercheck=0)*
6. the minimum number of characters that must be different from the old password=7 - *(difok=7)*
7. enforce_for_root: same policy for root users - *(enforce_for_root)*
  
```
password    requisite         pam_pwquality.so retry=3 lcredit =-1 ucredit=-1 dcredit=-1 maxrepeat=3 usercheck=0 difok=7 enforce_for_root
```
  
6.1.6. It will look like this:
  
![Configure /etc/pam.d/common-password](https://i.imgur.com/SoDnpDH.png)
  

6.2. Password expiration:
  
```
$ sudo nano /etc/login.defs
```
  
  
6.2.1. Find this part

```
PASS_MAX_DAYS 9999
PASS_MIN_DAYS 0
PASS_WARN_AGE 7
```

6.2.2. Change it like this:

1. max 30 days
2. min number of days(2) allowed before the modification
3. receive a notification before expiration at least (7 days before)

```
PASS_MAX_DAYS 30
PASS_MIN_DAYS 2
PASS_WARN_AGE 7
```
  
![Configure /etc/login.defs](https://i.imgur.com/OkKetVz.png)


6.2.3. Reboot the change affects:

```
$ sudo reboot
```
  
## 7. Create group

```
$ sudo groupadd user42
$ sudo groupadd evaluating
```

7.1. Check if group created:

```
$ getent group
```
  
![Check if group created](https://i.imgur.com/5HJVvDe.png)
  

7.2.  Create user and assign into group
  
  
7.2.1. Check the all local users:

```
$ cut -d: -f1 /etc/passwd
```
  
![Check the all local users](https://i.imgur.com/0GHNZOJ.png)


7.2.2. Create the user

```
$ sudo adduser new_username
```
  
![Add new user](https://i.imgur.com/AviSgKZ.png)


7.2.3. Assign an user into “evaluating” group (This is for when you defend)

```
$ sudo usermod -aG user42 your_username
$ sudo usermod -aG evaluating your_new_username
```
  
7.2.4. Check if the user is in group

```
$ getent group user42
$ getent group evaluating
```
  
![Check if the user is in group](https://i.imgur.com/k0wUA2u.png)


7.2.5. Check which groups user account belongs:

```
$ groups
```

7.2.6. Check if password rules working in users:

```
$ chage -l your_new_username
```
  
![Check IF the password working rules is working](https://i.imgur.com/BF9kdd7.png)
