//Strings
//
//typedef int size_t;
//typedef double REAL;
//
//Example
//
//typedef float REAL;
//
// a, b, return value are all of type REAL which is float.
//REAL sum(REAL a, REAL b)
//{
//	return a+b;
//}
//
//-------------------------------------------------------------------------------- 
//Example 2
//
//const char *s // Pointer to a string which you can only read and on change.
//
//size_t strlen(const char *s)
//{
//	size_t n = 0;
//	for(;*s!='\0';s++)
//		n++;
//	return n;
//}
//
//Another way to do this, maybe even better way to do it.
//
//size_t strlen(const char *s)
//{
//	size_t n = 0;
//	while(*s++)
//		n++;
//	return n;
//
//}
//
//Yet another way to do this.
//
//size_t strlen(const char *s)
//{
//	const char *p = s;
//	while(*s)
//		s++;
//	return s-p;
//}
//
//-------------------------------------------------------------------------------- 
//String concatentation
//
// s1 ->	| a | b | c | \0 |  |  |  
// s2 ->	| c | d | e | \0 |  |  |   
//
//char *strcat(char *s1, const char *s2)
//{
//	char *p = s1;
//	while(*p!=0)
//		p++;
//	while (*s2 != 0)
//	{
//		*p = *s2;
//		p++;
//		s2++;
//	}
//	*p = 0; // End the string with a \0
//	return s1;
//}
//
//Another VERSION!!!
//
//
//char *strcat(char *s1, const char *s2)
//{
//	char *p = s1;
//	while(*p)
//		p++;
//	while (*p++ = *s2++)
//		;
//	*p = 0; // End the string with a \0
//	return s1;
//}
//
//--------------------------------------------------------------------------------
//CLI Arguements
//
//int main(int argc, char *argv[])
//{
//	argc -> the number of arguements + 1
//	argv -> the pointer to the input arguments array
//}
//
// ./main 1 10 1.2
//
//argv -->	 |  | -> "main"
//		 |  | -> "1"
//		 |  | -> "10"
//	 	 |  | -> "1.2"
//
//int main(int argc, char *argv[])
//{
//	//argc -> the number of arguements + 1
//	//argv -> the pointer to the input arguments array
//	int n = atoi(argv[1]);
//	int m = atoi(argv[2]);
//	double f = atof(argv[3]);
//
//}

