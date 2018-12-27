
How to test your code:
unzip checkA2P3.zip
copy your sinc.c file into checkA2P3 directory
run the executable file testp3

If your code works well the output will be:

 ----------------- N = 10, a = 0, b = 1, x = 0.5---------------
 norm of difference = 0.00000e+00 
 Details: 
 i =   0	 error =       0.000e+00
 i =   5	 error =       0.000e+00
 i =  10	 error =       0.000e+00
 i =  13	 error =       0.000e+00
 i =  20	 error =       0.000e+00
 ----------------- N = 21, a = 1.2, b = 3.01, x = 2.95---------------
 norm of difference = 0.00000e+00 
 Details: 
 i =   0	 error =       0.000e+00
 i =  10	 error =       0.000e+00
 i =  21	 error =       0.000e+00
 i =  28	 error =       0.000e+00
 i =  42	 error =       0.000e+00
 ----------------- N = 200, a = 3, b = 5, x = 3.06---------------
 norm of difference = 0.00000e+00 
 Details: 
 i =   0	 error =       0.000e+00
 i = 100	 error =       0.000e+00
 i = 200	 error =       0.000e+00
 i = 266	 error =       0.000e+00
 i = 400	 error =       0.000e+00




Marking scheme:
Each of functions sinc, comph, comprho, complamda and the makefile -> 0.5 point
The function wj -> 2.5 points

If the function wj does not compute correctly
             the first element of array -> 0.75 point deduction
             middle elements of array   -> 1    point deduction
             the last element of array  -> 0.75 point deduction



 
