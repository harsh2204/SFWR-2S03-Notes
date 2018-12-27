
#include<stdio.h>
#include<stdbool.h>


int main() {
  
  int m, n, count_two, count_three, count_five, count_six, count_ten,
    count_fifteen, count_none = 1, 
    remainder_two, remainder_three, remainder_five;
  
  bool divisible;
  
  printf("Enter a positive integer : ");
  scanf("%d", &n);
  
  if( n <= 2) {
    printf(" WRONG INPUTS\n");
    return 0;
  }
  
  count_two = count_three = count_five = count_six = count_ten = count_fifteen = 0;
  
  
  int i,j;
  i = j = 1;
  printf("\nFibonacci Sequence up to %d : \n", n);
  printf(" %d, %d,", j, i);
  while (i<n) {
    remainder_two = i % 2;
    remainder_three = i % 3;
    remainder_five = i % 5;
    
    divisible = false;
    if(!remainder_two) {
      count_two++;
      divisible = true;
    }
    if(!remainder_three) {
      count_three++;
      divisible = true;
    }
    if(!remainder_five) {
      count_five++;
      divisible = true;
    }
    if(!remainder_two & !remainder_three)
      count_six++;
    if(!remainder_two & !remainder_five)
      count_ten++;
    if(!remainder_three & !remainder_five)
      count_fifteen++;
    if(!divisible)
      count_none++;
    
    int k = i;
    i += j;
    j = k;
    if(i < n)
      printf(" %d,", i);
  }
  printf("\n\n divisible by:\n");
  
  printf(" 2  %15d\n", count_two);
  printf(" 3  %15d\n", count_three);
  printf(" 5  %15d\n", count_five);
  printf(" 6  %15d\n", count_six);
  printf("10  %15d\n", count_ten);	
  printf("15  %15d\n", count_fifteen);	
  printf(" -  %15d\n", count_none);  
  return 0;
}
