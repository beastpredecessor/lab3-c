  
// Author: xuanyi shen xjs5065@psu.edu
// Collaborator: Jacob Hallowell jph5997@psu.edu
// Collaborator: Jared Cole jcc6066@psu.edu
// Collaborator: Zihao Xu     zbx5084@psu.edu
// Section: 4
// Breakout: 9
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sum_n(int n);

int sum_n(int n){
  if(n != 0)
    return n + sum_n(n-1);
  else
    return n;
}

void print_n(const char *s, int n){
  if(n ==0)
   return;
  else
   printf("%s\n",s);
   print_n(s, n-1);
}

int main(void){
  int number = atoi(readline("Enter an int: "));
  int result;
  result = sum_n(number);
  printf("sum is %d.\n", result);
  char *string = readline(("Enter a string: "));
  print_n(string,number);
  return 0;
}