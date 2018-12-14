Original Xv6 Scheduler
The original Xv6 Scheduler has round
robin scheduler.
(The test program is given on last page)
On testing the original scheduler with
three instances of the “foo” program, it
was observed that the process which
was started earlier finished earlier and
there is no way to set priority or make a
runnable program running unless a
program exits.

Priority based Xv6 Scheduler
The modified Xv6 Scheduler has priority
based scheduler.
(The test program is given on last page)
On testing the original scheduler with
three instances of the “foo” program, it
was observed that priority of a process
can be changed and we can make a
runnable program running even before
the running program exits.


EXAMPLE:
========

+ Run commands in following order:
  1. creator 5 &
  2. ps
  3. changer 5 100
  4. creator 10 &
  5. ps



+ Result:
	Initially - 
	$ ps 
	name 	 pid 	 state 	 	 priority 
	init 	 1 	 SLEEPING 	 60
	sh 	 2 	 SLEEPING 	 60
	ps 	 3 	 RUNNING 	 60

  1. first process with pid 5 is in running state
  	$ creator 5 &
	$ Parent with pid 5 creating child with pid 6
		Child created with pid 6
	$ps
	name 	 pid 	 state 	 	 priority 
	init 	 1 	 SLEEPING 	 60
	sh 	 2 	 SLEEPING 	 60
	creator 	 6 	 RUNNING 	 60
	creator 	 5 	 SLEEPING 	 60
	ps 	 7 	 RUNNING 	 60

  2. now its priority is changed to 100
  	$ set_priority 5 100
	pid=5, pr=100

	$ ps
	name 	 pid 	 state 	 	 priority 
	init 	 1 	 SLEEPING 	 60
	sh 	 2 	 SLEEPING 	 60
	creator 	 6 	 RUNNING 	 60
	creator 	 5 	 SLEEPING 	 100
	ps 	 9 	 RUNNING 	 60

  3. now process with pid 10 is in running state
  	$ creator 10 &
	$PChild created with pid 12
	 arent with pid 11 creating child with pid 12
	ps
	name 	 pid 	 state 	 	 priority 
	init 	 1 	 SLEEPING 	 60
	sh 	 2 	 SLEEPING 	 60
	creator 	 6 	 RUNNABLE 	 60
	creator 	 5 	 SLEEPING 	 100
	ps 	 13 	 RUNNING 	 60
	creator 	 11 	 SLEEPING 	 60
	creator 	 12 	 RUNNING 	 60

  4. Due to higher priority value process with pid 5 goes to runnable state

  	$ Child created with pid 14
	Parent with pid 10 creating child with pid 14
	Parent with pid 4 creating child with pid 15
	Child created with pid 15
	Parent with pid 4 creating child with pid 16
	Child created with pid 16
	Parent with pid 4 creating child with pid 17
	Child created with pid 17
	Parent with pid 4 creating child with pid 18
	Child created with pid 18
	Parent with pid 10 creating child with pid 19
	Child created with pid 19
	zombie!
	Child created with pid 20
	Parent with pid 10 creating child with pid 20
	Parent with pid 10 creating child with pid 21
	Child created with pid 21
	Parent with pid 10 creating chilChild created with pid 22
	d with pid 22
	Parent with pid 10 creating child with pid 23
	Child created with pid 23
	Parent wChild created with pid 24
	ith pid 10 creating child with pid 24
	Parent wiChild created with pid 25
	th pid 10 creating child with pid 25
	Parent with pid 10 creatChild created with pid 26
	ing child with pid 26
	zombie!


COMPARISION:ROUND-ROBIN vs PRIORITY_SCHEDULING:
===============================================

+ It is observed the average waiting time
for Round Robin Algorithm is considerably larger than
for Priority Algorithm. This means that if we use Round
Robin, the processes will need more time to finish
executing compared with Priority. For the examples I
have chosen, can be noticed that the average time for
the first algorithm is nearly twice the time of the other
algorithm. It seems like not a big deal, but in fact it is
since there are only four processes. Imagine what
would happen if there were much more.

+ [REFERENCE](http://www.ijcsi.org/papers/IJCSI-11-3-1-175-181.pdf)
**FOR MORE DETAILS REFER TO README**
