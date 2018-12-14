REQUIRMENTS:
============

+ linux shell
+ qemu

INSTRUCTIONS FOR RUNNING:
=========================

+ run **make**
+ run **make qemu**

ALGORITHM USED:
===============

+ Priority based scheduler is being used.
+ Priority can lie in range [0,100]
+ Process with lower priority is executed first.

FUNCTIONS IMPLEMENTED/CHANGED:
------------------------------

1. set_priority
  1. Takes pid and some priority as input.
2. creator(systemcall)
  1. Takes an integer as input.
  2. Creates child process with default priority 60.
3. changer(systemcall)
  1. Takes pid and some priority as input
  2. If priority is valid it sets priority for process with given pid
4. ps
  1. Shows all processes with their name, pid, state and priority.

**FOR MORE DETAILS REFER TO REPORT**
