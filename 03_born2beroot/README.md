# Born2BeRoot

1. [VirtualBox download](https://www.virtualbox.org/wiki/Downloads)
2. [Debian OS Download](https://www.debian.org/download)

## Note
1. OS
	1. Since it is a matter of setting up a server, you will install the **minimum of services**. For this reason, a **graphical interface** is of no use here. It is therefore forbidden to install X.org or any other equivalent graphics server. Otherwise, your **grade will be 0**.
	2. You must choose as an operating system either the latest stable version of Debian (no testing/unstable), or the latest stable version of CentOS. ***Debian*** is highly recommended if you are new to system administration.
	3. Setting up ***CentOS*** is quite complex. Therefore, you don’t have to set up **KDump**. However, **SELinux** must be running at startup and its
configuration has to be adapted for the project’s needs. **AppArmor** for ***Debian*** must be running at startup too.
	4. You must create **at least 2** encrypted partitions using ***LVM***
	5. During the defense, you will be asked a few questions about the operating system you chose. For instance, you should know the differences between
		1. ***aptitude*** and ***apt***, or
		2. what ***SELinux*** or ***AppArmor***
is. In short, understand what you use!
	6. A ***SSH*** service will be running on port **4242 only**. For security reasons, it must not be possible to connect using SSH as **root**.
	7. The use of SSH will be **tested during the defense** by setting up a new account. You must therefore understand how it works.
2. Configuration
	1. You have to configure your operating system with the ***UFW*** firewall and thus **leave ONLY port 4242 open**.
	2. Your firewall must be active when you launch your virtual machine. For CentOS, you have to use UFW instead of the default firewall. To install it, you will probably need ***DNF***.
		1. The ***hostname*** of your virtual machine must be your login ending with 42 (e.g., wil42). You will have to modify this hostname during your evaluation.
		2. You have to implement a strong ***password*** policy.
		3. You have to install and configure ***sudo*** following strict rules.
		4. In addition to the ***root*** user, a user with your login as username has to be present.
		5. This user has to belong to the ***user42*** and sudo groups.
	3. During the defense, you will have to create a new user and assign it to a group
	4. To set up a **strong password** policy, you have to comply with the following requirements:
		1. Your password has to **expire** every 30 days.
		2. The **minimum** number of days allowed before the modification of a password will be set to **2**.
		3. The user has to receive a **warning message 7 days** BEFORE their password EXPIRES.
		4. Your password must be **at least 10 characters** long. It must contain
			1. an uppercase letter (A)
			2. a lowercase letter and (a)
			3. a number. (1)
			4. it must not contain more than 3 consecutive identical characters. (aaa)
		5. The password must **NOT include** the **name** of the user.
		6. The following rule does **NOT apply** to the **ROOT password**: The password must have AT LEAST 7 characters that are not part of the former password.
		7. Of course, your root password has to comply with this policy. 
	5. After setting up your configuration files, you will have to **change all the passwords** of the accounts present on the **virtual machine**, including the **root** account.
	6. To set up a strong configuration for your **sudo group**, you have to comply with the following requirements:
		1. Authentication using sudo has to be limited to **3 attempts** in the event of an incorrect password.
		2. A **custom message** of your choice has to be displayed if an error due to a wrong password occurs when using sudo.
		3. Each action using sudo has to be archived, both inputs and outputs. T7he log file has to be saved in the **/var/log/sudo/ folder**.
		4. The ***TTY*** mode has to be enabled for security reasons.
		5. For security reasons too, the paths that can be used by sudo must be **restricted**. Example: ```/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin```
	7. Finally, you have to create a simple **script** called **monitoring.sh**. It must be developed in bash.
		1. At server startup, the script will display some information (listed below) on all terminals **every 10 minutes** (take a look at wall). The banner is optional. No error must be visible.
		2. Your script must always be able to display the following information:
			1. The architecture of your operating system  (OS) and its kernel version.
			2. The number of physical processors.
			3. The number of virtual processors.
			4. The current available RAM on your server and its utilization rate as a percentage.
			5. The current available memory on your server and its utilization rate as a percentage.
			6. The current utilization rate of your processors as a percentage.
			7. The date and time of the last reboot.
			8. Whether LVM is active or not.
			9. The number of active connections.
			10. The number of users using the server.
			11. The IPv4 address of your server and its MAC (Media Access Control) address.
			12. The number of commands executed with the sudo program
	8. During the defense, you will be asked to explain how this script works. You will also have to interrupt it without modifying it. Take a look at ***cron***.
