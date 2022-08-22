# Configuration

## Resources
1. [Linux Change or Rename User Name and UID](https://www.cyberciti.biz/faq/howto-change-rename-user-name-id/)
2. [Why do I not see my /bin, /var, (etc.) directories in my root partition?](https://askubuntu.com/questions/574609/why-do-i-not-see-my-bin-var-etc-directories-in-my-root-partition)
3. [How to Install VirtualBox Guest Additions on Debian 11](https://linuxways.net/debian/how-to-install-virtualbox-guest-additions-on-debian-11/)


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


7.2.3. Assign an user into “sudo” group (This is for when you defend)

```
$ sudo usermod -aG user42 your_username
$ sudo usermod -aG sudo your_new_username
```

![Add group to user](https://i.imgur.com/PU9Ss1T.png)

  
7.2.4. Check if the user is in group

```
$ getent group user42
$ getent group sudo
```
  

7.2.5. Check which groups user account belongs:

```
$ groups
```

7.2.6. Check if password rules working in users:

```
$ chage -l your_new_username
```
  
![Check IF the password working rules is working & Check IF group exist](https://i.imgur.com/KY71H0E.png)

  
## Command to change username if needed

![Command to change user name](https://i.imgur.com/qPdGyNk.png)
  
![Command to change user name](https://i.imgur.com/74YOCK1.png)


  
## 8. Configuring sudoers group


8.1. Go to file:

```
$ sudo nano /etc/sudoers
```

8.2. Add following for authentication using sudo has to be limited to 3 attempts in the event of an incorrect password:

```
Defaults     secure_path="..."
Defaults     passwd_tries=3
```

8.3. For wrong password warning message, add:

```
Defaults     badpass_message="Password is wrong, please try again!"
```

8.4. Each action log file has to be saved in the /var/log/sudo/ folder:

(If there is no “/var/log/sudo” folder, create the sudo folder inside of “/var/log”)

```
Defaults	logfile="/var/log/sudo/sudo.log"
Defaults	log_input,log_output
```

Require tty: (Why use tty? If some non-root code is exploited (a PHP script, for example), the ```requiretty``` option means that the exploit code won't be able to directly upgrade its privileges by running ```sudo```.)

```
Defaults        requiretty
```

For security reasons too, the paths that can be used by sudo must be restricted. Example : /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin

(It was already set there)

```
Defaults   secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

Now my /etc/sudoers file looks like this

![Configuring sudoers group](https://i.imgur.com/d2hzF2x.png)

![Configuring sudoers group](https://i.imgur.com/aOdnYTV.png)

  
## 9.  Crontab configuration
  
> “A crontab file contains instructions for the cron(8) daemon in the following simplified manner: “run this command at this time on this date”
  
9.1. Install the netstat tools

```
$ sudo apt-get update -y
$ sudo apt-get install -y net-tools
```
  
  
9.2. Place monitoring.sh in /usr/local/bin/
  
```bash
#!/bin/bash
wall $'#Architecture: ' `hostnamectl | grep "Operating System" | cut -d ' ' -f5- ` `awk -F':' '/^model name/ {print $2}' /proc/cpuinfo | uniq | sed -e 's/^[ \t]*//'` `arch` \
$'\n#CPU physical: '`cat /proc/cpuinfo | grep processor | wc -l` \
$'\n#vCPU:  '`cat /proc/cpuinfo | grep processor | wc -l` \
$'\n'`free -m | awk 'NR==2{printf "#Memory Usage: %s/%sMB (%.2f%%)", $3,$2,$3*100/$2 }'` \
$'\n'`df -h | awk '$NF=="/"{printf "#Disk Usage: %d/%dGB (%s)", $3,$2,$5}'` \
$'\n'`top -bn1 | grep load | awk '{printf "#CPU Load: %.2f\n", $(NF-2)}'` \
$'\n#Last boot: ' `who -b | awk '{print $3" "$4" "$5}'` \
$'\n#LVM use: ' `lsblk |grep lvm | awk '{if ($1) {print "yes";exit;} else {print "no"} }'` \
$'\n#Connection TCP:' `netstat -an | grep ESTABLISHED |  wc -l` \
$'\n#User log: ' `who | cut -d " " -f 1 | sort -u | wc -l` \
$'\nNetwork: IP ' `hostname -I`"("`ip a | grep link/ether | awk '{print $2}'`")" \
$'\n#Sudo:  ' `grep 'sudo ' /var/log/auth.log | wc -l`
```
  
9.3. Add the rule that script would execute without sudo password:
  
Open sudoers file:
  
```
$ sudo visudo
```

9.4. Add this line:

```
your_username ALL=(ALL) NOPASSWD: /usr/local/bin/monitoring.sh
```
  
![Sudo visudo]()
  
  
  
9.4. Reboot

```
$ sudo reboot
```

9.5. Execute the script as su:

```
$ sudo /usr/local/bin/monitoring.sh
```

9.6. Open crontab and add the rule:

```
$ sudo crontab -u root -e
```

9.7. Add at end as follows: (*/10 means every 10 mins the script will show)

```
*/10 * * * * /usr/local/bin/monitoring.sh
```

9.8. Tips

If you have this error when you reboot your VM, change the Display settings in your VirtualBox settings. [See the solution here](https://unix.stackexchange.com/questions/502540/why-does-drmvmw-host-log-vmwgfx-error-failed-to-send-host-log-message-sh).

```
$ drm:vmw_host_log *ERROR* Failed to send host log message.
```

  
  
## How to Install VirtualBox Guest Additions on Debian 11 (Copy & Paste)
  
1. Update packages
  
```
$ sudo apt update
```
  
2. install the DKMS (Dynamic kernel Module Support) program dependencies used for generating kernel modules, the kernel headers, and build tools.
  
```
$ sudo apt install dkms linux-headers-$(uname -r) build-essential
```
  
3. Install VirtualBox Guest Additions

Top menu: Settings -> Devices -> Insert Guest Additions CD Image
  
4. mount it in /mnt directory as shown.
  
```
$ sudo mount /dev/cdrom /mnt
```

You can confirm the contents as follows using the ls command.

```
$ ls -l /mnt
```
  
![VirtualBox Guest Addition: Copy & Paste](https://i.imgur.com/5E61486.png)
  
5. navigate to the /mnt directory to execute VBoxLinuxAdditions.run script
  
```
$ cd /mnt
$ sudo ./VBoxLinuxAdditions.run 
```
  
![$ sudo ./VBoxLinuxAdditions.run](https://i.imgur.com/MYRbkka.png)
  

6. restart your Debian 11 instance to finish running the Guest Additions kernel modules
  
```
$ sudo reboot 
```
