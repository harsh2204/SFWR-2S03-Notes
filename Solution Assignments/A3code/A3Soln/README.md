# Assignment 3 Marking Guide

Hi again! This will be a short guide on the marking scheme on
Assignment 3, and some instructions on how to run the code
that tests your program.

---
### Marking Scheme
The implementation is worth 20 marks. From the 20 marks, each
function is worth:

  - 8 marks for createHBList
  - 8 marks for flattenList
  - 3 marks for freeHBList
  - 1 mark for freeSLList

The same testcases are run for the create and flatten function.
We pass in two parameters, n being the number of HBNodes, and
m being the size upper bound for SLList bottom.
The testcases and marks are listed below:

  - n =   10, m =    0: 1 mark 
  - n =    0, m =   10: 1 mark      
  - n =  100, m =   20: 2 marks
  - n =  500, m =  100: 2 marks
  - n =  100, m =  500: 2 marks

Finally, Valgrind output is checked for two parts, for a total of 4 marks:

  - Memory leaks: 2 marks
  - Errors: 2 marks

If the following cases occur:

  - Compilation error: up to 30% of total marks awarded
  - No/minimal test cases passed: up to 40% of total marks awarded

---
### Running the test script
Make sure you have a version of Python 2 installed, specifically Python 2.7.
Execute the following commands:

1. Copy your list.c into this directory
2. run `python script.py`
