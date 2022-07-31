# Born2BeRoot

1. [VirtualBox download](https://www.virtualbox.org/wiki/Downloads)
2. [Debian OS Download](https://www.debian.org/download)

## Note
1. OS
	1. Since it is a matter of setting up a server, you will install the
minimum of services. For this reason, a graphical interface is of no
use here. It is therefore forbidden to install X.org or any other
equivalent graphics server. Otherwise, your grade will be 0.
	2. You must choose as an operating system either the latest stable version of Debian (no testing/unstable), or the latest stable version of CentOS. Debian is highly recommended
if you are new to system administration.
	3. Setting up CentOS is quite complex. Therefore, you don’t have to
set up KDump. However, SELinux must be running at startup and its
configuration has to be adapted for the project’s needs. AppArmor
for Debian must be running at startup too.
	4. You must create at least 2 encrypted partitions using LVM
	5. During the defense, you will be asked a few questions about the
operating system you chose. For instance, you should know the
differences between aptitude and apt, or what SELinux or AppArmor
is. In short, understand what you use!
	6. A SSH service will be running on port 4242 only. For security reasons, itmust not be possible to connect using SSH as root.
	7. The use of SSH will be tested during the defense by setting up a new account. You must therefore understand how it works.
