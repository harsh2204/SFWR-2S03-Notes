import os
import sys
import subprocess as sub

# test cases 
test_cases = [ (10, 0), (0, 10), (100, 20), (500, 100), (100, 500) ]

_st_code = sub.call(["./replace", "printf", ';\/\/printf', "list.c"])

# compile program
st_code = sub.call(["make"]) 
st_code = sub.call(["make"])
if st_code != 0: # make fails
    print "Compilation error!" 
    exit(0)

# execute program
for tc in test_cases:
    st_code = sub.call(["timeout", "60", "./main", str(tc[0]), str(tc[1])])

# run valgrind
# NOTE: m = 10, n = 10. Can be customized
output = sub.Popen(["timeout", "60", "valgrind", "./main", "10", "10"], stderr=sub.STDOUT, stdout=sub.PIPE).communicate()[0].replace("\n", " ").split() 
heap = output[output.index("HEAP"):]
errs = heap[heap.index("ERROR"):]

numallocs = int(heap[7].replace(",", "")) 
numfrees  = int(heap[10].replace(",", "")) 

numerrors = int(errs[2].replace(",", "")) 

if numallocs == numfrees:
    print "Valgrind -- Memory Leaks: 1.5 marks" 
else:
    print "Valgrind -- Memory Leaks: 0   marks"

if numerrors > 0:
    print "Valgrind -- Errors: 0   marks"
else:
    print "Valgrind -- Errors: 1.5 marks"

_st_code = sub.call(["make", "clean"])

