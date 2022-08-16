# Evaluation

Need to:

1. Modify **Hostname**
2. Turn in **signature.txt** file
3. Explain how the **script** work (bash script for - monitoring.ssh)
4. Difference between OS ( **Debian** vs. **CentOS** )
5. **Aptitude** vs. **Apt**
6. **SELinux** vs. **AppArmor**
7. The use of **SSH will be tested** during the defense by **setting up a new account**.
8. During the defense, you will have to create a **new user and assign it** to a group.


## Evaluation Criteria


## 1. Preliminary tests
- Defense can only happen if the student being evaluated or group is present.
This way everybody learns by sharing knowledge with each other.
- If no work has been submitted (or wrong files, wrong directory, or
wrong filenames), the grade is 0, and the evaluation process ends.
- For this project, you have to clone their Git repository on their
station.


## 2. Mandatory part
The project consists of creating and configuring a virtual machine following strict rules. The student being evaluated will have to help you during the defense. Make sure that all of the following points are observed.


### 2.1. Project overview
- The student being evaluated should explain to you simply:
- How a virtual machine works.
- Their choice of operating system.
- The basic differences between CentOS and Debian.
- The purpose of virtual machines.
- If the evaluated student chose CentOS: what SELinux and DNF are.
- If the evaluated student chose Debian: the difference between
aptitude and apt, and what APPArmor is.
During the defense, a script must display information all
every 10 minutes. Its operation will be checked in detail later.
If the explanations are not clear, the evaluation stops here.



### 2.2. Simple setup
Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.
- Ensure that the machine does not have a graphical environment at launch.
A password will be requested before attempting to connect to this machine.
Finally, connect with a user with the help of the student being evaluated.
This user must not be root.
Pay attention to the password chosen, it must follow the rules imposed in the subject.
- Check that the UFW service is started with the help of the evaluator.
- Check that the SSH service is started with the help of the evaluator.
- Check that the chosen operating system is Debian or CentOS with the help of the evaluator.
If something does not work as expected or is not clearly explained,
the evaluation stops here.


### 2.3. User

Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.

The subject requests that a user with the login of the student being evaluated is present
on the virtual machine. Check that it has been added and that it belongs to the
"sudo" and "user42" groups.

Make sure the rules imposed in the subject concerning the password policy have been put in place by
following the following steps.

First, create a new user. Assign it a password of your choice, respecting the subject rules. The
student being evaluated must now explain to you how they were able to set up the rules requested
in the subject on their virtual machine.
Normally there should be one or two modified files. If there is any problem, the evaluation stops here.

- Now that you have a new user, ask the student being evaluated to create a group named "evaluating" in
front of you and assign it to this user. Finally, check that this user belongs to the "evaluating" group.

- Finally, ask the student being evaluated to explain the advantages of this password policy, as well as the
advantages and disadvantages of its implementation. Of course, answering that it is because the subject asks
for it does not count.

If something does not work as expected or is not clearly explained, the evaluation stops here.



### 2.4. Hostname and partitions
Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.

- Check that the hostname of the machine is correctly formatted as follows:
login42 (login of the student being evaluated).
- Modify this hostname by replacing the login with yours, then restart the machine.
If on restart, the hostname has not been updated, the evaluation stops here.
- You can now restore the machine to the original hostname.
- Ask the student being evaluated how to view the partitions for this virtual machine.
- Compare the output with the example given in the subject. Please note: if the
student evaluated makes the bonuses, it will be necessary to refer to the bonus example.

This part is an opportunity to discuss the scores! The student being evaluated should
give you a brief explanation of how LVM works and what it is all about.
If something does not work as expected or is not clearly explained,
the evaluation stops here.



### 2.5. SUDO
Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.

- Check that the "sudo" program is properly installed on the virtual machine.
- The student being evaluated should now show assigning your new user to the "sudo" group.
- The subject imposes strict rules for sudo. The student being evaluated must first explain the
value and operation of sudo using examples of their choice.
In a second step, it must show you the implementation of the rules imposed by the subject.
- Verify that the "/var/log/sudo/" folder exists and has at least one file. Check the contents
of the files in this folder, You should see a history of the commands used with sudo.
Finally, try to run a command via sudo. See if the file (s) in the "/var/log/sudo/" folder
have been updated.
If something does not work as expected or is not clearly explained, the evaluation stops here.



### 2.6. UFW
Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.

- Check that the "UFW" program is properly installed on the virtual machine.
- Check that it is working properly.
- The student being evaluated should explain to you basically what UFW is and the
value of using it.
- List the active rules in UFW. A rule must exist for port 4242.
- Add a new rule to open port 8080. Check that this one has been added by listing the active rules.
- Finally, delete this new rule with the help of the student being evaluated.
If something does not work as expected or is not clearly explained, the evaluation stops here.


### 2.7. SSH
Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.

- Check that the SSH service is properly installed on the virtual machine.
- Check that it is working properly.
- The student being evaluated must be able to explain to you basically what SSH is and
the value of using it.
- Verify that the SSH service only uses port 4242.
- The student being evaluated should help you use SSH in order to log in with the newly created user.
To do this, you can use a key or a simple password. It will depend on the student being evaluated.
Of course, you have to make sure that you cannot use SSH with the "root" user as stated in the subject.
If something does not work as expected or is not clearly explained, the evaluation stops here.



### 2.8. Script monitoring
Remember: Whenever you need help checking something, the student being evaluated
should be able to help you.

The student being evaluated should explain to you simply:
- How their script works by showing you the code.
- What "cron" is.
- How the student being evaluated set up their script so that it runs every 10 minutes
from when the server starts.
Once the correct functioning of the script has been verified, the student being evaluated
should ensure that this script runs every minute. You can run whatever you want
to make sure the script runs with dynamic values correctly. Finally, the student being evaluated
should make the script stop running when the server has started up, but without
modifying the script itself. To check this point, you will have to restart
the server one last time. At startup, it will be necessary to check that the script
still exists in the same place, that its rights have remained unchanged, and that it
has not been modified.
If something does not work as expected or is not clearly explained, the evaluation stops here.
