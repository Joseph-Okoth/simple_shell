# 0x16. C - Simple Shell
## Team Project to create a simple shell using C language
**Background Context**

Write a simple UNIX command interpreter.

## List of allowed functions and system calls

	* access (man 2 access)
	* chdir (man 2 chdir)
	* close (man 2 close)
	* closedir (man 3 closedir)
	* execve (man 2 execve)
	* exit (man 3 exit)
	* _exit (man 2 _exit)
	* fflush (man 3 fflush)
	* fork (man 2 fork)
	* free (man 3 free)
	* getcwd (man 3 getcwd)
	* getline (man 3 getline)
	* getpid (man 2 getpid)
	* isatty (man 3 isatty)
	* kill (man 2 kill)
	* malloc (man 3 malloc)
	* open (man 2 open)
	* opendir (man 3 opendir)
	* perror (man 3 perror)
	* read (man 2 read)
	* readdir (man 3 readdir)
	* signal (man 2 signal)
	* stat (__xstat) (man 2 stat)
	* lstat (__lxstat) (man 2 lstat)
	* fstat (__fxstat) (man 2 fstat)
	* strtok (man 3 strtok)
	* wait (man 2 wait)
	* waitpid (man 2 waitpid)
	* wait3 (man 2 wait3)
	* wait4 (man 2 wait4)
	* write (man 2 write)

## Technologies & Tools:

![Ubuntu](https://img.shields.io/badge/≡-Ubuntu-E95420?&style=flat-square&logo=Ubuntu&labelColor=282828)
![Git](https://img.shields.io/badge/≡-Git-F05032?logo=git&style=flat-square&labelColor=282828)
![GNU_Bash](https://img.shields.io/badge/≡-GNU_Bash-4EAA25?logo=GNU-Bash&style=flat-square&labelColor=282828)
![Vim](https://img.shields.io/badge/≡-Vim-019733?logo=Vim&style=flat-square&logoColor=019733&labelColor=282828)
![Vagrant](https://img.shields.io/badge/≡-Vagrant-1563FF?logo=Vagrant&style=flat-square&logoColor=1563FF&labelColor=282828)
![C](https://img.shields.io/badge/≡-C-A8B9CC?logo=C&style=flat-square&labelColor=282828)
![GNU_Emacs](https://img.shields.io/badge/≡-GNU_Emacs-7F5AB6?logo=GNU-Emacs&style=flat-square&labelColor=282828)
![GitHub](https://img.shields.io/badge/≡-GitHub-181717?logo=GitHub&style=flat-square&labelColor=282828)

---

## Requirements:
Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.

---

## Getting it started
### Clone repo using HTTPS
```
$ git clone https://github.com/mikemuturi/simple_shell.git
```

### Compilation
You can compile the files using this command to check that there are no errors:
```
$ gcc -Wall -pedantic -Werror Wextra *.c -o hsh
```

### Running
Enter the interactive mode after compilation:
```bash
$ ./hsh
 simple@shell $ /bin/ls
 simple@shell $
 simple@shell $ exit
$
```

## Authors
* **Michael Muturi** - [mikemuturi](https://github.com/mikemuturi)
* **Joseph Onyach** - [jonyach] (https://github.com/jonyach)
[<img src="https://img.shields.io/badge/Twitter-1DA1F2.svg?&style=plastic&logo=twitter&logoColor=white"/>](https://twitter.com/joseph_onyach)
[<img src="https://img.shields.io/badge/Linkedin-0A66C2.svg?&style=plastic&logo=linkedin&logoColor=white"/>](https://www.linkedin.com/in/joseph-onyach-46bbb9223/)
[<img src="https://img.shields.io/badge/GitHub-181717.svg?&style=plastic&logo=github&logoColor=white"/>](https://github.com/jonyach)
