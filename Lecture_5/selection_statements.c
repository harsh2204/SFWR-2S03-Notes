//Types of statements ---
//
//Selection statements
//	if - else
//	switch
//Iteration statements
//	for
//	while
//	do
//Jump statements
//	break
//	continue
//	return goto
//
//--------------------------------------------------------------------------------
//
//if (expression)
//	{
//	statements
//	}
//else	{
//	statements
//	}
//
//Cascaded If
//
//if (expression)
//	{
//	statements
//	}
//else if (expression)
//	{
//	statements
//	}
//else	{
//	statements
//	}
//
//--------------------------------------------------------------------------------
//
//Conditional expressions
//
int i = 1;
int j = 2:

int k = (i > j)? i : j;
// if (i > j) is true then k = 1 else k = j
//
// exp1? exp2:exp3
// if exp1 is true then return exp2 else return exp3
//
// If you have only one statement for your if statement you do not need the curly braces
// if(expr)
// 	statement;
//--------------------------------------------------------------------------------
//
//Logical Expressions
//	
//	0	-	false
//	1	- 	true
//
//Relational operators
//	<, <=, >, >=
//
//Equality operators
//	==, !=
//
//Logical operators
//	!	-	negation
//	&&	-	and
//	||	-	or
//
//--------------------------------------------------------------------------------
//Example
//
int i = -10;
int j = -5;
int k = -1;

if (i<j<k)
{
	printf(true);
}else
{
	printf(false);
}
// Any logical expression will associate to the left meaning the left expressions will be evaluated first.
// 
// i < j < k should be written as i < j && j < k
// problem arises when i < j is evaluated, it is changed to 1. 1 < k is not the correct expression to look for.
//--------------------------------------------------------------------------------
//
//Q:	Find the largest and the smallest number among 4 given numbers
//		a1	a2	a3	a4
//		 \	/	 \	/
//		    >		     >
//		     \		    /
//		    max1	  max2
//		    	\	  /
//		    	 \	 /
//		    	     >
//		    	     |
//		    	    Max
//		    	    Min
//
//Code:		     

if (a1 > a2)
{
	max = a1;
	min = a2;
}
else{
	max = a2;
	min = a1;
}
//.. And so on
//
//--------------------------------------------------------------------------------
//For Loops
//
//for(exp1 ; exp2; exp3)
//	{
//	statements
//	}
//
//Example: Simple summing loop that counts sums up to n numbers.

int i;
int sum = 0;
int n = 10;
for (i = 0; i<n; i++)
	{
	sum+=i;
	}
//
//--------------------------------------------------------------------------------
//While Loops
//
//while(expression)
//{
//
//}
//
//Example: Powers of 2
//
int i = 1;
int n = 10;
while (i<n)
{
	i = i * 2;
}
//
//while(1) <- infinite loop
//
//continue can allow you to skip code in a loop
//for ()
//{
// 	if (cond)
// 		continue
// #CONTINUE SKIPS ALL THE CODE UNDER IT AND GOES BACK TO THE BEGINING OF THE LOOP#
//
//--------------------------------------------------------------------------------
//Do While Loops
//
//do{
//	statements
//}
//while(breaking_condition);
