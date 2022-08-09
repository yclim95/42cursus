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
	9. You only have to turn in a **signature.txt** file at the root of your Git repository. You must paste in it the signature of your machine’s virtual disk. To get this signature, you first have to open the default installation folder (it is the folder where your VMs are
saved):
		1. • Windows: %HOMEDRIVE%%HOMEPATH%\VirtualBox VMs\
		2. • Linux: ~/VirtualBox VMs/
		3. • MacM1: ~/Library/Containers/com.utmapp.UTM/Data/Documents/
		4. • MacOS: ~/VirtualBox VMs/
	10. Then, retrieve the signature from the ".vdi" file (or ".qcow2 for UTM’users) of your virtual machine in **sha1** format. Below are 4 command examples for a **centos_serv.vdi** file:
		1. • Windows: certUtil -hashfile centos_serv.vdi sha1
		2. • Linux: sha1sum centos_serv.vdi
		3. • For Mac M1: shasum Centos.utm/Images/disk-0.qcow2
		4. • MacOS: shasum centos_serv.vdi
	11. This is an example of what kind of output you will get: ```6e657c4619944be17df3c31faa030c25e43e40af```
	12. Please note that your virtual machine’s signature may be altered **after your first evaluation**. To solve this problem, you can
		1. duplicate your virtual machine or
		2. use save state.
	13. It is of course **FORBIDDEN** to turn in your virtual machine in your Git repository. During the defense, the signature of the signature.txt
file will be compared with the one of your virtual machine. If the two of them are not identical, your grade will be 0.



## Introduction

Thanks [@ayoub0x1](https://github.com/ayoub0x1/born2beroot) for this project explanation. The notes below all thanks to @ayoub0x1 (Credit to)


# 42KL 

1. **Virtual Machine** :  is a software capable of installing an Operating System within itself, making the OS think that it is hosted on a real computer.
2. **hypervisor** : software program that creates virtual machines (VM)
    - responsible for isolating the VM resources from the system hardware and making the necessary implementations so that the VM can use these resources.
3. **host machines** or **hosts** :  The devices that provide the hardware resources.
4. **guests** or **guest machines** : The different virtual machines that can be assigned to a host.
5. **Virtualization** allow us share a system with multiple virtual environments.
    - The **hypervisor** manages the hardware system and separate the physical resources from the virtual environments.
    The resources are managed following the needs, from the host to the guests.
6. ***LVM (Logical Volume Manager)*** is an abstraction layer between a storage device and a file system.
    - MAIN advantage is that we have much **more flexibility** when it comes to managing partitions.
    - By using LVM, we can expand the storage of any partition (now known as a logical volume) whenever we want without worrying about the contiguous space available on each logical volume.
    - We can do this with available storage located on different physical disks (which we cannot do with traditional partitions).
    We can also move different logical volumes between physical devices.
    Of course, services and processes will work the same way they always have.
7. ***Physical Volume (PV)***: physical storage device.
    1. It can be a hard disk, an SD card, a floppy disk, etc.
    2. This device provides us with storage available to use.
8. ***Volume Group (VG)***:
    1. to use the space provided by a PV, it must be allocated in a volume group.
    2. It is like a **virtual storage disk** that will be used by logical volumes.
    3. VGs can grow over time by adding new VPs.
8. ***Logical volume (LV)***:
    1. these devices will be the ones we will use to create file systems, swaps, virtual machines, etc.
    2. If the **VG** is the (storage disk), the **LV** are the (partitions) that are made on this disk.
9. ***AppArmor***
    1. AppArmor provides **Mandatory Access Control (MAC) security**.
    2. In fact, AppAmor allows the system administrator to **restrict** the actions that processes can perform. 
    3. If a vulnerability occurs (some of the restricted tasks are performed), AppArmor **blocks** the application so that the damage does not spread to the rest of the system.
    4. In AppArmor, processes are **restricted** by profiles.
    5. Profiles can work in complain-mode and in enforce-mode.
    6. In enforce mode, AppArmor **prohibits** applications from performing restricted tasks.
    7. In complain-mode, AppArmor **allows** applications to do these tasks, but creates a **registry entry** to display the **complaint**.
10. ***Aptitute*** vs. ***Apt***
    1. In Debian-based OS distributions, the default package manager we can use is ***dpkg***.
        - This tool allows us to install, remove and manage programs on our operating system. 
        - However, in most cases, these programs come with a **list of dependencies** that must be installed for the main program to function properly.
11. One option is to manually install these dependencies. However, ***APT*** (Advanced Package Tool), which is a tool that uses dpkg, can be used to install all the necessary dependencies when installing a program.
    - So now we can install a useful program with a **single command**.
    - APT can work with different back-ends and fron-ends to make use of its services.
    - One of them is ***apt-get***, which allows us to install and remove packages.
    - Along with apt-get, there are also many tools like ***apt-cache*** to manage programs.
    - In this case, apt-get and apt-cache are used by apt. 
    - Thanks to apt we can install **.deb** programs easily and without worrying about dependencies.
12. But in case we want to use a graphical interface (GUI), we will have to use ***aptitude***.
    - Aptitude also does **better control** of dependencies, allowing the user to **choose** between different dependencies when installing a program.
13. How to use SSH?
    1. ***SSH*** or Secure Shell is a **remote administration protocol** that allows users to control and modify their servers over the Internet thanks to an authentication mechanism.
    2. Provides a mechanism to **authenticate** a user remotely, transfer data from the client to the host, and return a response to the request made by the client.
    3. SSH was created as an alternative to **Telnet**, which does not encrypt the information that is sent.
    4. SSH uses **encryption** techniques to ensure that all client-to-host and host-to-client communications are done in encrypted form. 
    5. One of the advantages of SSH is that a user using Linux or MacOS can use SSH on their server to communicate with it remotely through their computer's terminal.
    6. Once **authenticated**, that user will be able to use the terminal to work on the server.
    7. The command used to connect to a server with ssh is:
        ```ssh {username}@{IP_host} -p {port}```
    8. There are 3 different techniques that SSH uses to encrypt:
        1. ***Symmetric encryption***: a method that uses the **same secret key** for both encryption and decryption of a message, for both the client and the host.
        2. Anyone who knows the password can access the message that has been transmitted.
        2. ***Asymmetric encryption***:
            1. uses ***2 separate keys*** for encryption and decryption.
            2. These are known as the public key and the private key.
            3. Together, they form the **public-private key pair**.
        3. ***Hashing***:
            1. another form of cryptography used by **SSH**.
            2. Hash functions are made in a way that they **don't need to be decrypted**.
            3. If a client has the correct input, they can create a cryptographic hash and SSH will **check if both hashes are the same**.
14. How to implement UFW with SSH?
    1. ***UFW (Uncomplicated Firewall)*** is a software application responsible for ensuring that the system administrator can manage **iptables** in a simple way. 
    2. Since it is very difficult to work with iptables, UFW provides us with an **interface to modify** the firewall of our device (netfilter) without compromising security.
    3. Once we have UFW installed, we can choose which ports we want to allow connections, and which ports we want to close.
    4. This will also be very **useful with SSH**, greatly improving all security related to communications between devices.
15. What is **cron** and what is **wall**?
    1. Once we know a little more about how to build a server inside a Virtual Machine (remember that you also have to look in other pages apart from this README), we will see 2 commands that will be very helpful in case of being system administrators. These commands are:
        1. ***Cron***:
            1. **Linux task manager** that allows us to execute commands at a certain time.
            2. We can **automate** some tasks just by telling cron what command we want to run at a specific time.
            3. For example, if we want to restart our server every day at 4:00 am, instead of having to wake up at that time, cron will do it for us.
        2. ***Wall***:
            1. command used by the root user to **send a message** to all users currently connected to the server.
            2. If the system administrator wants to alert about a major server change that could cause users to log out, the **root user** could **alert** them with wall.
16. [VDI vs. VHD vs. VMDK](https://www.parallels.com/blogs/ras/vdi-vs-vhd-vs-vmdk/)
    1. VDI (VirtualBox Disk Image) : Oracle VirtualBox
    2. VHD (Virtual Hard Disk) : Microsoft’s virtualization products
    3. VMDK (Virtual Machine Disk) : VMware’s own virtual disk format
