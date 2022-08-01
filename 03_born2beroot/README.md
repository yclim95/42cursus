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
