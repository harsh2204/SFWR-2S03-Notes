//String
//  ________________
// | a | b | c | \0 | 
//  ----------------
// char *p;
// p = "abc";
// p ->
//  ________________
// | a | b | c | \0 | 
//  ----------------
//
//  char s1[] = "abc"; // Array of characters - can be changed 		| a | b | c | 0 | 	s1[1] = 'd' valid
//  char *s2 = "abc";  // Pointer to a string - cannot be changed	| a | b | c | 0 |	s2[1] = 'd' invalid
//
//
//  char date1[8] = 	"June 14";
//  			|J |u |n |e |_ |1 |4 |\0 | 
//
//  char date1[9] = 	"June 14";
//  			|J |u |n |e |_ |1 |4 |\0 |\0 | 
//
//  char date1[7] = 	"June 14";
//  			|J |u |n |e |_ |1 |4 |
//
//  
