**Assignment 2, Part 1 Guide**
Hello there! This will be your handy guide to how Part 1 was marked, and how
your code can be tested by none other than yourself!

Without further ado:

1. Marking Scheme
 The total marks for Part 1 is 11 marks (it is *NOT* out of 10 marks, as you
 may have seen printed on the assignment question paper). The marks are further
 subdivided into: 7 marks for linsolve.c, 2 marks for gendata.c and 2 marks
 for your makefile.
 Out of 7 marks for linsolve.c, we allocated the following:
   - 1.5 marks for an infinite solution testcase (TC 1)
   - 1.5 marks for a Hilbert matrix (TC 2). There's a Wikipedia page explaining a Hilbert matrix. (TC 2)
   - 1.5 marks for a nxn matrix of size n = 1000 (TC 3)
   - 2.5 marks for a nxn matrix of size n = 8000 (TC 4)

 I labelled each case by testcase number, for example (TC 1) refers to the first testcase.

 For each testcase failed, you get deducted the amount of marks allocated to it.
 If you pass only a testcase worth 1.5 marks, or you don't pass any testcases at all, then I will
 look into your code to determine whether you've put in an effort to code your solution. I
 allocate either 0.5 or 1 mark based on that, so that you do not lose all marks for failing
 the testcases.

 As for the makefile and gendata.c: You get the full points as long as they both work
 when executed. Mostly everyone got full marks.

2. Running the test script

 Assuming you are running a BASH terminal.
 To execute the script that tests your programs, do the following:
   1. Copy your linsolve.c and makefile into this directory
   2. Type `chmod u+x script.sh` in the terminal
   3. Type ./script.sh
   
 You will see the results of the testing printed on the terminal. Note that n = 8000
 may take a few minutes to run, and in some cases don't terminate at all (in which
 you fail this testcase).
